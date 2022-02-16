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
void sine();
void coss();
void tann();
void logarithm();

int main() {
    printf("\t\tWelcome to my first scientific calculator\n");
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
    printf("Enter 11 for Sin\n");
    printf("Enter 12 for Cos\n");
    printf("Enter 13 for Tan\n");
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
            case 11:
                sine();
                break;
            case 12:
                coss();
                break;
            case 13:
                tann();
                break;
            case 14:
                logarithm();
                break;
            case 0:
                exit(0);
            default:
                printf("\n***** %s enter a valid operation *****\n");
        }
    }
    return 0;
}
//int func(int a,int b,char c){

//}
void addition(){
   printf("Enter the numbers you want to add: ");
   int a, b;
   scanf("%d%d",&a,&b);
   printf("the sum is %d\n",a+b);
}
void subtraction(){
    printf("Enter the numbers you want to deduct: ");
    int a, b;
    scanf("%d%d",&a,&b);
    printf("the answer is %d\n",a-b);
}
void multiply(){
    printf("Enter the numbers you want to multiply: ");
    int a, b;
    scanf("%d%d",&a,&b);
    printf("the answer is %d\n",a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a, b;
    scanf("%d%d",&a,&b);
    printf("the answer is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus: ");
    int a, b;
    scanf("%d%d",&a,&b);
    printf("the sum is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the numbers you want to find factorial: ");
    //int n;
    scanf("%d", &n);
    factorial=1;
    for (int i = 1; i <= n; i++) {
     factorial=factorial*i;
    }

    printf("\nFactorial of %d is %d\n",n,factorial);
}
void power(){
    double b,p;
    printf("Enter the base number and the number of power: ");
    scanf("%lf%lf",&b,&p);
    double e= pow(b,p);
    printf("the power is %lf\n",e);

}
void square(){
    double p;
    printf("Enter the number you want to squared: ");
    scanf("%lf",&p);
    double s= pow(p,2);
    printf("the square is %lf\n",s);
}
void cube(){
    double p;
    printf("Enter the number you want to be cubed: ");
    scanf("%lf",&p);
    double s= pow(p,3);
    printf("the cube is %lf\n",s);
}
void squareroot(){
    double b;
    printf("Enter the number you want to find square root: ");
    scanf("%lf",&b);
    double s=sqrt(b);
    printf("the square root of %lf is %lf\n",b,s);
}
void sine(){
    double d;
    printf("Enter the number for Sin operation: ");
    scanf("%lf",&d);
    double s=sin(d);
    printf("the answer for sin is %lf\n",s);
}
void coss(){
    double c;
    printf("Enter the number for Cos operation: ");
    scanf("%lf",&c);
    double e= cos(c);
    printf("the answer for Cos is %lf\n",e);
}
void tann(){
    double e;
    printf("Enter the number for Tan operation: ");
    scanf("%lf",&e);
    double t= tan(e);
    printf("the answer for tan is %lf\n",t);
}
void logarithm(){
    double e;
    printf("Enter the number for Log operation: ");
    scanf("%lf",&e);
    double t= log(e);
    printf("the answer for log is %lf\n",t);
}