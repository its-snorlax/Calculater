#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "oprations.h"

int main (int argc, char const *argv[]){
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[3]);

	if (strcmp(argv[2] , "+") == 0){
		printf("Sum = %d \n",add(number1,number2));
	}
	else if (strcmp(argv[2] , "-") == 0){
		printf("Sub = %d \n",sub(number1,number2));
	}
	else if (strcmp(argv[2] , "*") == 0){
		printf("product = %d \n",mult(number1,number2));
	}
	else if (strcmp(argv[2] , "/") == 0){
		printf("quotient = %d \n",division(number1,number2));
	}
	else{
		printf("enter right arithmetic operators\n");
	}
}