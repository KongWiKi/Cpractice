//
// Created by kongweikun on 18-6-14.
//

//3n+1问题
#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    while (n > 1){
        if (n % 2 == 1){
            n = 3*n+1;
        } else{
            n = n/2;
        }
        count ++;
    };
    printf("%d",count);
}