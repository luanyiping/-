#include<iostream>
#include<cassert>
using namespace std;
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len = my_strlen("abcdef");
	//char arr[] = { 'a','b','c','d' };
	//  int len = my_strlen(arr);
	printf("%d\n", len);
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
}

