#include <stdio.h>
#include <conio.h>
#include <string.h>
int add(int number1, int number2){
	int sum = number1 + number2;
	return sum;
}
void main() {
	int number1 , number2	;
	char symbol;
	printf ("Enter values\n");
	scanf ("%d %c %d",&number1, &symbol, &number2);
	if (symbol == '+') {
		int result = add(number1,number2);
		printf(" sum = %d\n",result);
	}
}