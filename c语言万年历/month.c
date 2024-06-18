#include <stdio.h>
void month (int y ,int m){
	int d,ld,lm,*p1,*p2;
	d=1; 
	ld=25;
	lm=11;
	p1=&lm;
	p2=&ld;
	
	int i,j,w,z,x1,y1,x2,y2,y3,t;
	t=0;
	d=1;//the first day of month 
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};  
	if(leapyear(y)==1){
		a[2]=29;
	}
	w=week(y,m,d);
	z=wherex();//Record the cursor position at this time
	z+=5; 
	gotoxy(z,wherey());//There is a gap between the output and the left side               
	printf("-----------------------------------------------");//Separator
	gotoxy(z,wherey()+1);//Move the cursor to the next line at the beginning
	printf("                %d年%d月",y,m);
	gotoxy(z,wherey()+1);//Move the cursor to the next line at the beginning
	printf("-----------------------------------------------");//Separator
	gotoxy(z,wherey()+1);//Move the cursor to the next line at the beginning
	printf("周日   周一   周二   周三   周四   周五   周六 ");//Calendar header
	gotoxy(z,wherey()+2);//Move the cursor to the second line below the beginning, leaving a gap
	for(i=0,j=0;i<w;i++,j++){
		printf("       ");
	}//make sure the first day is on the right location
	
	for(d=1;d<=a[m];d++,j++){
		lunarcalendar(y,m,d,p1,p2);//Determine the lunar date
		x1=wherex();
		y1=wherey();//Record the cursor position at this time 
		if(d<10){
			
			printf("  %d    ",d);
		}else{
			printf(" %d    ",d);
		}
			x2=wherex();
			y2=wherey();//Record the cursor position at this time 	
			gotoxy(x1,y1+1);//Go to the beginning of the next line
			t=festival(y,m,d,lm,ld,1);
			//Output festival in light blue
			if(t==0){
				color(8);
				if(ld==1){
					lunarcalendarmonth(lm);
				}else{
				lunarcalendarday(ld);
			}
				//Output lunar day with gray				
			}
			color(7);//Changes the character back to white
			gotoxy(x2,y2);//Move the pointer back to its original position													
		if(j==6){
			if(d<a[m]){
			gotoxy(z,wherey()+2);//Wrap after one week, and there are days left to output
			j=-1;
			}
		}
	}
	gotoxy(z,wherey()+2);//Move the cursor to the second line below the beginning, leaving a gap
//	printf("-----------------------------------------------");//Separator
	gotoxy(wherex(),wherey()+1);
//	gotoxy(z,wherey()+20);//Go to the beginning of the next line
//	printf("-----------------------------------------------");//Separator
}//end function
