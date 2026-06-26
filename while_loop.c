// The loop is the condition is runs the code until the condition is true
// While loop is the codition it runs only the condition true otherwise cannot enter the loop
/*The syntax
 while (condition){
   // block of code
   }
   
   // example
   int i = 0;
   while (i<5){
     printf("%d\n,i");
     i++
     }

     //example 2
  #include <stdio.h>

int main() {
  int i = 0;
  while (i <= 10) {
    printf("%d\n", i);
    i += 2;
  }
    
  return 0;
}


  // Now see the example of wishing Happy birthday
  #include<stdio.h>
  int main (){
    int countOf = 3;

    while (countOf > 0){
        printf("%d\n",countOf);
        countOf--; // this important to give the increment incase you forgot to give it will run infinite time
    }
    printf("Happy Birthday!");
    return 0;
  }
 
  //The Do While condition - it runs the code atleast once even the condition is true
  /The syntax 
  do{
     // block of code;
     }
    while(conditon);
    
    /Example:                    /if the condition false
    int i =0;                            int i = 10; -----> it run one time and stop
    do{
     printf("%d\n",i);
     i++;
     }
     while(i<7);
*/
// example of do while for asking enter the password no in +ve . The loop stop if user enter 0 or -ve
#include<stdio.h>
int main(){
  int password;
  do {
    printf("Enter the Password:");
    scanf("%d", &password);
  }
  while(password>0);
  return 0;
}
