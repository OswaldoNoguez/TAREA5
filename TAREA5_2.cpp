#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	int var=1,x,s;
	for (s=1;s<=5;s++)
	{
		if (var<=9)
		{
			if (s!=1)
				printf("\n");
			for (x=s;x<=var;x++)
			{
				printf("%d",x);
				if (x==var and x!=1)
				{
					while (x>s)
					{
					x--;
					printf("%d",x);
					}
				break;
				}
			}
			var=var+2;
		}
	}
	return 0;
}
