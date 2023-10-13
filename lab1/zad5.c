#include <stdio.h>
int main (int argc, char * argv[])
{
char*name = argv[1];
char buffer[256];
FILE *fp  = fopen(name, "r");
if (fp)
{
while ((fgets(buffer, 256, fp))!=NULL)
{
	printf("%s", buffer);
}
fclose(fp);
}
}
