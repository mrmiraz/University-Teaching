#include<stdio.h>

int main(){
    // integer input
    /*
    int a;
    scanf("%d", &a);
    printf("%d", a);
    */
    // String input
    /*
    char a[10];
    scanf("%s", &a);
    printf("%s", a);
    */

    //chal, dal, holod, morich
    int chal, dal;
    float holod, morich;
    chal = 5; //measured in kg
    dal = 2; //kg
    holod = 25.0/1000; //kg
    morich = 250.0/1000; //kg

    float totalKhichuri = chal + dal + holod + morich;
    printf("chal: %d kg, dal: %d kg, holod: %.3f kg, morich: %.3f kg\n", chal, dal, holod, morich);
    printf("Total khichuri: %.3f kg\n", totalKhichuri);

    int customerPaidMoney;
    printf("Enter your paid money: ");
    scanf("%d", &customerPaidMoney);

    if(customerPaidMoney > 10){
            printf("Welcome!\n");
    }

    if(customerPaidMoney >= 25 && customerPaidMoney <= 30){
        printf("Congratulations! You got half plate khichuri.\n");
    }
    else if(customerPaidMoney >= 45 && customerPaidMoney <= 50){
        printf("Congratulations! You got full plate khichuri.\n");
        if(customerPaidMoney == 50){
            printf("Take chocolate as a gift.\n");
        }
    }
    else{
        printf("Out of service.");
    }

    return 0;
}
