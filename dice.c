#include <stdio.h>
#include <stdlib.h>

int dice()
{
	int dice;

	//for (int i = 0; i < 10; i++)
	//{
		int result = rand()% 10 + 1;
		//printf("%d\n", result);

		if (result == 1 || 2 || 3) dice = 1;
		if (result == 4 || 5 || 6) dice = 2;
		if (result == 7) dice = 3;
		if (result == 8) dice = 4;
		if (result == 9) dice = 5;
		if (result == 10) dice = 6;
	//}

	return dice;
}

int main()
{
	 int result = dice();
	 printf("%d\n", result);
}