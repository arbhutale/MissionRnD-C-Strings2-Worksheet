/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char* findlastword(char * str)
{
	char *result = NULL;
	int i = 0;
	char *first, *second;
	first = str;
	second = str;
	while (*second != '\0')
	{
		//printf("hi");
		while (*second != ' '&& *second != '\0')
		{
			second++;
		}
		if (*second == '\0')
		{
			result = (char*)calloc(sizeof(char), (second - first));
			while (first != second)
			{
				result[i] = *first;
				first++;
				i++;
			}
			result[i] = '\0';
		}
		first = second + 1;
		second = second + 1;
	}
	return result;
}
char * get_last_word(char* str)

{
	//printf("%s", str);
	int index1 = 0, index2 = 0;
	char *temp = NULL;
	char *result;
	char *str1;
	result = (char*)calloc(sizeof(char), 50);
	str1 = (char*)calloc(sizeof(char), 100);
	temp = (char*)calloc(sizeof(char), 100);
	//str1=reverse(str);
	//printf("%s", str1);
	//temp = str;
	while (str[index1] != '\0')
	{
		result[index2] = str[index1];
		index1++;
		index2++;

	}
	index1--;
	while (str[index1] == ' ')
	{
		index1--;
	}
	index1++;
	result[index1] = '\0';
	//printf("%s", result);
	result = findlastword(result);
	printf("%s", result);
	return result;
}
