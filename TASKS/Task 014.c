/*Write your solution after the comment
Write a function that prints 10 times the numbers, from 0 to 14,
followed by a new line.
Your output should look like this;
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
...up to 10 times
*/

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
		for (j = 0; j <= 14; j++)
			if (j < 14)
				printf("%d ", j);
			else if (j == 14)
				printf("%d\n", j);
	return 0;
}
