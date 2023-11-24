#include <stdio.h>
int main(void)
{
char buffer[256];
FILE *fp = fopen("forzad6", "r");
FILE *fo = fopen("forzad6.2", "w");
for (int i=0;i<3;i++)
{
if ((fgets(buffer, 256, fp))!=NULL)
{
	fputs(buffer,fo);
}else{
break;
}
}
fclose(fp);
fclose(fo);
return 0;
}
