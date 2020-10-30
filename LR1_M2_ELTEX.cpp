

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <clocale>
using namespace std;



void main()
{
	int i=0;
	int max=0;
	char string[10];

	setlocale(LC_ALL, "Russian");
	gets_s(string);
	//puts(string);

	
	char stri1[10];
	for (i = 0; i < 10; i++)
	{
		if (string[i] == '0' || string[i] == '1' || string[i] == '2' || string[i] == '3' || string[i] == '4' || string[i] == '5' || string[i] == '6' || string[i] == '7' || string[i] == '8' || string[i] == '9')
		{
			stri1[i] = string[i];
			//puts(stri1);
			
		}
		else stri1[i] = ' ';
	}
	i = 0;
	int count = 0;
	for (i = 0; i < 9; i++)
	{
		if ((stri1[i] - '0' )> max)
			max = stri1[i]-'0';
		if ((stri1[i] - '0') == 0 && !(stri1[i] == ' '))
		{
			if (!(max == 0))
			{
				count++;
				printf_s("%d-е число в системе счисления с основанием = %d  \n", count, max+1);
			
				max = 0;


			}
		}
			
	}

		
		
	//puts(stri1);
	count++;
	if (!(max==0))
	printf_s("%d-е число в системе счисления с основанием = %d \n \n \n \n", count, max+1);

	

	

}
