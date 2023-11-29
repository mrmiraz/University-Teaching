#include<stdio.h>

int main(){
    //printf("1 2 3 4 5 6 7 8 9 10");
    /*
    int i;
    for(i = 1; i < 11; i++){
            printf("Southeast University!\n");
    }
    */
    int i;
    for(i = 1; i < 11; i++){
        if(i % 2 == 1){
            printf("%d ", i);
        }
    }
    printf("End of for block!\n");
    return 0;
}
