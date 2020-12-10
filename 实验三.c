typedef enum
{
	red,yellow,green,blue,brown
}color;
const char*color_name[]={"╨Л","╩ф","бл","ю╤","вь"};
int main()
{
	color a,b,c;
	for(a=red;a<=brown;a++)
	{
		for(b=red;b<=brown;b++)
		{
			for(c=red;c<=brown;c++)
			{
				if(a!=yellow&&b!=brown&&a!=c)
					printf("A=%s B=%s C=%s\n",color_name[a],color_name[b],color_name[c]);
			}
		}
	}
}



