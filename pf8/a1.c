#include <stdio.h>

void displayPacks() {
    printf("Mobile recahrge\n");
    printf("1. Rs. 100\n");
    printf("2. Rs. 200\n");
    printf("3. Rs. 500\n");
    printf("4. Rs. 1000\n");
}

int getPackNumber() {
    int choice;
    printf("Enter pack number(1 to 4:");
    scanf("%d",&choice);
    return choice;
}
long long getMobileNumber(){
    long long number;
    printf("Enter 11-digit mobile number: ");
    scanf("%lld", &number);
    return number;}

double findAmount(int choice) {
    double amount = 0;
    switch (choice) {
        case 1:
     amount=100;
            break;
                  case 2:
        amount=200;
           break;
    case3:
        amount=500;
            break;
        case 4:
     amount = 1000;
                 break;
                    default:
    amount = 0;
         break;
    }
    return amount;
}
double calculateTax(double amount){
    return amount*0.15;}
double calculateBonus(double amount){
    if (amount >= 500) {
        return amount * 0.10;
    }
    return 0;}
void printSlip(long long mobile, double amount, double tax, double totalBalance) {
 printf("Mobile No: %lld\n", mobile);
   printf("PackAmount:Rs. %.2f\n", amount);
  printf("Tax (15%):Rs.%.2f\n", tax);
  printf("Total Balance: Rs. %f\n",totalBalance);}
int main() {
    double totalMoneySpent=0;
 for (int i =1;i<=3;i++){
        printf("Recharge Transaction %d of3\n", i);
        displayPacks();
 int choice=getPackNumber();
  double amount=findAmount(choice);
        if (amount == 0){
         printf("Invalid pack selection. Please try again.\n");
            i--;
            continue;
        }     long long mobile = getMobileNumber();
        doubletax = calculateTax(amount);
    double bonus = calculateBonus(amount);
    double totalBalance = amount + bonus
            double totalCost = amount + tax;
 totalMoneySpent+=totalCost;

       printSlip(mobile, amount, tax, totalBalance);}
printf("\nTotal money onall recharges:rs%f\n",totalMoneySpent);
    return 0;
}