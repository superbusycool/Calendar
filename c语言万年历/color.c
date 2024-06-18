#include <stdio.h>

#include <windows.h>

void color(int x) //Set font color

{
	if(x>=0 && x<=15){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
	}else{
		color(7);
	}
	
/*
　　0=black               	 8=grey　　
  　1=blue              	 9=Light blue             　　                        
　　2=green              	 10=Light green              　　
　　3=lake blue            	 11=aqua     
　　4=red                	 12=light red      
　　5=purple                 13=light purple            　　
　　6=yellow                 14=light yellow             　　
　　7=white                	 15=Bright white       
　　
*/

}//end function
