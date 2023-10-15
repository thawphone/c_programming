#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>

int main(){
    int input=0;
    int result=0;
    int press=3;

    while(press){
        system("cls");
        printf("\n   Choose Head or Tail\n");
        printf("  =====================\n");
        printf("Enter 1 for Head\nEnter 2 for tail\n : ");
        //read the string value of the variable so we can avoid while loop error when user assign value that are not integer data type
        scanf("%s",&input);

        //char value 49=int(decimal) 1 and char value 50=int(decimal) 2 according to ascii table
        while(input<49 || input>50){
            //reassign the input as 0 so that the next input doesn't mess with the previous input
            input=0;
            printf("Please Enter only 1 or 2\n : ");

            //read the string value of the variable so we can avoid while loop error when user assign value that are not integer data type
            scanf("%s",&input);
        }
        printf("\n");

        //change string value back to integer value
        if(input-48==1){
            printf("Your choice is Head.\n");
        }
        if(input-48==2){
            printf("Your choice is Tail.\n");
        }

        srand(time(NULL));
        result=rand()%2+1;
        printf("\n\n    *************\n");
        if(result==1){
            printf("    *   Head.   *");
        }
        if(result==2){
            printf("    *   Tail.   *");
        }
        printf("\n    *************\n");

        //change the string value back to integer value and check if it equals to dice number
        if(input-48==result){
            printf("\nYou Win!");
        }else{
            printf("\nYou Lose....");
        }
        printf("\n\nEnter 3 to play again\nEnter 0 to exit \n :");
        scanf("%s",&press);
        while(press-48<0 || press-48>3){
            press=0;
            printf("Please enter only 0 or 3 \n : ");
            scanf("%s",&press);
        }
        if(press-48==0){
            exit(0);
        }

    }




getch();
return 0;
}
