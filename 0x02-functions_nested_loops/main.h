#include <stdio.h>

void print_alphabet(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        putchar('\n');
}

void print_alphabet_x10(void)
{
	int i;
        for(i = 0; i <=10; i++)
	{
        	char ch;

                for (ch = 'a'; ch <= 'z'; ch++)
                {
                        putchar(ch);
                }
        }
        putchar('\n');
        return (0);
}
