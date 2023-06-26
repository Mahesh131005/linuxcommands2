#include<stdio.h>
#include<stdlib.h>

void main()
{
        int year;
        system("clear");
                printf("\n ENTER ANY YEAR : ");
        scanf("%d",&year);


                if(year%400==0)
                {
                        printf("\n GIVEN YEAR IS LEAP YEAR %d\n",year);
                }
                       else

                               if(year%100==0)
                                       printf("\n GIVEN YEAR IS NOT A LEAP YEAR %d\n",year);

        else if(year%4==0)
        {
                printf("\n GIVEN YEAR IS LEAP YEAR %d\n",year);
        }
        else
                printf("\n GIVEN YEAR IS NOT A LEAP YEAR %d\n",year);
}

