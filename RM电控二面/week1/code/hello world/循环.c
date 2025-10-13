#include <stdio.h>
int main()
{
	int number;
	do {
		printf("Please enter:-1/0/1");
		scanf_s("%d", &number);
		if (number == 0) { printf("helloworld\\n"); }
		else if (number == 1) { printf("HELLOWORLD\\n"); }
	} while (number != -1);
	return 0;
}
