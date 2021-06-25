#include <stdio.h>
int main()
{
int a,b,add,sub,mul,div,rem;
printf("Enter a,b values: ");
scanf("%d%d",&a,&b);// reading two values

add=a+b;    //addition operator
sub=a-b;    //subtraction operator
mul=a*b;    //multiplication operator
div=a/b;    //division operator
rem=a%b;    //remainder (modulo) operator

printf("result of addition is=%d\n",add);
printf("result of subtraction is=%d\n",sub);
printf("result of multiplication is=%d\n",mul);
printf("result of division is=%d\n",div);
printf("result of remainder is=%d\n",rem);

return 0;
	
}