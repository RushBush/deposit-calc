#include <stdio.h>
#include "deposit.h"

int main()
{
	int day, s;
	float summa;
	printf("Enter the term:  ");
	scanf("%d", &day);
	printf("Enter the amount: ");
	scanf("%d", &summa);

	while (check(day, summa) == -1) {
		printf("Enter data again");
		scanf("%d", &s);
		if (s == 1) {
			printf("Enter the term:  ");
			scanf("%d", &day);
	                printf("Enter the amount: ");
			scanf("%d", &summa);
		}
		else return 0;
	}
	printf("Amount after deposit is %.3f\n", calc(day, summa));	
	
	return 0;
}
