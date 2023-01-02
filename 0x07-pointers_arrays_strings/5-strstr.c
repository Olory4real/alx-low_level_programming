#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

	while (*l == *p && *p != '\0')
	{
		l++;
		p++;
	}
	return (haystack);
	}

	return (0);
}
