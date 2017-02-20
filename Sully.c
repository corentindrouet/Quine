#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 5;
	char name[25];
	char exec[25];
	char finalexec[70];
	char *sully_str = "Sully_%d.c";
	char *sully_exec_str = "Sully_%d";
	char *compile = "clang -o %s %s";
	char *run = "sudo ./%s";
	char *str = "#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%c%cint i = %d;%c%cchar name[25];%c%cchar exec[25];%c%cchar finalexec[70];%c%cchar *sully_str = %c%s%c;%c%cchar *sully_exec_str = %c%s%c;%c%cchar *compile = %c%s%c;%c%cchar *run = %c%s%c;%c%cchar *str = %c%s%c;%c%cFILE *kid;%c%csprintf(name, sully_str, i);%c%csprintf(exec, sully_exec_str, i);%c%ckid = fopen(name, %cw%c);%c%cif(kid)%c%c{%c%c%cfprintf(kid, str, 10, 10, 10, 10, 10, 9, --i, 10, 9, 10, 9, 10, 9, 10, 9, 34, sully_str, 34, 10, 9, 34, sully_exec_str, 34, 10, 9, 34, compile, 34, 10, 9, 34, run, 34, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 9, 10, 9, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 10, 9, 10, 10);%c%c%cfclose(kid);%c%c%cif(i>=0)%c%c%c{%c%c%c%csprintf(finalexec, compile, exec, name);%c%c%c%ci = system(finalexec);%c%c%c%cif(i!=-1)%c%c%c%c{%c%c%c%c%csprintf(finalexec, run, exec);%c%c%c%c%csystem(finalexec);%c%c%c%c}%c%c%c}%c%c}%c}%c";
	FILE *kid;
	sprintf(name, sully_str, i);
	sprintf(exec, sully_exec_str, i);
	kid = fopen(name, "w");
	if(kid)
	{
		fprintf(kid, str, 10, 10, 10, 10, 10, 9, --i, 10, 9, 10, 9, 10, 9, 10, 9, 34, sully_str, 34, 10, 9, 34, sully_exec_str, 34, 10, 9, 34, compile, 34, 10, 9, 34, run, 34, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 9, 9, 10, 9, 9, 9, 9, 10, 9, 9, 9, 10, 9, 9, 10, 9, 10, 10);
		fclose(kid);
		if(i>=0)
		{
			sprintf(finalexec, compile, exec, name);
			i = system(finalexec);
			if(i!=-1)
			{
				sprintf(finalexec, run, exec);
				system(finalexec);
			}
		}
	}
}
