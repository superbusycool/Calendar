
#ifndef _DECLARATION_H_ 
#define _DECLARATION_H_ 
#include <stdio.h>
#include "declaration.h"// include all definition
#include <windows.h>


#endif   //prevent Repeated definition 
 
int main()
{   
	int y,m,d,x,w,ld,lm,*p1,*p2;//y=year m=month d=day lm=lunar month ld=lunar days
	int count=0;
	x=0;
	y=2000;m=1;w=6;d=1; lm=11;ld=25;
	//January 1, 2000 is the sixth day of the week and the 25th day of the winter moon in the lunar calendar
	p1=&lm;//P1 points to the lunar month
	p2=&ld;//P2 points to the lunar month
	
	printf("本万年历支持1900~2100年间五十年的日期查询\n请在全屏状态下使用\n\n");
	begin : 
	//What users see 
//	gotoxy(1,wherey()+2);
	printf("请选择您要执行的操作\n"); 
	printf("0:退出\n");
	printf("1:查询某年日历\n");
	printf("2:查询某月日历\n");           							
	printf("3:查询公历日期所对应的农历与节假日信息\n");                    
	
	scanf("%d",&x);
	switch (x)
	//Select the function to proceed with
	{
		case 0:break;//finish the program
		case 1: printf("请按照'2001'格式输入年\n");//Input format
				scanf("%d",&y);//Program read in year
				year(y);//Print a calendar for one year
				gotoxy(1,70);
				break;
         
		case 2: printf("请根据'200001'输入年月\n");//Input format
				scanf("%4d%2d",&y,&m);//Program read in year and month
				month(y,m);//Prints the calendar for the specified month
				gotoxy(1,wherey());
				goto begin; //return to the "begin"
		case 3: 
				printf("请按照'20010101'格式输入年月日\n");
				scanf("%4d%2d%2d",&y,&m,&d);//Program read in year ,month and day
				w=week(y,m,d);//Calculate the day of the week
				printf("%d年%d月%d日是",y,m,d);
				printweek(w);//Output results
				printf("|农历"); 
				lunarcalendar(y,m,d,p1,p2);//Calculate lunar data
				lunarcalendarmonth(lm);//Output lunar month
				lunarcalendarday(ld);//Output lunar day
				count=festival(y,m,d,lm,ld,2);     //Check whether there are festivals on the day, if so, output it
				printf("\n");
				printf("\n");
		                 													
				goto begin;//return to the "begin"
		default:printf("警告：请输入0~3之间的数字!\n");goto begin;
	}
	
	
	return 0;
}   //end main 
