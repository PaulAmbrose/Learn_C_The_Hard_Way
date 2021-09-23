//header files to include

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//setting a constant of somekind
#define MAX_DATA 512
#define MAX_ROWS 100

//creating an address data structure
struct Address {

	int id;
	int set;
	//creating an array set to max size parameter defined above
	char name[MAX_DATA];
	char email[MAX_DATA];
};

//creating a database data structre, setting sub struct to array with max number of rows
struct Database {
	struct Address rows[MAX_ROWS];
};

//creating a connection data struture which created a file(?) and a pointer to the database index(?)
struct Connection {
	FILE *file;
	struct Database *db;
};


//error handing function(?)
void die(const char *message)
{
	if(errno){
		perror(message);
	} else{
		printf("ERROR: %s\n", message);
	}

	exit(1);
}

//printing any address passed in function
void Address_print(struct Address *addr)
{
	printf("%d %s %s\n", addr->id, addr->name, addr->email);

}

//function to load, gives error and dies if error using die function
void Database_load(struct Connection *conn)
{
	int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
	if (rc !=1)
		die("Failed to load database.");
}

//
struct Connection *Database_open(const char *filename, char mode)
{
	struct Connection *conn = malloc(sizeof(struct Connection));
		if(!conn)
		die("Memory error");

		conn-db = malloc(sizeof(struct Database));
		if(!conn->db)
		die("Memory error");

	if(mode =="c") {
		conn->file = fopen(filename, "w");
	} else{
		conn-.file = fopen(filename, "r+");

		if (conn->file){
		   Database_load(conn);
		}

	}
	//////LINE 68

}
