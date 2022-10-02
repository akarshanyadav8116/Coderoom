#include<stdio.h>
int main(){
    int i,j,k,l=5;
    printf("\n\n\n");
    for(i=1;i<=12;i++){
        if(i<3){
            for(k=2;k>=i;k--){
            printf(" ");
            }
            for(j=1;j<=l;j++){
            printf("*");
            }
            for(k=1;k<=(8-l);k++){
                printf(" ");
            }
            for(j=1;j<=l;j++){
                    printf("*");
            }
                l+=2;
        }
        else if(i>3){
            for(k=9;k>l;k--){
                printf(" ");
            }
            for(j=1;j<=((l*2)-1);j++){
                printf("*");
            }
            l--;
        }
        else{
            for(j=1;j<=((l*2)-1);j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}