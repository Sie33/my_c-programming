#include<stdio.h>
/**
 * structures are used to store a collection of
 *  of diff types
 *  it can be combined with typedef to change the nameof the type used
*/
int main(void){
struct person{
int age;
char *name;
};
struct person girl = { 21 ,"sibongile"};
printf("%s is %u\n", girl.name, girl.age);
}
