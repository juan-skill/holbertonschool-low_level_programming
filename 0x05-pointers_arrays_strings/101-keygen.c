	
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
  
  char passwd[100];
	int num_rand, num, i;

	i = 0;
	srand(time(NULL));
	
	num = 0;
	while (num < 2645)
	{
		num_rand = random() % 127;
		if (num_rand > 32)
		{
			passwd[i] = num_rand;
			num += num_rand;
			i++;
		}
	}
	passwd[i++] = (2772 - num);
	passwd[i] = '\0';
	
	printf("%s", passwd);

    return (0);
    
  }
