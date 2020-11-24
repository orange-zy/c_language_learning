#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf_s("%s", name, 40);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occuples %zd cells.\n", strlen(name), sizeof name);
	printf("The phrase of praize has %zd letters ", strlen(PRAISE));
	printf("and occupise %zd memory cells.\n", sizeof PRAISE);
	                                           
	return 0;
}
