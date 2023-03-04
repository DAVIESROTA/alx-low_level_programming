#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
++i;
}

while (src[j] != '\0')
{
dest[i] = src[j];
++i;
++j;
}
dest[i] = '\0';
return (dest);
}
int main(void)
{
char dest[100] = "Hello, ";
char src[] = "world!";
_strcat(dest, src);
printf("%s\n", dest);
return (0);
}

