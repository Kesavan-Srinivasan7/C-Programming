/*The break statement are also used in the loop for  "jump out "the switch statement

The continue statement skip the one iteration which user specific condition and move to the next iteration 
Example : the loop jumps when it reach the number 7 and the for continue statement it skip the 7 and move the 6
#include<stdio.h>
int main(){
    int i ;
    for(i=0; i<=10; i++){
        if(i == 7) {               // if continue (skip the 7 in the iteration)
            break;                    // continue;---> it skip the 7 and move to 8     
        }
        printf("%d\n", i);
    }
    return 0;
}
// combination of break and continue

#include<stdio.h>
int main(){
    int i;
    for(i =0; i<=10 ; i ++){
        if(i==5){
            continue;
        }
        if(i==9){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}
    
// Break statement in while loop
# include<stdio.h>
int main(){
    int i =0 ;
    while(i<=10){
        if(i==4){       
            break;    
        }
        printf("%d\n",i);
        i++;
    }
}
    
   // continue statement in while
   #include<stdio.h>
   int main(){
    int i =0;
    while(i<=10){
        if(i==4){
            i++;
            continue;
        }
        printf("%d\n",i);
        i++;
    }
    return 0;
   }
    */
   // Now going to see in the list of array the we want only positive no if it is -ve it skips , if it 0 the loop break
   # include<stdio.h>
   int main(){
    int list[]= {8,-9,2,0,-4,6};
    int length = sizeof(list)/sizeof(list[0]);
    int i;
     
     for(i=0; i<10; i++){
        if(list[i]<0){
            continue;
        }          
        if (list[i]==0){
            break;                //even there is 6 +ve it donot see it break if the list[i] is zero
        }
        printf("%d\n", list[i]);
     }
     return 0;
   } 