#include<stdio.h>
#include<math.h>
double cal(double x1,double y1,double x2,double y2)
{

	return sqrt( (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1) );
}

int main() 
{

	int i;

	double x[2],y[2];
	printf("请输入横纵坐标:");

	for(i=0; i<2; i++)

		scanf("%lf %lf",&x[i],&y[i]);

	printf("两点距离为%.2lf\n",cal(x[0],y[0],x[1],y[1]));

	return 0;
}





