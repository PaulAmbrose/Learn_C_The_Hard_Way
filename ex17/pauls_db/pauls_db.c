#include <stdio.h>

int main(void)
{

	// print instructions
	printf("Pauls Database Rebuild\n\n");
	printf("Enter a for Create database\n");
	printf("Enter b for Edit database\n");
	printf("Enter c for Delete database\n");

	// get inputs from user
	char menu1[1];
	scanf("%s", menu1);
	printf("test print of user option: %s\n", menu1);
}
