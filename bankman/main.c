#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include"bankacc.h"

// Structure declaration
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

int num_acc;

void Create_new_account();
void Cash_Deposit();
void Cash_withdrawl();
void Account_information();
void Log_out();
void display_options();

/* main program */
int main()
{
    char option;
    num_acc=0;
    while(1)
    {
       printf("\n***** Welcome to Bank Application *****\n");
       display_options();
       printf("Please enter any options (1/2/3/4/5/6) to continue : ");
        option = getch();
        printf("%c \n", option);
        switch(option)
        {
          case '1': Create_new_account();
                    break;
          case '2': Cash_Deposit();
                    break;
          case '3': Cash_withdrawl();
                    break;
          case '4': Account_information();
                    break;
          case '5': return 0;
          case '6': system("cls");
                    break;
          default : system("cls");
                    printf("Please enter one of the options");
                    printf("(1/2/3/4/5/6) to continue \n ");
                    break;
        }
    }
    return 0;
}