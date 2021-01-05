#include<iostream>
using namespace std;
#include<cassert>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1==*str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > * str2)
		return (*str1 - *str2);
	else
		return (*str1 - *str2);
}
int main()
{
	const char* p1 = "abc";
	const char* p2 = "abcd";
	my_strcmp(p1, p2);
}