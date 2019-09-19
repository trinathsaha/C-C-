#include<stdio.h>

void func(int i);
long long int fib(int n);
long long int fibVals[100];

int main() {
    printf("%lld\n",fib(90));
}

long long int fib(int n) {
    if (n<=1)
        return 1;
    if (fibVals[n]>0)
        return fibVals[n];
    long long int val= fib(n-1)+fib(n-2);
    fibVals[n]= val;
    return val;
}

int factorial(int i) {
    if (i==1)
        return 1;
    return factorial(i-1)*i;
}
