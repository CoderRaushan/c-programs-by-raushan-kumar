#include<stdio.h>
int main ()
{
char a;
printf("Enter a charecter:");
scanf("%c",&a);
if(a>='0' && a<='9')
{
   printf("%c is a digit",a);
}
else{
    printf("%c is a charecter",a);

}
return 0;
}