#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdio>
#include <string>
#include <cstdlib>

int	runReplaceWord(const std::string& input, const std::string& s1, const std::string& s2)
{
    std::string	command = "./ex04 '" + input + "' '" + s1 + "' '" + s2 + "'";
    return (system(command.c_str()));
}

void	createFile(const std::string& filename, const std::string& content)
{
    std::ofstream	ofs(filename.c_str());

    ofs << content;
    ofs.close();
}

std::string	readFile(const std::string& filename)
{
    std::ifstream	ifs(filename.c_str());
	std::string		line;
    std::string		content;

	while (getline(ifs, line))
	{
		content += line;
		content += "\n";
	}

    return (content);
}

void	testBasicReplacement()
{
    std::string	input = "test_input.txt";
    std::string	output = "test_input.txt.replace";

    createFile(input, "hello world\nhello 42\n");
    int	ret = system("./ex04 test_input.txt hello hi");
    assert(ret == 0);

    std::string result = readFile(output);
    assert(result == "hi world\nhi 42\n");

    std::remove(input.c_str());
    std::remove(output.c_str());
}

void	testNoReplacement()
{
    std::string	input = "test_input2.txt";
    std::string	output = "test_input2.txt.replace";

    createFile(input, "foo bar\nbaz\n");
    int	ret = system("./ex04 test_input2.txt hello hi");
    assert(ret == 0);

    std::string result = readFile(output);
    assert(result == "foo bar\nbaz\n");

    std::remove(input.c_str());
    std::remove(output.c_str());
}

void	testEmptyFile()
{
    std::string	input = "empty.txt";
    std::string	output = "empty.txt.replace";

    createFile(input, "");
    int	ret = system("./ex04 empty.txt hello hi");
    assert(ret == 0);

    std::string result = readFile(output);
    assert(result == "");

    std::remove(input.c_str());
    std::remove(output.c_str());
}

int	main()
{
    testBasicReplacement();
    std::cout << "Basic tests passed!" << std::endl;

    testNoReplacement();
    std::cout << "No replacement tests passed!" << std::endl;
	
    testEmptyFile();
    std::cout << "Empty file tests passed!" << std::endl << std::endl;

    std::cout << "--- All tests passed successfully! ---" << std::endl;
    return (0);
}
