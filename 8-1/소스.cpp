#include<stdio.h>

int main()
{
	char a = '*';
	char *b = &a;

	printf("�ּ� : %d\n�ڵ尪 : %d\n���� : %c\n ", &b, *b, *b);
}