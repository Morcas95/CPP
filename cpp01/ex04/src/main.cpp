#include <iostream>
#include <cstdlib>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./SedIsForLosers <filename> <string 1> <string 2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream file1(filename.c_str());
    std::ofstream file2((filename + ".replace").c_str(), std::ios::trunc);

    if(!file1.is_open())
	{
		std::cout << "Error opening " << filename << std::endl;
		return (1);
	}

	if(!file2.is_open())
	{
		std::cout << "Error opening " << filename + ".replace" << std::endl;
		return (1);
	}

    std::string line;

    int i = 0;
	while (std::getline(file1, line))
	{
		if(line.find(s1) != std::string::npos)
		{
			i = 0;
			while(line.find(s1 , i) != std::string::npos)
			{
				file2 << line.substr(i, line.find(s1, i) - i);
				file2 << s2;
				i = line.find(s1, i) + s1.length();
			}
			file2 << line.substr(i, line.length() - i);
		}
		else
		{
		
			file2 << line;
			i += line.length();
		}
		if (!file1.eof()) 
    		file2 << std::endl;
	}

    return (0);
}