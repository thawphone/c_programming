#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(){

    int max=6;
    int number;
    int dice_num=0;
    int press=1;

    while(press){
        system("cls");
        printf("Enter your number : ");
        scanf("%s",&number);

        //char 49=decimal 1 and char 54=decimal 6 according to ascii table
        while(number<49 || number>54 ){
            number=0;
            printf("Please enter between 1 and 6: ");
            scanf("%s",&number);
        }


        system("cls");
        printf("\n");
        printf("Your number is %d.\n\n",number-48);
        printf("The dice is....\n\n");

        //change the data type of variable to integer type
        if(number-48<=max){
            srand(time(NULL));
            dice_num=rand()%6+1;
            printf("   *******\n");
            printf("   ** %d **\n",dice_num);
            printf("   *******\n");
        }else{
            printf("Please enter between 1 and 6 : ");
        }
        printf("\n");
        if(number-48==dice_num){
            printf("YOU WIN!\n");
        }else{
            printf("YOU LOSE....\n");
        }

        printf("\nPress 1 to play again\nPress 2 to quit\n : ");
        scanf("%s",&press);

        while(press-48<0 | press-48>2){
            press=0;
            printf("Please enter only 1 or 2: ");
            scanf("%s",&press);
        }
        if(press-48==2){
                exit(0);
            }
    }

getch();
return 0;
}
