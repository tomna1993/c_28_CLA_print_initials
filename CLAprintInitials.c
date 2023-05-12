#include <cs50.h>
#include <stdio.h>

// argc - argument counter
// argv - argument vector
// Get user's name as CLA argument at time he runs the code
int main(int argc, string argv[])
{
	// iterate throught all of the arguments from the 1st index
	// the 0 index contains the command with what we start the program
	for (int i = 1; i < argc; i++)
	{
		// print out the fisrt character of each argument
		printf("%c.", argv[i][0]);
	}
	printf("\n");
}