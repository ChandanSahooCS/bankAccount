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
// Function to deposit amount in an account
void Cash_Deposit()
{
   auto int acc_no;
   float add_money;

   printf("Enter account number you want to deposit money:");
   scanf("%d",&acc_no);
   printf("\nThe current balance for account %d is %f \n",acc_no, account[acc_no-1].available_balance);
   printf("\nEnter money you want to deposit :  ");
   scanf("%f",&add_money);

   while (acc_no=account[acc_no-1].acc_number)
   {
         account[acc_no-1].available_balance= account[acc_no-1].available_balance + add_money;
         printf("\nThe New balance for account %d is %f \n",acc_no, account[acc_no-1].available_balance);
         break; 
   }acc_no++;
}