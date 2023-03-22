#include <iostream>

int main(int wordCount, char **str)
{
	if(wordCount != 1)
	{
		int k = 1;
		int i = 0;

		while (str[k])
		{
			i = 0;
			while (str[k][i])
			{
				std::cout << (char)std::toupper(str[k][i]);
				i++;
			}
			k++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
