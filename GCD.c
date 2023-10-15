//The greatest common divisor (GCD) is the greatest number which can divide two numbers evenly.

#include <stdio.h>
#include <conio.h>

int main(){
    int first_num=0;
    int second_num=0;
    printf("Enter first number: ");
    scanf("%d",&first_num);
    printf("Enter second number: ");
    scanf("%d",&second_num);


// divide the first number by the second number
// take the remainder,
// if remainder is not equal to zero, divide the divisor by the remainder
// repeat it until the remainder becomes 0
// here, the divisor(remainder) which evenly divides the previous divisor is the Greatest Common Divisor(GCD)

    while(second_num!=0){
        int tmp=second_num;
        second_num=first_num%second_num;
        first_num=tmp;
    }
    printf("The GCD is %d",first_num);

getch();
return 0;
}

/* first_num 12
    second_num 18 (18!=0)
     - tmp=18
     - second_num=12%18 (here, second_num becomes 12)
     - first_num=tmp (18)
     so after first loop the first number becomes 18 and the second number becomes 12

     12!=0
     - tmp=12
     - second_num=18%12=6 (here, second_num becomes 6)
     - first_num=tmp(12)
     so, after the second loop, the first number becomes 12 and the second number becomes 6

     6!=0
     - tmp=6
     - second_number=12%6=0
     - first_number=6

     6 evenly divides 12 (remainder becomes 0)
     6 is the GCD of numbers 12 and 18


*/



