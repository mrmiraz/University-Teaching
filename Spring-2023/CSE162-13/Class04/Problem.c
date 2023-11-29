#include<stdio.h>

int main(){
    int dayNumber = 2;
    printf("Enter day number: ");
    scanf("%d", &dayNumber);

    /*
    if(dayNumber == 1){
        printf("Sunday");
    }
    else if(dayNumber == 2){
        printf("Monday");
    }
    else if(dayNumber == 3){
        printf("Tuesday");
    }
    else if(dayNumber == 4){
        printf("Wednesday");
    }
    else if(dayNumber == 5){
        printf("Thursday");
    }
    else if(dayNumber == 6){
        printf("Friday");
    }
    else if(dayNumber == 7){
        printf("Saturday");
    }
    else{
        printf("This is not a valid day number!");
    }
    */
    switch(dayNumber){
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("This is not a valid day number!");
    }
    printf("End of switch block!");
    return 0;
}
