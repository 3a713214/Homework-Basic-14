
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int a,b,c;
    while(1)//�L���j�� 
	{
    	printf ("-�P�_�T���ΤT��O�_����-\n") ;
    	printf ("��J�T���ΤT�� : ")  ;
    	scanf  ("%d %d %d",&a, &b ,&c );
    	if ((a+b)>c && (a+c)>b && (b+c)>a)
    		printf  ("�T�䦨��\n");
    	else
			printf ("������\n");
	}
    system("pause");
    return 0;
} 
