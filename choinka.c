
#include <stdio.h>
#include<stdlib.h>
int main()
{
int a;
printf("Podaj wysokosc(maksymalna choinka to 17:\n");
scanf("%d",&a);
int i;
int j;

if(a>=18)
printf("Mowilem ze nie wieksze od 17 :)\n");
else
{
   for(i=1;i<=a;i++)
    {
	if(i<=4)//pierwszy segment
	{
        	for(j=1;j<=a-i;j++)
        	{
            	printf(" ");
       		}
        	for(j=1;j<=i*2-1;j++)
        	{
            	printf("*");
        	}
	}
      	if(i>4&&i<=10)//2  segment
        {
                for(j=1;j<=a-i+3;j++)
                {
                printf(" ");
                }
                for(j=1;j<=i*2-1-6;j++)
                {
                printf("*");
                }
        }

	 if(i>10&&i<=17)//3 segment
        {
                for(j=1;j<=a-i+7;j++)
                {
                printf(" ");
                }
                for(j=1;j<=i*2-1-14;j++)
                {
                printf("*");
                }
        }




//koniec segmentu
printf("\n");
    	}
//robienie pienia
  for(i=1;i<=a-2;i++ )
        {
            printf(" ");
        }
        printf("| |\nWesolych swiat!\n");
	// przeslane od gita do githuba
}
    return 0;
}
