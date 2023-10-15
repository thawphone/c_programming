#include <stdio.h>
#include <conio.h>
#include <math.h>
int dec_to_all(decimal);
int bin_to_all(binary);
int octal_to_all(octal);
int hexa_to_all(char hex[]);

int main(){
    int decimal=0;
    int binary=0;;
    int octal=0;
    char hexa[100];

    dec_to_all(decimal);
    bin_to_all(binary);
    octal_to_all(octal);
    hexa_to_all(hexa);


getch();
return 0;
}

int dec_to_all(decimal){
    printf("Enter decimal number : ");
    scanf("%d",&decimal);
    int decimal_num=decimal; //store the decimal value
    int i=0;
    char binary[100];
    if(decimal==0){
        binary[i]=0;
        i++;
    }
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    printf("The binary number is ");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    printf("\n");

    //to octal
    decimal=decimal_num;
    i=0;
    char octal[100];
    if(decimal==0){
        octal[i]=0;
        i++;
    }
    while(decimal>0){
        octal[i]=decimal%8;
        decimal=decimal/8;
        i++;
    }
    printf("The octal number is ");
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);
    }

    //to hexadecimal
    decimal=decimal_num;
    char hexa[100];
    i=0;
    if(decimal==0){
        hexa[i]=0;
        i++;
    }
    while(decimal>0){
        hexa[i]=decimal%16;
        decimal=decimal/16;
        i++;
    }
    printf("\nThe hexadecimal number is ");
    for(int j=i-1;j>=0;j--){
        if(hexa[j]>9){
            printf("%c",hexa[j]+55);
        }else{
            printf("%d",hexa[j]);
        }
    }
    printf("\n");


}

int bin_to_all(binary){
    int decimal=0;
    int remainder=0;
    int base=1;
    printf("\nEnter binary number : ");
    scanf("%d",&binary);

    while(binary%10>1){
        printf("Please enter only binary number : ");
        scanf("%d",&binary);
    }

    while(binary>0){
        remainder=binary%10;
        decimal=decimal+remainder*base;
        binary=binary/10;
        base=base*2;
    }

    printf("The decimal number is %d\n",decimal);

    int decimal_num=decimal;//store the decimal value

    //to octal
    int i=0;
    char octal[100];
    if(decimal==0){
        octal[i]=0;
        i++;
    }
    while(decimal>0){
        octal[i]=decimal%8;
        decimal=decimal/8;
        i++;
    }
    printf("The octal number is ");
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);
    }


    //to hexadecimal
    decimal=decimal_num;
    char hexa[100];
    i=0;
    if(decimal==0){
        hexa[i]=0;
        i++;
    }
    while(decimal>0){
        hexa[i]=decimal%16;
        decimal=decimal/16;
        i++;
    }
    printf("\nThe hexadecimal number is ");
    for(int j=i-1;j>=0;j--){
        if(hexa[j]>9){
            printf("%c",hexa[j]+55);
        }else{
            printf("%d",hexa[j]);
        }
    }
    printf("\n");



}

int octal_to_all(octal){
    int decimal=0;
    int base=1;
    int i=0;
    printf("\nEnter octal number : ");
    scanf("%d",&octal);
    while(octal%10>7){
        printf("Enter only octal number : ");
        scanf("%d",&octal);
    }
    while(octal>0){
        i=octal%10;
        decimal=decimal+i*base;
        octal=octal/10;
        base=base*8;
    }
    printf("The decimal number is %d\n",decimal);

    int decimal_num=decimal; //store the decimal value

    //to binary
    i=0;
    char binary[100];
    if(decimal==0){
        binary[i]=0;
        i++;
    }
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    printf("The binary number is ");
    int j=0;
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }

    //to hexadecimal
    decimal=decimal_num;
    char hexa[100];
    i=0;
    if(decimal==0){
        hexa[i]=0;
        i++;
    }
    while(decimal>0){
        hexa[i]=decimal%16;
        decimal=decimal/16;
        i++;
    }
    printf("\nThe hexadecimal number is ");
    for(int j=i-1;j>=0;j--){
        if(hexa[j]>9){
            printf("%c",hexa[j]+55);
        }else{
            printf("%d",hexa[j]);
        }
    }
    printf("\n");


}

int hexa_to_all(char hex[]){
    int i=0;
    int length=0;
    int decimal=0;
    printf("\nEnter hex number : ");
    scanf("%s",hex);

    for(length=0;hex[length]!='\0';length++);
    for(i=0;hex[i]!='\0';i++,length--){
        if(hex[i]>='0' && hex[i]<='9'){
            decimal=decimal+(hex[i]-'0')*pow(16,length-1);
        }
        if(hex[i]>='A' && hex[i]<='F'){
            decimal=decimal+(hex[i]-55)*pow(16,length-1);
        }
        if(hex[i]>='a' && hex[i]<='f'){
            decimal=decimal+(hex[i]-87)*pow(16,length-1);
        }
    }
    printf("The decimal number is %d\n",decimal);

    int decimal_num=decimal;//store the decimal value

    //to binary
    i=0;
    char binary[100];
    if(decimal==0){
        binary[i]=0;
        i++;
    }
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    printf("The binary number is ");
    int j=0;
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }

    //to octal
    decimal=decimal_num;
    i=0;
    char octal[100];
    if(decimal==0){
        octal[i]=0;
        i++;
    }
    while(decimal>0){
        octal[i]=decimal%8;
        decimal=decimal/8;
        i++;
    }
    printf("\nThe octal number is ");
    for(int j=i-1;j>=0;j--){
        printf("%d",octal[j]);
    }
    printf("\n");

}
