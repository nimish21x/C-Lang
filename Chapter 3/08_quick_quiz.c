/*

Write a program to find grade of a student given his marks based on below: 

        90 – 100 => A 
        80 – 90 => B 
        70 – 80 => C 
        60 – 70 => D 
        50 – 60 => E 
        <50        
        => F 

*/

// The Solution for this will contain some error as the marks are overlapping and will give discrete results for marks such as 90, 80, 70, 60.

// Self Solution (With Zero Errors for the first time):


#include <stdio.h>

int main(){
    
    int marks;
    printf("Enter marks\n");
    scanf("%d", &marks);
    
    if(marks<=100 && marks>=90){
    printf("Your grade is A");
    }

    else if (marks>= 80 && marks<=90){
    printf("Your Grade is B");
    }

    else if (marks>=70 && marks<=80){
    printf("Your Grade is C");
    }

    else if (marks>=60 && marks<=70){
    printf("Your Grade is D");
    }

    else if (marks<=50 && marks<=60){
    printf("Your Grade is E");
    }

    else if (marks<50){
        printf("Your Grade is F");
    }
    return 0;
}


// Code With Harry's Solution:

/*


 char grade;
   int marks = 46;
   if(marks<=100 && marks>=90){
    grade = 'A';
   }
   else if(marks<=90 && marks>=80){
    grade = 'B';
   }
   else if(marks<=80 && marks>70){
    grade = 'C';
   }
   else if(marks<=70 && marks>=60){
    grade = 'D';
   }
   else if(marks<=60 && marks>=50){
    grade = 'E';
   }
   else{
    grade = 'F';
   }
    return 0;
}   


*/