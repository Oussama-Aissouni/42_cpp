#include <fstream>
#include <iostream>

void	replace(std::string& str, std::string s1, std::string s2, size_t pos)
{
	int len;
	
	len = s1.length();
	str.erase(pos, len);
	str.insert(pos, s2);
}

void	find(std::string& str, std::string s1, std::string s2)
{
	size_t	pos;
	size_t	found;

	pos = 0;
	found = str.find(s1, pos);
	while (found != std::string::npos)
	{
		pos = found;
		replace(str, s1, s2, pos);
		found = str.find(s1, pos + s2.length());
	}
}

std::string name(std::string str)
{
	return (str + ".replace");
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of args" << std::endl;
		return (1);
	}
	std::ifstream infile (argv[1]);
	if (!infile)
	{
		std::cerr << "file not found" << std::endl;
		return(1);
	}
	if (argv[2][0] == '\0')
	{
		std::cerr << "invalid arg" << std::endl;
		return(1);
	}
	char	ch;
	std::string str;
	while (infile.get(ch))
		str.push_back(ch);
	find(str, argv[2], argv[3]);
	std::string out = name(argv[1]);
	std::ofstream outfile (out);
	outfile << str;
	return (0);
}
