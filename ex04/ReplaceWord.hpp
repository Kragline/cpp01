#ifndef REPLACEWORD_HPP
# define REPLACEWORD_HPP

# include <iostream>
# include <fstream>
# include <cctype>

bool	checkArguments(int argc, char **argv);
bool	searchAndReplace(char *filename, char *target, char *toReplace);

#endif