#include<stdio.h>
#include<stdlib.h>
int f1(int n){
    if (n ==0 || n == 1){
        return 1;
    }else {
        return f1(n-2) + f1(n-1);
    }
}
void f2(){
    printf("Hello Wolrd");
}
int main(){
   f1();
   f2();
}
