#include "main.h"

int main(void)
{
	int i;
	char putchar[] = "_putchar\n";
	for(i=0; putchar[i] != '\0'; i++)
	{
		_putchar(putchar[i]);
	}

	return 0;
}
