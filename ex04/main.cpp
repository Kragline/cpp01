#include "ReplaceWord.hpp"

int	main(int argc, char **argv)
{
	if (!checkArguments(argc, argv))
		return (1);
	if (!searchAndReplace(argv[1], argv[2], argv[3]))
		return (1);
	return (0);
}
