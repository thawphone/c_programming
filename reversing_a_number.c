#include <stdio.h>
#include <conio.h>
int reverse(int num);

int main(){
    int number=0;
    printf("Enter a number to reverse : ");
    scanf("%d",&number);
    int reversed_number = reverse(number);
    printf("The reversed number is %d.",reversed_number);

getch();
return 0;
}

int reverse(int num){
    int reversed=0;
    while(num!=0){
        int i = num%10;
        reversed=reversed*10+i;
        num=num/10;
    }
    return reversed;

}
