#include <stdio.h>
#include <ctype.h>
char caseChanged(char);
int main()
{
	char c;
	scanf_s("%c", &c);
	printf_s("%c", caseChanged(c));
}
char caseChanged(char c) 
{
	if (isupper(c))
		return tolower(c);
	else
		return toupper(c);
}


