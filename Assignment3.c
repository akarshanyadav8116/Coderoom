#include<stdio.h>
int main(){
    //Q1
    /*int num;
    scanf("%d",&num);
    if(num>=0){
        printf("It is a positive number");
    }
    else{
        printf("It is a non-positive number");
    }
    */

    //Q4
    /*int num;
    scanf("%d",&num);
    if((2*(num/2))-num==0){
        printf("It is an even number");
    }
    else{
        printf("It is an odd number");
    }
    */

    //Q5
    /*int num;
    scanf("%d",&num);
    if(num/100>0&&num/100<10){
        printf("It is a three-digit number");
    }
    else{
        printf("It is not a three-digit number");
    }*/
    
    //Q6
    /*int n1,n2;
    printf("Enter any two numbers :");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        printf("%d is greater than %d",n1,n2);
    }
    else if(n1<n2){
        printf("%d is greater than %d",n2,n1);
    }
    else{
        printf("Both nos. are same");
    }*/

    //Q7
    /*int a,b,c,D;
    printf("Enter a,b,c as in ax2+bx+c :");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D>0){
        printf("The roots are real and distinct");
    }
    else if(D<0){
        printf("The roots are imaginary");
    }
    else{
        printf("The roots are real and equal");
    }*/

    //Q8
    /*int year;
    printf("Enter the year to check for leap year :");
    scanf("%d",&year);
    if(year%4==0&&(year%100!=0||year%400==0)){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }*/

    //Q9
    /*int n1,n2,n3,max;
    printf("Enter any three numbers");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("The max number of the three is %d",max);
    return 0;*/

    //Q10
    /*float cp,sp,per;
    printf("Enter the cost price of the product");
    scanf("%f",&cp);
    printf("Enter the selling price of the product");
    scanf("%f",&sp);
    if(sp>=cp){
        per=((sp-cp)*100)/cp;
        printf("The profit percentage is %.2f%%",per);
    }
    else{
        per=((cp-sp)*100)/cp;
        printf("The loss percentage is %.2f%%",per);
    }*/

    //Q12
    /*char ch;
    printf("Enter any character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        printf("The alphabet is uppercase");
    }
    else{
        printf("The alphabet is lowercase");
    }*/

    //Q13
    /*int i,n;
    printf("Enter any number");
    scanf("%d",&n);
    if(n%2==0&&n%3==0){
        printf("The number is divisible by both 2 and 3");
    }
    else{
        printf("The number is not divisible by both 2 and 3");
    }*/

    //Q17
    /*int s1,s2,s3;
    printf("Enter the three sides of the triangle");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1+s2>s3&&s2+s3>s1&&s1+s3>s2){
        printf("The triangle is valid");
    }
    else{
        printf("The triangle is invalid");
    }*/
    return 0;
}