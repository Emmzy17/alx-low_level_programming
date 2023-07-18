#include "main.h"

int main(void)
{
	int i;
	char putchar[] = "_putchar";
	for(i=0; putchar[i] != '\0'; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar('\n');
	return 0;
}
