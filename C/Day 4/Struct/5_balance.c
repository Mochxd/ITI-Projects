#include <stdio.h>
#include <string.h>

struct Customer {
    char name[50];
    int accountNumber;
    float balance;
};

void balance200(struct Customer customers[], int numCustomers);
void balance1000(struct Customer customers[], int numCustomers);

int main() {

// Declare variacles
    int num_customers;
    
// Get number of the customers from the user    
    printf("Enter the number of customers: ");
    scanf("%d", &num_customers);

    struct Customer customers[num_customers];
    
// Get customer information
    for (int i = 0; i < num_customers; i++) {
        fflush(stdin);
        printf("Enter name for customer %d: ", i + 1);
        gets(customers[i].name);
        printf("Enter account number for customer %d: ", i + 1);
        scanf("%d", &customers[i].accountNumber);
        printf("Enter balance for customer %d: ", i + 1);
        scanf("%f", &customers[i].balance);
    }

    balance200(customers, num_customers);

    balance1000(customers, num_customers);

    return 0;
}

// Function to print names of customers with balance less than $200
void balance200(struct Customer customers[], int numCustomers) {
    printf("Customers Balance less than $200:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 200.0) {
            printf("%s\n", customers[i].name);
        }
    }
}

// Function to add $100 to balance for customers with balance more than $1000
void balance1000(struct Customer customers[], int numCustomers) {
    printf("\nAdditional balance for customers with more than $1000:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance > 1000.0) {
            customers[i].balance += 100.0;
            printf("%s: $%.2f\n", customers[i].name, customers[i].balance);
        }
    }
}
