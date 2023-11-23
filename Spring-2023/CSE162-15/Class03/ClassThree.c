#include<stdio.h>

int main(){
    //chal, dal, holod, morich
    int chal, dal;
    float holod, morich;
    chal = 4; //kg
    dal = 2; //kg
    holod = 250.0/1000; //kg
    morich = 200/1000.0; //kg
    printf("Chal: %d kg, Dal: %d kg, Holod: %.3f kg, Morich: %.3f kg.\n", chal, dal, holod, morich);

    float totalKhichuri = chal + dal + holod + morich;

    printf("Total khichuri: %.3f kg.\n", totalKhichuri);

    printf("Enter your money: ");
    int customerPaidMoney;
    scanf("%d", &customerPaidMoney);
    /*
    char string[10];
    scanf("%s", &string);
    printf("%s", string);
    */

    if(customerPaidMoney == 30){
        printf("Congratulations! You got half plate khichuri\n");
    }
    else if(customerPaidMoney >= 45 && customerPaidMoney <= 50){
        printf("Congratulations! You got full plate khichuri\n");
        if(customerPaidMoney == 50){
            printf("You got 5 points.\n");
        }
    }
    else{
        printf("Out of service.\n");
    }

    printf("out of if block.");
    return 0;
}
