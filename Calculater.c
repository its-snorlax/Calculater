#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int add(int number1, int number2){
	int sum = number1 + number2;
	return sum;
}

int sub(int number1, int number2){
	int sub = number1 - number2;
	return sub;
}

int mult(int number1, int number2){
	int mult = number1 * number2;
	return mult;
}

int division(int number1, int number2){
	int div = number1 / number2;
	return div;
}

int main (int argc, char const *argv[]) {
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[3]);

	if (strcmp(argv[2] , "+") == 0) {
		int result = add (number1 , number2);
		printf ("sum is = %d\n", result);
	}
	else if (strcmp(argv[2] , "-") == 0) {
		printf("%s\n",argv[2]);
		int result = sub (number1 , number2);
		printf ("sub is = %d\n", result);
	}
	else if (strcmp(argv[2] , "*") == 0) {
		int result = mult (number1 , number2);
		printf ("product is = %d\n", result);
	}
	else if (strcmp(argv[2] , "/") == 0) {
		int result = division (number1 , number2);
		printf ("quotient  is = %d\n", result);
	}
	else{
		printf("enter right arithmetic operators\n");
	}
}
