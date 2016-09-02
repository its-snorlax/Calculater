#include <stdio.h>
#include <conio.h>
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

void main() {
	int number1 , number2	;
	char symbol;
	printf ("Enter values\n");
	scanf ("%d %c %d",&number1, &symbol, &number2);
	if (symbol == '+') {
		int result = add(number1,number2);
		printf ("sum is = %d\n",result);
	}
	else if (symbol == '-')
	{
		int result = sub(number1,number2);
		printf ("sub is = %d\n",result);
	}
	else if (symbol == '*')
	{
		int result = mult(number1,number2);
		printf ("product is = %d\n",result);
	}
}