#include <iostream>
#include <fstream>
#include <string>

const std::string RED	=	"\033[31m";
const std::string RESET	=	"\033[0m";

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2)
{
    // Open the input file
    std::ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        std::cerr << "Failed to open input file: " << filename << std::endl;
        return;
    }

    // Create the output file
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile)
    {
        std::cerr << "Failed to create output file: " << filename + ".replace" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    std::cout << "Replacement complete. Output file: " << filename + ".replace" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << RED << "Error: You have to pass 3 arguments: <filename> <s1> <s2>" << RESET << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceStringInFile(filename, s1, s2);

    return 0;
}
