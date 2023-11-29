#include<stdio.h>

int main(){
    int score;
    printf("Enter your score here: ");
    scanf("%d", &score);

    if(score >= 80 && score <= 100){
        printf("A+");
    }
    else if(score >= 75 && score <= 79){
        printf("A");
    }
    else if(score >= 70 && score <= 74){
        printf("A-");
    }
    /*
    Complete yourself
    */
    else{
      printf("Score is not valid.");
    }
    return 0;
}
