#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include"bankacc.h"
struct acc_type
{
     char bank_name[20];
     char bank_branch[20];
     char acc_name[30];
     int acc_number;
     char acc_address[100];
     float available_balance;     
};
struct acc_type account[20];

// Displaying account informations

void Account_information()
{
     register int num_acc = 0;
     //if (!strcmp(customer,account[count].name))
     while(strlen(account[num_acc].bank_name)>0)
     {
         printf("\nBank name                : %s \n" , account[num_acc].bank_name);
         printf("Bank branch              : %s \n" , account[num_acc].bank_branch);
         printf("Account holder name      : %s \n" , account[num_acc].acc_name);
         printf("Account number           : %d \n" , account[num_acc].acc_number);
         printf("Account holder address   : %s \n" , account[num_acc].acc_address);
         printf("Available balance        : %f \n\n" , account[num_acc].available_balance);
         num_acc++;
     }
}