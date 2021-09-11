
//insert libraries

//required for printf
#include <stdio.h>

//not sure - used in create/destroy_person, checking return is not null pointer
#include <assert.h>

//not sure - needed for malloc?
#include <stdlib.h>

//not sure - string manipulation?
#include <string.h>

//creating a struct, which is like an object or database line
//must have a name as character pointer to string, age and height as integer

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};


//Functions

//Function 1
//create a pointer to a person
struct Person *Person_create(char *name, int age, int height,
        int weight)
{

    //get a piece of correctly sized memory using malloc
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    //setting parts of the structure
    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

//Remove a person from the instance
void Person_destroy(struct Person *who)
{
    //checking in put is not null
    assert(who != NULL);

    //free up memory used for person
    free(who->name);
    free(who);
}

//format and print a person
void Person_print(struct Person *who)
{
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
    // make two people structures
    struct Person *joe = Person_create("Joe Alex", 32, 64, 140);

    struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

    // print them out and where they are in memory
    printf("Joe is at memory location %p:\n", joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    // make everyone age 20 years and print them again
    joe->age += 20;
    Person_print(joe);

    frank->age += 20;
    Person_print(frank);

    // destroy them both so we clean up
    Person_destroy(joe);
    Person_destroy(frank);

    return 0;
}
