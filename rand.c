#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		int result =rand()% 3 + 1;
        
        //printf("%d", result);

        if (result == 1) printf("당첨\n");
        else printf("꽝\n");
	} 
}