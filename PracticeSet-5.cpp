#include <stdio.h>

int main()
{
	int length, breadth, area, perimeter;
	
	printf("Enter the length:");
	scanf("%d", &length);
	
	printf("\nEnter the breadth:");
	scanf("%d", &breadth);
	
	area = length * breadth;
	
	perimeter = 2 * (length + breadth);
	
	printf("\nThe Area is: %d", area);
	printf("\nThe Perimeter is: %d", perimeter);
	
	return 0;
}
