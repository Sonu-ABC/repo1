#include<stdio.h>
int power(int n){
    if(n==0){
        return(1);
    }
    else{
        return 2*power(n-1);
    }
}
int main(){
    int n=6;
    int pow=power(n);
    printf("%d",pow);
}