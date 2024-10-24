#include<stdio.h>
int count(int n){
    printf("%d ",n);
    if(n==1){
        return 1;
    }
    else{
        return count(n-1);
    }
}
int main(){
    int n=5;
    count(n);
    return 0;
}