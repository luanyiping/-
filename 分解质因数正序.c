#include <stdio.h>
int main()
{
   int n,k;
   printf("please input the number:\n");
   scanf("%d",&n);
   for(k=2;k<n;k++)
   {
       while(k!=n)
     {
       if(n%k==0)
       {
           printf("%d\n",k);
           n=n/k;
       }
       else 
	   break;         //����whileʹk+1                
     }
   }
   printf("%d\n",n);       //��ӡ���һ������������k����n�ǵ��Ǹ�
    return 0;
}

