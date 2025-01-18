#include <stdio.h>
int main()
{

	int num1, num2, sum;
	printf("Enter the integer 1:");
	scanf("%d", &num1);
	printf("\nEnter the integer 2:");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	
	printf("\nThe sum is: %d", sum);
	return 0;
}
