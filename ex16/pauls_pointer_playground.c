#include <stdio.h>

//Playing with pointers, arrays and structs to ensure and demonstrate understanding


int main(int argc, char *argv[])
{


	//create some data
	int i = 0;
	int i2  = 0;
	int test[] = {1, 2, 3, 4, 5};
	char *test_char[] = {"Cathy", "Paul", "Charlotte", "A", "B"};

	//print out the data
	printf(">>This is the data sets\n");

	printf("*>test array\n");
	for(i = 0; i < 5; i++){
		printf("%d\n",test[i]);
	}

	printf("*>test_char_array\n");
        for(i2 = 0; i2 < 5; i2++){
                printf("%s\n",test_char[i2]);
        }

	//initialise pointers
	int *pointer_test = test;
	char **pointer_test_char = test_char;

	//print pointer values/dereferenced values
	printf("The address of test_array, pointed to by *pointer_test is: %p \n", &pointer_test);
	printf("The address of test_char array, pointed to by *pointer_test_cha is: %p \n", &pointer_test_char);
	printf("The dereferenced value of test_array, pointed to by *pointer_test is: %d \n", *pointer_test);
	printf("The dereferenced value of test_char_array, pointed to by *pointer_test_char is: %s \n", *pointer_test_char);
	printf("The final element in the test_array is: %d \n", pointer_test[4]);
	printf("The final element in the test_char_array is: %s \n", pointer_test_char[4]);

	return 0;

}
