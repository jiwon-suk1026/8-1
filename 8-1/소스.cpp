#include<stdio.h>

int main()
{
	char a = '*';
	char *b = &a;

	printf("주소 : %d\n코드값 : %d\n문자 : %c\n ", &b, *b, *b);
}