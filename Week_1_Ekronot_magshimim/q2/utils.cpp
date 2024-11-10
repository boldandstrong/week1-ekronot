#include "Utils.h"
#include "stack.h"

void reverse(int* nums, unsigned int size)
{
	int i = 0, j = 0, temp = 0;
	Stack* s = new Stack;
	initStack(s);

	for (i = 0; i < size ; i++)
	{
		push(s, nums[i]);
	}

	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
}

int* reverse10()
{
	int i = 0, num = 0;

	int* nums = new int[10];
	cout << "Enter ten numbers: ";
	
	for (i = 0; i < 10; i++)
	{
		cin >> nums[i];
	}

	reverse(nums, 10);

	return nums;
}
