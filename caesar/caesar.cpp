#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define caesar(x) rot(13, x)
#define decaesar(x) rot(13, x)
#define decrypt_rot(x, y) rot((26-x), y)

void rot(int c, char *str)
{
	int l = strlen(str);
	const char *alpha[2] = { "abcdefghijklmnopqrstuvwxyz", "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	int i;
	for (i = 0; i < l; i++)
	{
		if (!isalpha(str[i]))
			continue;

		str[i] = alpha[isupper(str[i])][((int)(tolower(str[i]) - 'a') + c) % 26];
	}
}


int main()
{
	char str[] = "This is a top secret text message!";

	printf("\n Original: %s\n", str);
	caesar(str);
	printf("\nEncrypted: %s\n", str);
	decaesar(str);
	printf("Decrypted: %s\n", str);

	getchar();
}