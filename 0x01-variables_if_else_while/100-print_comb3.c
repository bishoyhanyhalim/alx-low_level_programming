#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int f_num;
	int s_num;

	for (f_num = 0; f_num <= 8; f_num++)
	{
		for (s_num = f_num + 1; s_num <= 9; s_num++)
		{
			putchar(f_num + '0');
			putchar(s_num + '0');

			if (f_num != 8 || s_num != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
