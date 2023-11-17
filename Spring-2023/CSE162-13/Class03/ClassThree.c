// C program to demonstrate use of static variable
#include <stdio.h>
int main(){
    int chal, dal;
    float morich, holod;
    dal = 1; //kg
    chal = 2; // kg
    morich = 250.0/1000; //gm
    holod = 250.0/1000; //gm
    float totalKhichuri = dal + chal + morich + holod;
    printf("dal: %d kg, chal: %d kg, morich: %.3f kg, holod: %.3f kg\n", dal, chal, morich, holod);
    printf("Total khicori: %.2f kg\n", totalKhichuri);

    printf("Please enter your paid money: \n");
    int customerPaidMoney;
    scanf("%d", &customerPaidMoney);

    if(customerPaidMoney >= 40 && customerPaidMoney <= 50){
        printf("Take half plate khichuri\n");
    }
    else if(customerPaidMoney >= 80 && customerPaidMoney <= 90){
        printf("Take full plate khichuri\n");
        if(customerPaidMoney == 90){
            printf("Take huge!\n");
        }
        else{
            printf("Paid 90 tk for a huge!");
        }
    }
    else {
        printf("Out of service");
    }
    return 0;
}
