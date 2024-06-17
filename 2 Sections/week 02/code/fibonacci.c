/*************************************************************************
 *
 * Prints out a command-line-user-inputted number of numbers from the
 * fibonacci sequence
 *
 ************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>

void fibonacci(int sequence[], int num_nums);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Please enter *just* the number of numbers you want!\n");
		return -1;
	}
	
	// atoi is new!
	int num_nums = atoi(argv[1]);
	if(num_nums <= 0)
	{
		printf("Please enter a valid positive number!\n");
		return -2;
	}
	
	int sequence[num_nums]; // sequence is now an array of userinput
	fibonacci(sequence, num_nums); // num_nums is userinput
	
	for(int i = 0; i < num_nums; i++) // i is less than userinput but i increass by 1
	{
		printf("%d ", sequence[i]); // sequence[1,2,3,4,5,6,7,] till it becomes equal to userinput
	}
	printf("\n");
	
}

// note that num_nums is just a copy!
void fibonacci(int sequence[], int num_nums)
{
	int size = num_nums;
	sequence[0] = 0;
	size--;
	
	// bounds checking!
	if(num_nums >= 2)
	{
		sequence[1] = 1;
		size--;
    }
	while(size)
	{
		sequence[num_nums - size] = sequence[num_nums - size - 1] + sequence[num_nums - size - 2];
		size--;
	}
}
