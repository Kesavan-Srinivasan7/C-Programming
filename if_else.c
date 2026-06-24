//it is the condition statement which runs the block code if the given condition is true!
/*The Syntax of if 
if (condition)
{
 the statement;
}


// Now we going to see how to use if condition with bool (the condition in the variables)
#include<stdio.h>
#include<stdbool.h>

int main(){
    int x = 7;
    int y = 6;
bool isGreater = x > y;    //The condition store in the variable name "isGreater"

 if (isGreater){                         
printf("X is greater than Y");       
}

return 0;
}


//Now we going see how use "else" 

#include<stdio.h>
#include<stdbool.h>
int main(){
    int age = 18;
    int userAge =19;
    bool vote = age <= userAge;
 
    if(vote){
        printf("You are eligible for voting");
    }
    else{
        printf("You are not eligible for voting");
        }
        return 0;
}


//Now we going to see how use else if
#include<stdio.h>
#include<stdbool.h>
int main(){
    int x = 11;
bool isMorning = x < 12;
bool isNight = x > 12;
if (isMorning){
    printf("Good_Morning");
}
else if (isNight)
{
    printf("Good_Night");
}
else{
    printf("Good_Afternoon");
}
    return 0;
}


 // Now we are going to see "Short Hand If...Else (Ternary Operator)" it is used to make the condition in single line
 
 //The syntax  variablename = (condition) ? expressionTrue : expressionFalse;  

 #include<stdio.h>
int main() {
int x = 20;
 (x>18) ? printf("Eligible") : printf("Not eligible");
 return 0;
}



//Now we are going to see how Nested if will used
#include<stdio.h>
#include<stdbool.h>
int main(){
    int Age = 20;
    bool isCitizen = true;
if (Age > 18){
    printf("Your are eligible for vote.\n");
 if(isCitizen){
    printf("And your are citizen!, so can vote.\n");
 }
 else{
    printf("But you must be a citizen to vote");
 }
}
 else{
    printf("Your are not eligible for vote");
 }
return 0;
}
*/

// we are going to how use logic gates in if condition
#include <stdio.h>
#include <stdbool.h>

int main() {
  bool isLoggedIn = true;
  bool isAdmin = false;
  int securityLevel = 3; // 1 = highest

  if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
    printf("Access granted\n");
  } else {
    printf("Access denied\n");
  }

  // Try changing securityLevel and isAdmin to test different outcomes:
  // securityLevel 1 = Access granted
  // securityLevel 2 = Access granted
  // securityLevel 3 = Access denied
  // securityLevel 4 = Access denied
  // If isAdmin = true, access is granted.

  return 0;
}