#include <stdio.h>
int main (int argc, char * argv[])
{
	char*file1 = "forzad8.1";
	char*file2 = "forzad8";
	char buffer[256];
	FILE*f1 = fopen(file1, "r");
	FILE*f2 = fopen(file2, "w");
	char info[100];
	fgets(info, sizeof(info), stdin);
	fprintf(f2,"%s", info);
	if(!f1 || !f2)
	{
	printf("error\n");
	}
	else
	{
		while ((fgets(buffer,256,f1))!=NULL)
		{
			fputs(buffer,f2);
		}
	}
	fclose(f1);
	fclose(f2);
	return 0;
}

 

