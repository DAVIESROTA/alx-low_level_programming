#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), l, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = codex[tmp];

	tmp = 0;
	for (l = 0; l < len; l++)
		tmp += argv[1][l];
	password[1] = codex[(tmp ^ 79) & 63];

	tmp = 1;
	for (l = 0; l < len; l++)
		tmp *= argv[1][l];
	password[2] = codex[(tmp ^ 85) & 63];

	tmp = 0;
	for (l = 0; l < len; l++)
	{
		if (argv[1][l] > tmp)
			tmp = argv[1][l];
	}
	srand(tmp ^ 14);
	password[3] = codex[rand() & 63];

	tmp = 0;
	for (l = 0; l < len; l++)
		tmp += (argv[1][l] * argv[1][l]);
	password[4] = codex[(tmp ^ 239) & 63];

	for (l = 0; l < argv[1][0]; l++)
		tmp = rand();
	password[5] = codex[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
