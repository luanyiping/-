#include<stdio.h>
int main()
{
	int age,hour,salary;
	printf("������Ա�������Լ����ܹ���ʱ��:");
	scanf("%d %d",&age,&hour);
	if(age<6)
	{
		if(hour<=40)
		{
			salary=40*hour;
			printf("��Ա������Ϊ: %dԪ",salary);
		}
		else
		{
			salary=1600+(hour-40)*60;
			printf("��Ա������Ϊ: %dԪ",salary);
			
		}
		
		
	}
	else
	{
		if(hour<=40)
		{
			salary=50*hour;
			printf("��Ա������Ϊ: %dԪ",salary);
		}
		else
		{
			salary=2000+(hour-40)*75;
			printf("��Ա������Ϊ: %dԪ",salary);
			
		}
		
	}
	return 0;
	
}
