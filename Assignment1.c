//Q4
/*
#include<stdio.h>
int main(){
    float r,A;
    printf("Enter the radius of the circle ");
    scanf("%f",&r);
    A=3.14*r*r;
    printf("Area of the circle is %f having radius %f\n\n",A,r);
    return 0;
}*/

//Q5
/*
#include<stdio.h>
int main(){
    char str[100];
    int len;
    printf("Enter any string");
    fgets(str,100,stdin);
    len=printf("%s",str);
    printf("\nThe length of the string is %d",len-1);
    return 0;
}
*/

//**Q6
/*
#include<stdio.h>
int main(){
    char str[50];
    printf("Enter your name ");
    fgets(str,50,stdin);
    printf("Hello , %s",str);
    return 0;
}
*/

//Q7
/*
#include<stdio.h>
int main(){
    //printf("%%d");
    fputs("%d",stdout);
    return 0;
}
*/

//Q8
/*
#include<stdio.h>
int main(){
    printf("\\n");
    return 0;
}
*/

//Q9
/*
#include<stdio.h>
int main(){
    printf("\\\\");
    return 0;
}
*/

//Q10
/*
#include<stdio.h>
int main(){
    int dd,mm,yyyy;
    printf("Enter a date (DD/MM/YYYY) -");
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    printf("Day-%d , Month-%d , Year-%d",dd,mm,yyyy);
    return 0;
}*/

//Q11
/*
#include<stdio.h>
int main(){
    int hh,mm;
    printf("Enter the time (HH:MM)-");
    scanf("%d:%d",&hh,&mm);
    printf("%d hour and %d Minute",hh,mm);
    return 0;
}*/


