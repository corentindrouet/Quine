#include <stdio.h>
#include <fcntl.h>
#define OPEN(x) fopen(x, "w")
#define STRING() char*
#define FT() int main(){STRING() str="#include <stdio.h>%c#include <fcntl.h>%c#define OPEN(x) fopen(x, %cw%c)%c#define STRING() char*%c#define FT() int main(){STRING() str=%c%s%c;FILE *kid=OPEN(%cGrace_kid.c%c);if(kid)fprintf(kid, str, 10, 10, 34, 34, 10, 10, 34, str, 34, 34, 34, 10, 10, 10, 9, 10, 10);}%cFT()%c/*%c%cComment%c*/%c";FILE *kid=OPEN("Grace_kid.c");if(kid)fprintf(kid, str, 10, 10, 34, 34, 10, 10, 34, str, 34, 34, 34, 10, 10, 10, 9, 10, 10);}
FT()
/*
	Comment
*/
