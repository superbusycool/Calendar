#include <stdio.h>
void lunarcalendarmonth(int lm)
{
	switch(lm){
		case 1:printf("正月");break;
		case 2:printf("二月");break;
		case 3:printf("三月");break;
		case 4:printf("四月");break;
		case 5:printf("五月");break;
		case 6:printf("六月");break;
		case 7:printf("七月");break;
		case 8:printf("八月");break;
		case 9:printf("九月");break;
		case 10:printf("十月");break;
		case 11:printf("冬月");break;
		case 12:printf("腊月");break;
		case 31:printf("闰正月");break;
		case 32:printf("闰二月");break;
		case 33:printf("闰三月");break;
		case 34:printf("闰四月");break;
		case 35:printf("闰五月");break;
		case 36:printf("闰六月");break;
		case 37:printf("闰七月");break;
		case 38:printf("闰八月");break;
		case 39:printf("闰九月");break;
		case 310:printf("闰十月");break;
		case 311:printf("闰冬月");break;
		case 312:printf("闰腊月");break; 
	}//Output lunar month
}//end function
