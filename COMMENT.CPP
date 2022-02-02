#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	clrscr();
	 printf("\n\n\n\n\n");

	printf("enter >>");
	char str[20];
	scanf("%s",str);
	int n=strlen(str);
	if(str[0]=='/'&&str[1]=='/')
	{
		printf("this is comment");
	}
	else

		if(str[0]=='/'&&str[1]=='*')
		 {
			if(str[n-2]=='*'&&str[n-1]=='/')
			{
				printf("this is comment");
			}else{
				printf("not a comment");
			}
		 }
		 else{
			printf("not comment");
		}


	getch();
 return 0;
}