//Q1
/*
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("The unit digit of the number is %d",num%10);
    return 0;
}*/

//Q2
/*
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("The number without unit digit is %d",num/10);
    return 0;
}
*/
//Q3
/*
#include<stdio.h>
int main(){
    int temp,a,b;
    printf("Enter any two numbers ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The swapped numbers are a=%d and b=%d",a,b);
    return 0;
}*/

//Q4
/*
#include<stdio.h>
int main(){
        int a,b;
    printf("Enter any two numbers ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapped numbers are a=%d and b=%d",a,b);
    return 0;
}*/

//Q5
/*
#include<stdio.h>
int main(){
    int num,n,sum=0;
    printf("Enter any number");
    scanf("%d",&num);
    n=num;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    printf("The sum of the digits is %d",sum);
    return 0;
}*/

//Q6
/*
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character");
    scanf("%c",&ch);
    printf("The ASCII code of the character is %d",ch);
    return 0;
}*/

//???Q7
/*
#include<stdio.h>
int main(){
    int num,pos=0;
    printf("enter a number ");
    scanf("%d",&num);
    num
    printf("The position of first 1 is %d",pos);
    return 0;
}*/

//??Q8
/*
#include<stdio.h>
int main(){
    int 
}
*/

//Q9
/*
#include<stdio.h>
int main(){
    printf("Size of int is %d bytes",sizeof(int));
    printf("\nSize of char is %d bytes",sizeof(char));
    printf("\nSize of float is %d bytes",sizeof(float));
    printf("\nSize of double is %d bytes",sizeof(double));
    return 0;
}*/

//Q10
/*
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    num/=10;
    num*=10;
    printf("The new number is %d",num);
    return 0;
}*/

//Q11
/*
#include<stdio.h>
int main(){
    int num, dig;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("enter the digit to be appended ");
    scanf("%d",&dig);
    num=num*10;
    num+=dig;
    printf("The new number is %d",num);
    return 0;
}*/

//Q12
/*
#include<stdio.h>
int main(){
    float inr;
    printf("Enter the amount indian rupees ");
    scanf("%f",&inr);
    inr*=76.23;
    printf("The amount in usd is %f",inr);
    return 0;
}*/

//
