#include<stdio.h>
#include<stdarg.h>
#include<string.h>

/**
 * creating a print function that accepts a number of variable arguments.
 * the function accepts placeholders as functions
*/

void print(char *placeholder, ...);

int main(){

print("dfdfd", 3, 5.6, 8, 7.0, 70);

return 0;
}

void print(char *placeholder, ...)
{
int num_args = strlen(placeholder);
va_list args;
va_start(args,placeholder);
for(int i = 0; i < num_args; i++){

if(placeholder[i] == 'd')
{
	int x = va_arg(args,int);
	printf("%d\n", x);
}
else if(placeholder[i] == 'f')
{
	double x =  va_arg(args,double);
	printf("%f\n", x);
}
va_end(args);
}
}
