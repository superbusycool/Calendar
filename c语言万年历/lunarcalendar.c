#include <stdio.h>

void lunarcalendar(int y,int m,int d,int *p1,int *p2)
{
	int i,t,z,q;
	char a[10]={0};  //Read in the character group of the character year
	char b[10]={0};  //Read in the character group of the character month
	char c[40]={0};  //Read in the character group of the character day
	i=0;
	t=0;//Digital year
	q=0;//Digital month
	z=0;//Digital date
	FILE*p;
	char ch;
	
	if((p=fopen("calendar.txt","r"))==NULL)//Open date file
	{
		printf("ERROR\n");
	}
	for(; ;){           
		for(;ch!='a';){//"A" stands for the beginning of the year
			ch=fgetc(p);	
		}
		for(i=0;i<10;i++){
			a[i]=0;//Initialize year array
		}
		for(i=0;;){	
			ch=fgetc(p);
			if(ch!='/'){// '/' stands for the end of the year
				a[i]=ch;
				i++; 
			}else {
				break;//End of year reading
			}	
		}
		t=atoi(a);//Convert to digital year
		
		for(i=0;i<10;i++){
			b[i]=0;//Initialize month array
		}
		for(i=0; ;){	
			ch=fgetc(p);
			if(ch!='/'){   //'/' stands for the end of the month
				b[i]=ch;
				i++;
			}else {
				break;//End of month reading
			}	
		}
		q=atoi(b);         //Convert to digital month 
			
		for(i=0;i<40;i++){
			c[i]=0;        //Initialize day array
		}
		for(i=0;;){	
			ch=fgetc(p);
			if(ch!=','){   // ',' stands for the end of the year
				c[i]=ch;
				i++;
			}else {
				break;//End of day reading
			}	
		}
		z=atoi(c);//Convert to digital day
		
		if(t==y){
			if(q==m){
				if(z==d){
					break;//Stop the search when the month and day of the current year match
				}
			}
		}				
	} 
	for(i=0;i<10;i++){
			b[i]=0;        //Initialize month array
		}
		for(i=0;i<40;i++){
			c[i]=0;        //Initialize day array
		}	
	
	for(i=0;;){      
		ch=fgetc(p);
		if(ch!=','){//',' stands for the end of the year
			b[i]=ch;
			i++;
		} else{
			break;
			}
		}
		q=atoi(b);   //Convert to digital lunar month
		for(i=0;;){
			ch=fgetc(p);
			if(ch!=','){//',' stands for the end of the year
				c[i]=ch;
				i++;
				}else{
					break;
			}
		}
		z=atoi(c);   //Convert to digital lunar day 
				
	fclose(p); //Close the file
	*p1=q;//the lunar month
	*p2=z;//the lunar day	
}//end function

