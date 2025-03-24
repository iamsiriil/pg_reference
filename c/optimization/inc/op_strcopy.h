#ifndef OP_STRCOPY_H
# define OP_STRCOPY_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_strt
{
	char	*src;
	char		*dst;
	size_t		size;
	t_time		*ttime;
}	t_strt;

t_strt	*op_initialize_test(int n, size_t size)
{
	t_strt	*str_tests = (t_strt *)malloc(sizeof(t_strt) * n);
	if (!str_tests)
		return (NULL);

	for (int i = 0; i < n; i++) {
		str_tests[i].src = (char *)malloc(sizeof(char) * (size + 1));
		str_tests[i].dst = (char *)malloc(sizeof(char) * (size + 1));
		str_tests[i].ttime = (t_time *)malloc(sizeof(t_time));

		if (!str_tests[i].src || !str_tests[i].dst || !str_tests[i].ttime) {
			for (int i = 0; i < n; i++) {
				free(str_tests[i].src);
				free(str_tests[i].dst);
				free(str_tests[i].ttime);
			}
			free(str_tests);
			return (NULL);
		}
		memset(str_tests[i].src, 'A', size);
		str_tests[i].src[size] = '\0';
		str_tests[i].dst[0] = '\0';
		str_tests[i].size = size;
		str_tests[i].ttime->dur = 0.0;
	}
	return (str_tests);
}

char	*op_strcpy01(char *dest, const char *src)
{
	int	i = 0;

	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

char	*op_strcpy02(char *dest, const char *src)
{
	char	*ptr = dest;

	while ((*dest++ = *src++)) ;
	
	return (ptr);
}

char	*op_strcpy03(char *dest, const char *src)
{
	char	*ptr = dest;

	do {
		*(dest + 0) = *(src + 0);
		*(dest + 1) = *(src + 1);
		*(dest + 2) = *(src + 2);
	} while (*(dest += 3) && *(src += 3));

	return (ptr);
}

char	*op_strcpy04(char *dest, const char *src, size_t size)
{
	size_t	i, sz = sizeof(size_t);

	for (i = 0; i < (size / sz); i++)
		*((size_t *)(dest + i * sz)) = *((const size_t *)(src + i * sz));

	for (i *= sz; i < size; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

char	*op_strcpy05(char *dest, const char *src, size_t size)
{
	size_t	i, sz = sizeof(size_t);

	for (i = 0; i < size / (3 * sz); i++) {
		*((size_t *)(dest + i * 3 * sz)) = *((const size_t *)(src + i * 3 * sz));
		*((size_t *)(dest + i * 3 * sz + sz)) = *((const size_t *)(src + i * 3 * sz + sz));
		*((size_t *)(dest + i * 3 * sz + sz + sz)) = *((const size_t *)(src + i * 3 * sz + sz + sz));
	}

	for (i *= 3 * sz; i < size; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

#endif
