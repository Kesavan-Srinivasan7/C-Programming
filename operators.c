//operators are used to perform operation on variables and its values 
/*Operators are classified into:
1.arithmetic : +, -, *, /, %, ++, --
2.assignment : =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
3.comparison = Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions. the return value of a comparison operator is either true (1) or false (0).this value are knwn as boolean value.
----- ==, !=, >, <, >=, <=
4.logical : &&-both true, ||- onc true, !-reverse of the result
5.bitwise
*/

/*// All arithmetic example
#include <stdio.h>
int main(){
    int x=6;
    int y=1;
    printf("the add :%d\n",x+y);
    printf("the sub :%d\n",x-y);
    printf("the mult :%d\n",x*y);
    printf("the div :%d\n",x/y);
    printf("the moldu :%d\n",x%y);

 const int z = 6;
++z;
printf("the increment :%d\n",z);
--z;
printf("the decrement :%d\n",--z);
}*/

/*//assigment example
#include <stdio.h>
int main(){
    int k = 1;
    k += 6;
    printf("the k :%d",k);
    return 0;
}*/

//comparis onexample
/*
#include <stdio.h>
int main(){
    int a =18;
    printf("the age is greater than  7:%d\n", a>=10);
    printf("the age is less than 7:%d",a<10);
}*/

#include <stdio.h>
int main(){
    int k=7;
    int r=6;
    printf("%d\n",k&&r);
    printf("%d\n",k||r);
    printf("%d\n",! (k&&r) );
}