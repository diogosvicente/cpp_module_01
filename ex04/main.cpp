#include <iostream>
#include <fstream>
#include <string>

const std::string RED 	= "\033[31m";
const std::string ULINE = "\033[4m";
const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

std::string replaceLine(const std::string &line, const std::string &s1, const std::string &s2)
{
    std::string newLine; // New line with substitutions
    size_t pos = 0;
    size_t foundPos = line.find(s1, pos); // Find the first occurrence of s1

    while (foundPos != std::string::npos)
    {
        // Copy the characters between pos and foundPos positions to the new line
        newLine += line.substr(pos, foundPos - pos);
        // Add s2 to the new line instead of s1
        newLine += s2;

        // Update the position to continue searching from the end of the last substitution
        pos = foundPos + s1.length();
        // Find the next occurrence of s1 starting from the current position
        foundPos = line.find(s1, pos);
    }

    // Add the remaining characters from the original line to the new line
    newLine += line.substr(pos);

    return(newLine);
}

void ftReplace(const std::string &filename, const std::string &s1, const std::string &s2)
{
    // Open the input file
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << RED << "Failed to open input file: " << ULINE << filename << RESET << std::endl;
        return;
    }

    // Create the output file
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << RED << "Failed to create output file: " << ULINE << filename + ".replace" << RESET << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
	{
        std::string newLine = replaceLine(line, s1, s2);

        // Write the new line to the output file
        outputFile << newLine << std::endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    std::cout << GREEN << "Replacement complete. Output file: " << ULINE << filename + ".replace" << RESET << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 4)
	{
        std::cerr << RED << "Error: You have to pass 3 arguments: <filename> <s1> <s2>" << RESET << std::endl;
        return(1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    ftReplace(filename, s1, s2);

    return(0);
}