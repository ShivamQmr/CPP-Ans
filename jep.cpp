#include<stdio.h>
int main(){
    for(int i=65 ; i<=70 ; i++){
        for(int j=65 ; j<=i ; i++){
            printf("%c", j);
        }
        printf("\n");
    }
}