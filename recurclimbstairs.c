#include<stdio.h>
int stair(int n){
    if (n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    else{
        return stair(n-1)+stair(n-2);
    }
}
int main(){
    int n=8;
    int p=stair(n);
    printf("%d",p);
}