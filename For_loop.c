/*
 The for_loop is used in c when you known exactly how many time the loop going to run
  The syntax:
   for (initialization; condition;update ){
     //block of code;
     }

     example print no from 1 to 5

    #include<stdio.h>
    int main(){
    int i;
    for(i=1;i<=5;i++){     //for(i=0;i<=10;i=i+2)-->this for print even no upto 10
    printf("%d\n",i);
    }
    return 0;
    }

    //sum of the numbers
    #include<stdio.h>
    int main(){
        int sum=0;
        int i;
        for(i=1;i<=5;i++){
            sum = sum + i;
        
        }
        printf("sum of the no:%d",sum);
        return 0;
    //  Now we see what is "Nested-loop" it is possible to place a loop inside the another loop
  The inner loop is runs one time for each iteration of the outer loop
  

  // Example:
  #include<stdio.h>
  int main(){
    int i,j;
    for (i=1; i<=2; ++i){
        printf("outer:%d\n",i);
         for(j=1; j<=3; ++j){
            printf("inner:%d\n",j);
         }
    }
    return 0;
  }
    */
   // Example : the multiplication table of 2

   # include<stdio.h>
   int main(){
    int i , j;
    for (i=1; i<=3; i++){
        for (j=1; j<=3; j++){
            printf("%d", i*j);
        }
           printf("\n");
 
    }
    
    return 0;
   }
