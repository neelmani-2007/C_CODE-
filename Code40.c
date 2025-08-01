#include<stdio.h>
struct BankAccount {
    int accountNumber;
    char accountHolder[100];
    float balance;
};
int main() {
    struct BankAccount customer1 = {123456, "John Doe", 1500.50};
    printf("Account Number: %d\n", customer1.accountNumber);
    printf("Account Holder: %s\n", customer1.accountHolder);
    printf("Balance: $%.2f\n", customer1.balance);
    return 0;
}