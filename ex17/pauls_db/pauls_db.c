#include <stdio.h>

char menu_and_choice()
{

	// print instructions
        printf("Pauls Database Rebuild\n\n");
        printf("Enter a for Create database\n");
        printf("Enter b for Edit database\n");
        printf("Enter c for Delete database\n\n");
	printf(">>");

        // get inputs from user
        char menu1[0];
        scanf("%c", menu1);
	return *menu1;
}

int main(void)
{
	char user_choice = menu_and_choice();
	printf("The User Chose %c\n", user_choice);
}
