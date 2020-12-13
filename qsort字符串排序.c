#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int cmp(const void* p1, const void* p2)
{
	return((*(char*)p1) - (*(char*)p2));
}
bool b(char* s, char* t)
{
	int ls = strlen(s);
	int lt = strlen(t);
	if (ls != lt)
	{
		return false;
	}
	qsort(s, ls, sizeof(s[0]), cmp);
	qsort(t, lt, sizeof(t[0]), cmp);
	if (strcmp(s, t) == 0)
	{
		return true;
	}
}
int main1()
{
	char s[40], t[40];
	gets(s);
	gets(t);
	if (b(s, t))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
}