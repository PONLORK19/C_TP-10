#include<stdio.h>
void displaySequence(int n){
    for(int i = 1 ; i <= n; i++){
        if(i != 10){
            printf("%d ", i);
        }
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num > 1){
        displaySequence(num);
    }else {
        printf("Invalid input number. You are only allowed to input the positive number greater than 1.");
    }
}