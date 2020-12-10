#include<stdio.h>
int main()
{
	int age,hour,salary;
	printf("请输入员工年龄以及本周工作时间:");
	scanf("%d %d",&age,&hour);
	if(age<6)
	{
		if(hour<=40)
		{
			salary=40*hour;
			printf("该员工工资为: %d元",salary);
		}
		else
		{
			salary=1600+(hour-40)*60;
			printf("该员工工资为: %d元",salary);
			
		}
		
		
	}
	else
	{
		if(hour<=40)
		{
			salary=50*hour;
			printf("该员工工资为: %d元",salary);
		}
		else
		{
			salary=2000+(hour-40)*75;
			printf("该员工工资为: %d元",salary);
			
		}
		
	}
	return 0;
	
}
