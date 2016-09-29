/*lehlohonolo macheru
 * 28 april 2016*/
#include <stdio.h>

int roman_convert (int num)
{ 
    if (num >= 100 && num <=110)
    {
        printf("C");
       roman_convert(num-100);
    }
    if (num >= 50 && num < 100)
    {
        printf("L");
        roman_convert(num-50);
    }
    if (num >= 10 && num < 50)
    {
        printf("X");
        roman_convert(num-10);
    }
    if (num >= 5 && num < 10)
    {
        printf("V");
        roman_convert(num-5);
    }
    if (num >= 1 && num < 5)
    {
        printf("I");
        roman_convert(num-1);
    }
  
}
int main()
{
    int num;

    for(num = 1 ; num <= 110;num++ )
{
	roman_convert(num);
	printf("\n");
}
}
