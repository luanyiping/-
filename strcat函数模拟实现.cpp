#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cassert>
using namespace std;
char* my_stract(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_stract(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}