/*
	First comment
*/

void ok()
{
	return ;
}

int main()
{
	/*
		Second comment
	*/
	char *str="/*%c%cFirst comment%c*/%c%cvoid ok()%c{%c%creturn ;%c}%c%cint main()%c{%c%c/*%c%c%cSecond comment%c%c*/%c%cchar *str=%c%s%c;%c%cprintf(str, 10, 9, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, str, 34, 10, 9, 10);%c}";
	printf(str, 10, 9, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, str, 34, 10, 9, 10);
}
