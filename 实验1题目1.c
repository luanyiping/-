#include<stdio.h>
#define PI 3.14
int main()
{
	double r,h,s1,s2;
	printf("������Բ����ĵ���뾶�͸�:");
	scanf("%lf %lf",&r,&h);
	s1=PI*r*r*h;
	s2=PI*r*r*2+2*PI*r*h;
	printf("Բ��������Ϊ%f\n",s1);
	printf("Բ����ı����Ϊ%f\n",s2);
	
}

