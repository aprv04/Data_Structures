/*Write a function PrintReverse(string) to print the string in reverse
order using recursion.*/

#include<stdio.h>
#include<string.h>

void print_reverse(char *);

int main()
{
 char s[25];
      printf("Enter the string--");
      scanf("%[^\n]s",s);
      print_reverse(s);
      printf("\n");
}

void print_reverse(char *s)
{
   if(*s!='\0')
    print_reverse(s+1);
     printf("%c",*s);
     
}
