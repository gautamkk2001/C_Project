#include <stdio.h>
#include <stdlib.h>

int Balance = 1000;

int Withdraw(){
    int withdraw_Amount=0;
    printf("Available in Multiple of 500 \n");
    printf("Please Enter the amount to withdraw : ");
    scanf("%d",&withdraw_Amount);
    if(withdraw_Amount%500 == 0){
       if(Balance >= withdraw_Amount){
         printf("------------------------------------------\n");
         printf("Transcation Succesfull\n");
         printf("Collect your Cash\n");
         printf("------------------------------------------\n");
         Balance -= withdraw_Amount;
         printf("------------------------------------------\n");
         printf(" Available amount : %d \n",Balance);
         printf("------------------------------------------\n");
       }
      else{
         printf("------------------------------------------\n");
         printf("Insufficient Amount in your Account \n");
         printf("------------------------------------------\n");
        }
    }else{
         printf("------------------------------------------\n");
         printf("Enter Correct Amount in Multiples of 500 \n");
         printf("------------------------------------------\n");
    }
    printf("\n");
    functionality();
}

int Desposit(){
    int desposit_Amount=0;
    long int acc;
    int desposit_Otp;
    printf("Please Enter the amount to desposit : ");
    scanf("%d",&desposit_Amount);
    
    printf("Please Enter the Account Number : ");
    scanf("%d",&acc);
    printf("Please Enter the OTP : ");
    scanf("%d",&desposit_Otp);
    printf("------------------------------------------\n");
    printf("Transcation Succesfull\n");
    printf("Amount Added Successfully\n");
    printf("------------------------------------------\n");
    Balance += desposit_Amount;
    printf("------------------------------------------\n");
    printf("Available amount : %d \n",Balance);
    printf("------------------------------------------\n");
    printf("\n");
    functionality();
}


int Check_Balance(){
    int pin;
    printf("please Enter your Pin : ");
    scanf("%d",&pin);
    printf("------------------------------------------\n");
    printf("  The Available Blance is = %d    \n", Balance);
    printf("------------------------------------------\n");
    printf("\n");
    functionality();
}

void Set_pin(){
    long int acc_no,mobile_num,otp;
    printf("----------------Set Pin-----------------------\n");
    printf("Please enter your Acc No: ");
    scanf("%d \n",&acc_no);
    printf("Please enter your Phone Number: ");
    scanf("%d \n",&mobile_num);
    printf("Please enter the OTP: ");
    scanf("%d \n",&otp);
    printf("------------------------------------------\n");
    printf("   Pin Set Successfully \n");
    printf("------------------------------------------\n");
    printf("\n");
    functionality();
}

void functionality(){
    int option;
    printf("\n");
    printf("==> 1. Withdraw\n");
    printf("==> 2. Desposit\n");
    printf("==> 3. Check Balance\n");
    printf("==> 4. Set Pin\n");
    printf("==> 5. Exit\n");
    printf("Choose any options to peform : ");
    scanf("%d",&option);
    
    switch(option){
    case 1:
      printf("-----Withdraw Operation-----\n");
      Withdraw();
      break;
    case 2:
      printf("-----Desposit Operation-----");
      Desposit();
      break;
    case 3:
      printf("-----Check Balance Operation-----");
      Check_Balance();
      break;
    case 4:
      printf("-----Set Pin Operation-----");
      Set_pin();
      break;
    case 5:
      printf("-----Exit-----");
      exit(0);
    }
}

void main()
{
    printf("----------------------Welcome to ATM--------------------\n");
    printf("--------------------------------------------------\n");
    functionality();
    
}