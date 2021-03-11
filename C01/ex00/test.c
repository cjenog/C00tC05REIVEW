#include <stdio.h>



int main()

{

    int* numPtr1;     

    int** numPtr2;   
   
	int ***numPtr3;	

    int num1 = 20;



    numPtr1 = &num1;    
    numPtr2 = &numPtr1; 
	numPtr3 = &numPtr2;


	printf("%p\n", &numPtr1);
	printf("%p\n", &numPtr2);
	printf("%p\n", &num1);

    printf("%p\n", *numPtr2);    
	printf("%p\n", **numPtr3);
	printf("%p\n", *numPtr3);



    return 0;

}
