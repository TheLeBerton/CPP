#include <fstream>
#include <iostream>

static	bool	is_valid_args(int argc, char **argv)
{
	if (argc != 4)
		return (false);
	if (std::string(argv[2]).empty() || std::string(argv[3]).empty())
		return (false);
	return (true);
}


static std::string	replace_all(std::string line, const std::string &s1, const std::string &s2)
{
	size_t	pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
	return (line);
}


int	main( int argc, char **argv )
{
	if (!is_valid_args(argc, argv))
	{
		std::cout << "Usage: " << argv[0] << " <fileName> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string	fileName(argv[1]);
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);

	std::ifstream inputFile(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Could not open file " << fileName << std::endl;
		return (1);
	}

	std::string	outName(fileName + ".replace");
	std::ofstream outputFile(outName.c_str(), std::ios::out | std::ios::trunc);
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Could not create output file " << outName << std::endl;
		return (1);
	}

	std::string	line;
	while (std::getline(inputFile, line))
		outputFile << replace_all(line, s1, s2) << std::endl;

	return (0);
}
