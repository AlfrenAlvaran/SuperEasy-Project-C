#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user {
    char acc[50];
    char mobile[10];
    char pass[8];
    float balance;
};

int main(void)
{
    struct user usr,usr1;
    FILE *fp;
    char filename[100];
    char phone[10];
    char password[8];
    int opt;
    int amnt;
    int choice;
    char cont = 'y';

    printf("\n1. Register account");
    printf("\n2. Login account");

    printf("\nEnter your prepared option: ");
    scanf("%d",&opt);

    if(opt == 1)
    {
        system("cls");
        printf("\nEnter your Email: ");
        scanf("%s",usr.acc);
        printf("\nEnter your mobile number: ");
        scanf("%s",usr.mobile);
        printf("\nSet password atleast 8 charaters: ");
        scanf("%s",usr.pass);
        usr.balance = 0;

        strcpy(filename,usr.mobile);
        fp = fopen(strcat(filename,".dat"),"w");
        fwrite(&usr,sizeof(struct user),1,fp);
        if(fprintf != 0)
        {
            printf("\nYour account successfully registered!");
        }
        else 
        {
            printf("\nSomething went wrong please try again later");
        }
        fclose(fp);
    }
    if(opt == 2)
    {
        system("cls");
        printf("\nPhone: ");
        scanf("%s",phone);
        printf("\nPassword: ");
        scanf("%s",password);

        strcpy(filename,phone);
        fp = fopen(strcat(filename,".dat"),"r");
        if(fp == NULL)
        {
            printf("\nAccount is not register");
        }
        else
        {
        fread(&usr,sizeof(struct user),1,fp);
        fclose(fp);
            if(!strcmp(password,usr.pass))
            {
                while (cont == 'y')
                {
                    system("cls");
                    printf("\nPress 1. to check balance");
                    printf("\nPress 2. to deposite an amount");
                    printf("\nPress 3. to witdraw");
                    printf("\npress 4. to transfer balance");
                    printf("\nPress 5. to change password\n");

                    printf("\nEnter your prepared choice: ");
                    scanf("%d",&choice);

                   switch(choice)
                   {
                    case 1:
                    printf("\nYour current balance: %.2f",usr.balance);
                    break;

                    case 2: 
                    printf("\nEnter  cash amount: ");
                    scanf("%f",&amnt);
                    usr.balance += amnt;
                    fp = fopen(filename,"w");
                    fwrite(&usr,sizeof(struct user),1,fp);
                    if(fwrite != NULL)
                    {
                        printf("\nSuccessfully Deposited!");
                    }
                    break;
                    case 3:
                    printf("\nEnter  cash amount: ");
                    scanf("%f",&amnt);
                    usr.balance -= amnt;
                    fp = fopen(filename,"w");
                    fwrite(&usr,sizeof(struct user),1,fp);
                    if(fwrite != NULL)
                    {
                        printf("\nYou have withdraw %.2f",amnt);
                    }

                    fclose(fp);
                    break;

                    case 4: 
                    printf("\nEnter phone number to transfer: ");
                    scanf("%s",phone);
                    printf("\nEnter amount");
                    scanf("%d",&amnt);
                    if(amnt > usr.balance)
                    {
                        printf("\nAmount is to big!");
                    }
                    else
                    {
                        strcpy(filename,phone);
                        fp = fopen(strcat(filename,".dat"),"r");
                        fread(&usr1,sizeof(struct user),1,fp);
                        fclose(fp);
                        fopen(filename,"w");
                        usr1.balance += amnt;
                        fwrite(&usr1,sizeof(struct user),1,fp);
                        fclose(fp);
                        if(fwrite != NULL)
                        {
                            printf("\nSuccessfully transferred");
                            strcpy(filename,usr.mobile);
                            fp = fopen(strcat(filename,".dat"),"w");
                            usr.balance -= amnt;
                            fwrite(&usr,sizeof(struct user),1,fp);
                            fclose(fp);
                        }

                    }
                   }

                    printf("\nContinue the transaction?[y/n]: ");
                    scanf("%s",&cont);
                }
                
            }            
             else
            {

                printf("\nIncorrect password");
            
            }
        }
    }
    return 0;
}