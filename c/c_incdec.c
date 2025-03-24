#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	{
		printf("\n\tINCREMENT : i = 0; while (i++ < 10)\n");
		int	i = 0;
		while (i++ < 10)
			printf("%d ", i);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : i = 0; while (++i < 10)\n");
		int	i = 0;
		while (++i < 10)
			printf("%d ", i);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : i = 0; do {} while (i++ < 10)\n");
		int	i = 0;
		do {
			printf("%d ", i);
		} while (i++ < 10);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : i = 0; do {} while (++i < 10)\n");
		int	i = 0;
		do {
			printf("%d ", i);
		} while (++i < 10);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : do {} while (*str++)\n");
		char	*str = "This is a string!";
		do {
			printf("%c", *str);
		} while (*str++);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : while (*str++)\n");
		char	*str = "This is a string!";
		while (*str++)
			printf("%c", *str);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : while (*str) str++\n");
		char	*str = "This is a string!";
		while (*str)
			printf("%c", *str++);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : while (*++str)\n");
		char	*str = "This is a string!";
		while (*++str)
			printf("%c", *str);
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : write(1, str, sizeof(str))\n");
		char	str[] = "This is a string!";
		write(1, str, sizeof(str));
		printf("\n");
	}
	{
		printf("\n\tINCREMENT : while (*str) write(1, str++, 1)\n");
		char	*str = "This is a string!";
		while (*str) write(1, str++, 1);
		printf("\n");
	}

	return (0);
}

