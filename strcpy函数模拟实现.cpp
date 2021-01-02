#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
using namespace std;
char *my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


