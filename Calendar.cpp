#include<stdio.h>
#include<stdlib.h>
int day_code(int year)
{
	int daycode;
	daycode=(((year-1)*365)+((year-1)/4)-((year-1)/100)+(year/400)+1)%7;//DAYCODE OF  1 JANUARY OF ANY YEAR :(SUN=0,MON=1,TUE=2,WED=3,THUR=4,FRI=5 AND SAT=6).
	return daycode;
}
int main()
{
	char monthday[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y,i,j,day,week=0,daycode,c;
	printf("!*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_!\n");
	printf("!                                              !\n");
	printf("!                  CALENDAR                    !\n");
	printf("!..............................................!\n");
	printf("!****INPUT YEAR SHOULD WITH IN 1901 TO 9999****!\n");
	printf("!..............................................!\n");
	printf("!                                              !\n");
	printf("!               Made by S.R.M.                 !\n");
	printf("!*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_!\n\n");
	printf("\nEnter a valid year(yyyy):\n");
	scanf("%d",&y);
	if(y<1901 || y>9999)
	{
		system("color C7");//c=Red background and 7=White text.
		printf("\n****INPUT YEAR SHOULD WITH IN 1901 TO 9999****\nYOU SHOULD FOLLOW THE INSTRACTION.\n");
		exit(1);	
	}
	printf("\nSOHEL RAJA MOLLA.\nNETAJI SUBHASH ENGINEERING COLLEGE,GARIA.\nCOMPUTER SCIENCE AND ENGINEERING.\n");//DATE OF THIS PROJECT 5 MAY,2018.
	printf("\n\n*****************SOHEL RAJA MOLLA******************\n");
	printf("\n\n___________________%d CALENDAR___________________\n",y);
	if(((y%400==0)&&(y%100==0))||((y%4==0)&&(y%100!=0)))//FOR LEAP YEAR 
	{
		monthday[1]=29;
	}
	daycode=day_code(y);
	for(i=0;i<12;i++)//TO PRINT ALL MONTH INDIVITUALLY.
	{
		system("color E2");//E=Yellow background and 2=Green text.
		if(i==0)
		{
			printf("\n**********************JANUARY**********************\n\n");
		}
		else if(i==1)
		{
			printf("\n**********************FEBRUARY*********************\n\n");
		}
		else if(i==2)
		{
			printf("\n**********************MARCH************************\n\n");
		}
		else if(i==3)
		{
			printf("\n*********************APRIL*************************\n\n");
		}
		else if(i==4)
		{
			printf("\n************************MAY************************\n\n");
		}
		else if(i==5)
		{
			printf("\n**********************JUNE*************************\n\n");
		}
		else if(i==6)
		{
			printf("\n*********************JULY**************************\n\n");
		}
		else if(i==7)
		{
			printf("\n*********************AUGUST************************\n\n");
		}
		else if(i==8)
		{
			printf("\n********************SEPTEMBER**********************\n\n");
		}
		else if(i==9)
		{
			printf("\n*********************OCTOBER***********************\n\n");
		}
		else if(i==10)
		{
			printf("\n*********************NOVEMBER**********************\n\n");
		}
		else if(i==11)
		{
			printf("\n********************DECEMBER***********************\n\n");
		}
		printf("SUN \tMON \tTUES \tWED \tTHUR \tFRI \tSAT \n");
		printf("___________________________________________________\n\n");
		for(j=1;j<=daycode;j++)
		{
			printf("\t");
			week=daycode;
		}
		for(day=1;day<=monthday[i];day++)
		{
			week++;
			printf("%d\t",day);
			if(week>6)
			{
				printf("\n");
				week=0;
			}
		}
		daycode=week;//This inicilization is used to creat tab 
		printf("\n");
	}
	return 0;
}
