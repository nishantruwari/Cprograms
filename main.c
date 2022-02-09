/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
   char ch[100];
   printf("enter a String ");
   scanf("%s",ch);
   int n=strlen(ch);
   int apple=0;
   if(ch[0]=='a'){
       apple=3;
       for(int i=1;i<n;i++){
           if(ch[i]=='b'){
               apple=2;
               for(int j=i;j<n;j++){
                   if(ch[j]!='b')
                    {
                        apple=3;
                    }
               }
               
           }
       }
   }else
   if(ch[0]=='b')
   {
       apple=2;
       for(int i=1;i<n;i++){
           if(ch[i]!='b')
           {
               apple=3;
           }
       }
   }else
   {
       apple=3;
       
   }
   if(apple==3)
   {
       printf("invalid string ");
   }else
   {
       printf("valid string");
   }
   
   

    return 0;
}
