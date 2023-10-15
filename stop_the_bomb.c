#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(){
    int number=0;
    int max=5;
    int chance=0;
    int hint=0;
    printf("\n===== Break the code to stop the bomb =====");
    printf("\nYou have %d chances to stop the bomb\n",max);
    printf("\nBIG HINT :::: The missing code is only integer if u input codes that are not numbers, the bomb will explode ::::");

    srand(time(NULL));
    int game_number=rand()%99;

    while(chance<max){
    int press=0;
    chance++;
    printf("\n\nEnter the missing number to stop the bomb : ");
    scanf("%d",&number);


    if(number>game_number){
        printf("\nYou need smaller number to break the code.");
        }
    if(number<game_number){
        printf("\nYou need larger number to break the code.");

        }

    if(max-chance==1){
        printf("\n\nYou only have 1 chance left to stop the bomb.\n Do you want HINT? \nEnter 3 to get hint\nEnter any number to skip the hint ");
        printf("\n!!REMEMBER!! If your input is not a number, the bomb will explode.\n :");
        scanf("%d",&hint);
        if(hint==3){
            printf("\nHINT: The number is between %d and %d.\n",game_number-1,game_number+3);
        }else{
            printf("Wow you choose not to look the hint!\nKeep Going! GOOD LUCK\5\n\n");
        }
    }
    if(number==game_number){
        system("cls");
        printf("\n$$$$$   WELL DONE! YOU STOPPED THE BOMB  $$$$$\n");
    }
    if(max-chance==0 && number!=game_number){
        system("cls");
        printf("\n?????  BOOOOM!!! YOU COULDN'T STOP THE BOMB  ?????");
    }
    if(max-chance==0 | number==game_number){
        printf("\n\nEnter 1 to play again\nEnter any key to exit\n : ");
        scanf("%d",&press);
        if(press==1){
            //set the chance back to zero
            chance=0;
            game_number=rand()%99;
            system("cls");
            printf("\n===== Break the code to stop the bomb =====\n");
            printf("You have %d chances to stop the bomb.\n",max);

        }else{
            exit(0);
         }
    }

    }



getch();
return 0;
}
