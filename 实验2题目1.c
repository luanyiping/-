#include<stdio.h>
int main()
{
	int i,a[4],max,min; 
	printf("�������ĸ�����:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
		max=a[0];
		min=a[0];
		if(a[i]>a[0])
		max=a[i];
		if(a[i]<a[0])
		min=a[i];
	}
	printf("���ֵΪ%d,��СֵΪ%d",max,min);
	
}
