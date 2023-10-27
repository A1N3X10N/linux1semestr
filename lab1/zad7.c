#include <stdio.h>
int main (int argc, char * argv[])
{
char*name = argv[1];
char buffer[256];
FILE *fp = fopen(name, "r");
FILE *fo = fopen("forzad7.1", "w");
if (fp)
{
while ((fgets(buffer, 256, fp))!=NULL)
{
	fputs(buffer,fo);
}
fputs("vot stroka",fo);
fclose(fp);
fclose(fo);
}
}
