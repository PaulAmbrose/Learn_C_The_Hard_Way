#include <stdio.h>
#include <stdlib.h>

struct Address
{
	int id;
	int set;
	char name[500];
	char email[500];
};

struct database
{
	struct Address rows[100];
};

struct database_connection
{
	FILE *file;
	struct database *db;
};

void quit_program()
{
	printf("Program exited\n\n");
	exit(1);
}

struct database_connection create_database()
{

	printf("Please enter database name(max 10 characters)\n");
	printf(">>");

        char database_name[9];
	scanf("%s", database_name);

	struct database_connection *new_db = malloc(sizeof(struct database_connection));
	new_db->file = fopen(database_name, "w");

	return new_db;

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

	switch (user_choice){

	case 'a':
		create_database();
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
