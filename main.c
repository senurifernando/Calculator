#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "enter the correct operation you need"

void addition();
void subtraction();
void multiply();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
//int func(int,int,char);
int main() {
    printf("Welcome to my first scientific calculator\n");
    int choice;
    printf("\n****press 0 to exit the system****\n");
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter 5 for modulus\n");
    printf("Enter 6 for factorial\n");
    printf("Enter 7 for power\n");
    printf("Enter 8 for square\n");
    printf("Enter 9 for cube\n");
    printf("Enter 10 for squareroot\n");
    while(1){
        printf("Enter the operation you want to do:\n");

        scanf("%d" ,&choice);
        switch (choice){
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiply();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 6:
                factorial();
                break;
            case 7:
                power();
                break;
            case 8:
                square();
                break;
            case 9:
                cube();
                break;
            case 10:
                squareroot();
                break;
            case 0:
                exit(0);
            default:
                printf("\n***** %s *****\n");
        }
    }
    return 0;
}
//int func(int a,int b,char c){

//}
void addition(){
   printf("Enter the numbers you want to add: ");
   int a, b;
   scanf("%d,%d",&a,&b);
   printf("the sum is %d\n",a+b);
}
void subtraction(){
    printf("Enter the numbers you want to deduct: ");
    int a, b;
    scanf("%d,%d",&a,&b);
    printf("the answer is %d\n",a-b);
}
void multiply(){
    printf("Enter the numbers you want to multiply: ");
    int a, b;
    scanf("%d,%d",&a,&b);
    printf("the answer is %d\n",a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a, b;
    scanf("%d,%d",&a,&b);
    printf("the answer is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus: ");
    int a, b;
    scanf("%d,%d",&a,&b);
    printf("the sum is %d\n",a%b);
}
void factorial(){
    int _cdec1 printf(const char *, ....)
    printf("Enter the numbers you want to find factorial: ");
    int n;
    scanf("%d", &n);
    factorial=1;
    for (int i = 1; i <= n; i++) {
factorial=factorial*i;
    }

    printf("\nFactorial of %d is %d",n,factorial);
}
void square(){
    printf("Enter the numbers you want to find square: ");
    int a, b;
    scanf("%d,%d",&a,&b);
    printf("the sum is %d\n",a+b);
}