#include "ReplaceWord.hpp"

static bool	isEmpty(char *arg)
{
	if (!arg[0])
		return (true);
	for (int i = 0; arg[i]; i++)
		if (!isspace(arg[i]))
			return (false);
	return (true);
}

bool	checkArguments(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong argument count" << std::endl;
		std::cerr << "Usage: ./ex04 <filename> s1 s2" << std::endl;
		return (false);
	}
	for (int i = 0; argv[i]; i++)
		if (isEmpty(argv[i]))
			return (std::cerr << "Empty argument detected" << std::endl, false);
	return (true);
}

static void	replaceTheWord(std::string &line, std::string target, std::string toReplace)
{
	size_t	pos = 0;

	while ((pos = line.find(target, pos)) != std::string::npos)
	{
		line.erase(pos, target.length());
		line.insert(pos, toReplace);
		pos += toReplace.length();
	}
}

bool	searchAndReplace(char *filename, char *target, char *toReplace)
{
	std::string		lineRead;
	std::ifstream	infile(filename);

	if (!infile.is_open())
		return (std::cerr << "Couldn't open the file named " << filename << std::endl, false);

	std::string		newFileName = std::string(filename) + std::string(".replace");
	std::ofstream	outfile(newFileName.c_str());

	if (!outfile.is_open())
		return (std::cerr << "Couldn't open the file named " << newFileName << std::endl, false);

	while (getline(infile, lineRead))
	{
		replaceTheWord(lineRead, target, toReplace);
		outfile << lineRead << std::endl;
	}

	infile.close();
	outfile.close();
	return (true);
}
