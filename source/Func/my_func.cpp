#include <my_func/my_func.h>

// implementations of functions
int fib(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fib(n-2) + fib(n-1); 
}

bool isPrime(int n){
    if(n == 2){
        return true;
    }
    if(n <= 1 || n % 2 == 0){
        return false;
    }
    for(int i = 2; i * i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool isPowerOf2(int n){
    if(n % 2 == 1 && n != 1){
        return false;
    }
    int temp = 1;
    while(temp < n){
        temp = temp * 2;
    }
    if(temp == n){
        return true;
    }
    return false;
}

int HammingWeight(int n) {
    int r = 0;
    for (int j = 0; j < 32; j ++) {
        if (n < 0) r ++;
        n <<= 1;
    }
    return r;
}
