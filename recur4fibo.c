#include<stdio.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n=8;//1 1 2 3 5
    int fibona=fibo(n);
    printf("%d",fibona);
}