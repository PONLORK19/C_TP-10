#include<stdio.h>
#include<math.h>
int computeCube(int n){
    int cube = pow(n,3);
    printf("The cube of %d is %d", n, cube);
    return cube;
}
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    if(num > 1){
        computeCube(num);
    }else{
        printf("Error! Invalid input number! You must input a number greater than 0. Please try again!");
    }
}