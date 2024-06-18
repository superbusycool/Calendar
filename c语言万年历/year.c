#include <stdio.h>
void year(int y)
{
	int x1,y1,x2,y2,max,x0,y0;
	max=0;
	int m=1;
	int count=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(leapyear(y)==1){
		a[2]=29;
	}
	for(m=1;m<5;m++){
		x1=wherex();
		y1=wherey(); //Record the cursor position at this time 
		month(y,m);//Output calendar of one month
		if(max<wherey())
		{
			max=wherey();   //Record the lowest coordinates of the cursor
		}
		count++;
		if(count%4==0){
			gotoxy(1,max+3);
		}else{
			gotoxy(x1+51,y1);
		}

	}

    for(m=5;m<9;m++){
	    if(m==5){
	    	gotoxy(1,30);
	    	month(y,m);
		}
		if(m==6){
	    	gotoxy(52,30);
	    	month(y,m);
		}
		if(m==7){
	    	gotoxy(103,30);
	    	month(y,m);
		}
		if(m==8){
	    	gotoxy(154,30);
	    	month(y,m);
		}
	}
	for(m=9;m<13;m++){
	    if(m==9){
	    	gotoxy(1,50);
	    	month(y,m);
		}
		if(m==10){
	    	gotoxy(52,50);
	    	month(y,m);
		}
		if(m==11){
	    	gotoxy(103,50);
	    	month(y,m);
		}
		if(m==12){
	    	gotoxy(154,50);
	    	month(y,m);
		}
	}
	gotoxy(1,70);

	
}//end function
