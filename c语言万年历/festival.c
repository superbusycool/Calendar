#include <stdio.h>
int festival(int y,int m,int d,int lm,int ld,int mod) //mod ==1 Output only one festival mod==2 Output multiple festivals
{
	int count=0; //
	color(3);
	if(m==1){
		if(d==1){
			printf("元旦");
			count++; //Add one to the number of festivals
		}
	}

	if(m==3){
		if(d==8){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("妇女节");
			count++; //Add one to the number of festivals
			
		}
	}if(m==3){
		if(d==12){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("植树节");
			count++; //Add one to the number of festivals
			
		}
	}if(y==2099||y==2100||y==2095||y==2096||y==2091||y==2092||y==2087||y==2088||y==2083||y==2084||y==2079||y==2080||y==2075||y==2076||y==2071||y==2072||y==2067||y==2068||y==2063||y==2064||y==2059||y==2060||y==2056||y==2052||y==1996||y==1992||y==1988||y==1984||y==1980||y==1976||y==1972||y==1968||y==1964||y==1960||y==1956||y==1952||y==1948||y==1940||y==1936||y==1932||y==1928||y==1924||y==1920||y==1904||y==1908||y==1912||y==1916||y==2000||y==2004||y==2008||y==2009||y==2012||y==2013||y==2016||y==2017||y==2020||y==2021||y==2024||y==2025||y==2028||y==2029
		||y==2032||y==2033||y==2036||y==2037||y==2040||y==2041||y==2042||y==2044||y==2045||y==2046||y==2048||y==2049||y==2050	){
		if(m==4){
			if(d==4){
				if(count!=0){
					if(mod==1){
						goto end;//If just ask for a holiday, end this function
					}
					printf("|");//If there are more than one festival on the same day, use "|" to divide it
				}
				printf("清明节");
				count++; //Add one to the number of festivals
			
			}
		}
	}if(y==2097||y==2098||y==2093||y==2094||y==2089||y==2090||y==2084||y==2086||y==2081||y==2082||y==2077||y==2078||y==2073||y==2074||y==2069||y==2070||y==2065||y==2066||y==2061||y==2062||y==2057||y==2058||y==2054||y==2055||y==2053||y==2054||y==2051||y==1997||y==1998||y==1999||y==1993||y==1994||y==1995||y==1989||y==1990||y==1991||y==1985||y==1986||y==1987||y==1981||y==1982||y==1983||y==1977||y==1978||y==1979||y==1973||y==1974||y==1975||y==1969||y==1970||y==1971||y==1965||y==1966||y==1967||y==1961||y==1962||y==1963||y==1957||y==1958||y==1959||y==1953||y==1954||y==1955||y==1949||y==1950||y==1951||y==1944||y==1945||y==1946||y==1947||y==1941||y==1942||y==1943||y==1937||y==1938||y==1939||y==1933||y==1934||y==1935||y==1929||y==1930||y==1931||y==1925||y==1926||y==1927||y==1921||y==1922||y==1923||y==1900||y==1901||y==1902||y==1903||y==1905||y==1906||y==1907||y==1913||y==1914||y==1915||y==1909||y==1910||y==1911||y==1917||y==1918||y==1919||y==2001||y==2002||y==2003||y==2005||y==2006||y==2007||y==2010||y==2011||y==2014||y==2015||y==2018||y==2019||y==2022||y==2023||y==2026||y==2027
		||y==2030||y==2031||y==2034||y==2035||y==2038||y==2039||y==2043||y==2047){
		if(m==4){
			if(d==5){
				if(count!=0){
					if(mod==1){
						goto end;//If just ask for a holiday, end this function
					}
					printf("|");//If there are more than one festival on the same day, use "|" to divide it
				}
				printf("清明节");
				count++; //Add one to the number of festivals
			
			}
		}
	}
	if(m==5){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			color(4);
			printf("劳动节");
			count++; //Add one to the number of festivals
		}
	}
	if(m==5){
		if(d==4){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("青年节"); 
			count++;//Add one to the number of festivals
		}
	}
	if(m==6){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("儿童节");
			count++; //Add one to the number of festivals
		}
	}if(m==7){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			
			printf("建党节");
			count++; //Add one to the number of festivals
		}
	}if(m==8){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("建军节");
			count++; //Add one to the number of festivals
		}
	}if(m==9){
		if(d==10){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("教师节");
			count++; //Add one to the number of festivals
		}
	}if(m==10){
		if(d==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			color(4);//red color
			printf("国庆节");
			count++; //Add one to the number of festivals
		}
	}if(lm==1){
		if(ld==1){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			color(4);
			printf("春节");
			count++; //Add one to the number of festivals
		}
	}if(lm==1){
		if(ld==15){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("元宵");
			count++; //Add one to the number of festivals
		}
	}if(lm==5){
		if(ld==5){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("端午节");
			count++; //Add one to the number of festivals
		}
	}if(lm==7){
		if(ld==7){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("七夕");
			count++; //Add one to the number of festivals
		}
	}if(lm==7){
		if(ld==15){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("中元节");
			count++; //Add one to the number of festivals
		}
	}if(lm==8){
		if(ld==15){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("中秋节");
			count++; //Add one to the number of festivals
		}
	}if(lm==9){
		if(ld==9){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("重阳节");
			count++; //Add one to the number of festivals
		}
	}if(lm==12){
		if(ld==23){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("北小年");
			count++; //Add one to the number of festivals
		}
	}if(lm==12){
		if(ld==24){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("南小年");
			count++; //Add one to the number of festivals
		}
	}if(lm==12){
		if(ld==30){
			if(count!=0){
				if(mod==1){
					goto end;//If just ask for a holiday, end this function
				}
				printf("|");//If there are more than one festival on the same day, use "|" to divide it
			}
			printf("除夕");
			count++; //Add one to the number of festivals
		}
	}
	end:
	color(7);	
	return count; //Return the total number of festivals
}//end function
