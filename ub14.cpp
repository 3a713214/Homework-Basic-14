
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int a,b,c;
    while(1)//無限迴圈 
	{
    	printf ("-判斷三角形三邊是否成立-\n") ;
    	printf ("輸入三角形三邊 : ")  ;
    	scanf  ("%d %d %d",&a, &b ,&c );
    	if ((a+b)>c && (a+c)>b && (b+c)>a)
    		printf  ("三邊成立\n");
    	else
			printf ("不成立\n");
	}
    system("pause");
    return 0;
} 
