#include <stdio.h>
#include <stdlib.h>

void quit_program()
{
	printf("Program exited\n\n");
	exit(1);
}

char get_database_name()
{

	printf("Please enter database name(max 10 characters)\n");
	printf(">>");

        char database_name[9];
	scanf("%c", database_name);
	return *database_name;

}

char menu_and_choice()
{

        printf("Pauls Database Rebuild\n\n");
        printf("Enter a for Create database\n");
        printf("Enter b for Edit database\n");
        printf("Enter c for Delete database\n");
	printf("Enter d to quit the program\n\n");
	printf(">>");

        char menu1[0];
        scanf("%c", menu1);
	return *menu1;
}

int main(void)
{
	char user_choice = menu_and_choice();
	char database_name;

	switch (user_choice){

	case 'a':
		database_name = get_database_name();
		printf("Database name is %c \n", database_name);
		break;

	case 'b':
		printf("Run edit database script\n");
		break;

	case 'c':
		printf("Run delete database scripts\n");
		break;

	case 'd':
		printf("Run quit program scripts\n");
		break;

	default:
		printf("Error, command not recognised, please try again\n");
		quit_program();
	}


}
