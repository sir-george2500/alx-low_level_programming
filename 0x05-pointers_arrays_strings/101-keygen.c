#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, ascii_value, checksum;
	char password[12];

	srand(time(0));

	for (i = 0, checksum = 2772; checksum > 122; i++)
	{
		ascii_value = rand() % 78 + 48;
		password[i] = ascii_value;
		checksum -= ascii_value;
	}

	password[i] = checksum;
	password[i + 1] = '\0';

	printf("%s\n", password);

	return (0);
}
