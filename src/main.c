#include <stdio.h>
#include "deposit.h"

int main()
{
	int day, s;
	float summa;
	printf("Enter the term:  ");
	scanf("%d", &day);
	printf("Enter the amount: ");
	scanf("%f", &summa);

	while (check(day, summa) == -1) {
		printf("Enter data again\n");
                printf("1-Enter again,2-Exit\n");
		scanf("%d", &s);
                switch (s)
                {
                    case 1: 
                        printf("Enter the term:  ");
			scanf("%d", &day);
	                printf("Enter the amount: ");
			scanf("%f", &summa);
                        break;
                    case 2:
                        return 0;
                 }
	}
	printf("Amount after deposit is %.3f\n", calc(day, summa));	
	
	return 0;
}
