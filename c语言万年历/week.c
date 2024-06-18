#include <stdio.h>
int week (int y,int m,int d){
    int i,j,w,sum1,sum2;//y=year m=month d=date w=week 
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//Set an array of days of each month in an ordinary year
    sum1=0;
    sum2=0;
    w=1;//19000101 is SAT 
    if(leapyear(y)==1){//Judge whether this year is a leap year
	    a[2]=29;//February in leap year is 29 days
    }     
    for(i=1;i<m;i++){
        sum2+=a[i];
    }    
    sum2+=d;//number of days in the last year
    sum1+=sum2;
    for(j=1900;j<y;j++){
	    if(leapyear(j)==1){
    	        sum2=366;
	    }   else {
		        sum2=365;
	    }
        sum1+=sum2;//Total days to January 1, 2000
    }       
    sum1+=w;
    sum1-=1;				 
    w=sum1%7;//Calculate the day of the week for the specified days
	return w;//Return calculation results
}//end week
