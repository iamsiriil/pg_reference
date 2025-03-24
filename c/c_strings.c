#include <stdio.h>

int	main(void)
{
	{
		// Adjacent strings are concatenated
		char	*str = "This " "is " "a " "string!";
		printf("%s\n", str);
	}
	{
		char	*str = "\"this is a quotation\"";
		printf("%s\n", str);
	}
	{
		// When declating strings as array of characters
		// the termination char may or may not be present
		char	str[5] = {'h','e','l','l','o'};
		for (int i = 0; str[i] != '\0'; i++)
			printf("%c", str[i]);
		printf("\n");
	}
	return (0);
}
