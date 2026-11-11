#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s1[60] = "Welcome";
	char s2[60] = "";

	int len;

	strcpy_s(s2, s1);
	printf("%s ", s2);
	
	len = strlen(s2);
	printf("%d", len);
}
