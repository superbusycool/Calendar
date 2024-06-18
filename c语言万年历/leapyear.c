#include <stdio.h>
int leapyear (int y){//determine if this year is a leap year
	int i=0;//The default year is an common year
	if(y%100==0){//Consider whether this year can be divided by 100
		if(y%400==0){
			i=1;
		}
	} else {
	    if (y%4==0){
		    i=1;
	    }
	}//i=1 leapyear i=0 common year
	return i;
	
}//end function

