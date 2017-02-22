#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av)
{
(void)ac;
int i = 5;
if(strchr(av[0], '_'))
i--;
char name[25];
char exec[25];
char finalexec[70];
char *sully_str = "Sully_%d.c";
char *sully_exec_str = "Sully_%d";
char *compile = "clang -o %s %s";
char *run = "./%s";
char *str = "#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cint main(int ac, char **av)%c{%c(void)ac;%cint i = %d;%cif(strchr(av[0], '_'))%ci--;%cchar name[25];%cchar exec[25];%cchar finalexec[70];%cchar *sully_str = %c%s%c;%cchar *sully_exec_str = %c%s%c;%cchar *compile = %c%s%c;%cchar *run = %c%s%c;%cchar *str = %c%s%c;%cFILE *kid;%csprintf(name, sully_str, i);%csprintf(exec, sully_exec_str, i);%ckid = fopen(name, %cw%c);%cif(kid)%c{%cfprintf(kid, str, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 34, sully_str, 34, 10, 34, sully_exec_str, 34, 10, 34, compile, 34, 10, 34, run, 34, 10, 34, str, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%cfclose(kid);%cif(i>0)%c{%csprintf(finalexec, compile, exec, name);%ci = system(finalexec);%cif(i!=-1)%c{%csprintf(finalexec, run, exec);%csystem(finalexec);%c}%c}%c}%c}%c";
FILE *kid;
sprintf(name, sully_str, i);
sprintf(exec, sully_exec_str, i);
kid = fopen(name, "w");
if(kid)
{
fprintf(kid, str, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 34, sully_str, 34, 10, 34, sully_exec_str, 34, 10, 34, compile, 34, 10, 34, run, 34, 10, 34, str, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
fclose(kid);
if(i>0)
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
