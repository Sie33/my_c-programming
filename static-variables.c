#include<stdio.h>
/**
 *an incrimental function with a variable assigned 0
 * the variable to increment 
 *  another function with a static variable
*/
int incrementAge() {
int age = 0;
age++;
return (age);
}
int incrementAges() {
static int ages = 0;
ages++;
return (ages);
}

int main(void){
printf("%d\n",incrementAge());
printf("%d\n",incrementAge());
printf("%d\n",incrementAge());
printf(" below is the result of the static effect of the same code\n");
printf("%d\n",incrementAges());
printf("%d\n",incrementAges());
printf("%d\n",incrementAges());
}
