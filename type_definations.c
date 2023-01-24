#include<stdio.h>
/**
 * using typedef and enum 
 * it is used to  create own type of data type
 * more of renamimg a data time 
 * e.g typedef int NUMBER ,   number is the new name for int
*/

int main(void);

typedef enum {
monday,
tuesday,
wednesday,
thursday,
friday,
saturday,
sunday
}WEEKDAYS;

int main(void){
static WEEKDAYS day = sunday ;

printf("today is %d\n", day);

if(day == sunday){
printf("today you are going to church\n");
}
else if(day == saturday)
	printf("its weekend get some rest\n");

else
printf("you must be at work today\n");

}
