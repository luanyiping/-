#include<stdio.h>
#define PI 3.14
int main()
{
	double r,h,s1,s2;
	printf("请输入圆柱体的底面半径和高:");
	scanf("%lf %lf",&r,&h);
	s1=PI*r*r*h;
	s2=PI*r*r*2+2*PI*r*h;
	printf("圆柱体的体积为%f\n",s1);
	printf("圆柱体的表面积为%f\n",s2);
	
}

