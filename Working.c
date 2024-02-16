#include<stdio.h>
#include<conio.h>

int main()
{
    int menu;
    int quty;
    int code;
    int addAnother;
    int size;
    float price;
    float amount = 0;
    float total;
    do
    {
        clrscr();
        printf("\t===PaTaBa Restaurant===\t\n\n");
        printf("\t  1. Chicken Menu\n");
        printf("\t  2. Pasta Menu\n");
        printf("\t  3. Drinks Menu\n");
        printf("\t  4. Burger Menu\n");
        printf("\t  5. Dessert Menu\n");
        printf("\n\t_____________________\n\n");
        printf("\t Enter Your Choice: ");
        scanf("%d",&menu);

        if(menu == 1)
        {
            clrscr ();
            printf("\t   Chiken Menu");
            printf("\n______________________________________\n");
            printf("\n[6] 1pc Chicken Meal ---------- ₱75.00");
            printf("\n[7] 2pc Chicken Meal ---------- ₱99.00");
            printf("\n[8] 1pc Chicken w/Spaghetti -- ₱110.00");
            printf("\n[9] 1pc Chicken w/fries ------- ₱95.00");
            printf("\n[10] 6pc Chiken Bucket ------- ₱600.00");
            printf("\n______________________________________\n\n");

            printf("\nEnter Your Choice Meal : ");
            scanf("%d",&code);

            if(code < 6)
            {
                printf("\tInvalid Menu");
            return 0;
            }
            else if(code > 10)
            {
                printf("\tInvalid Menu");
            return 0;
            }
            else
                printf("\nEnter Quantity         : ");
            scanf("%d",&quty);
            switch(code)
            {
            case 6:
                price = 75.00;
                break;

            case 7:
                price = 99.00;
                break;
            case 8:
                price = 110.00;
                break;

            case 9:
                price = 95.00;
                break;

            case 10:
                price = 600.00;
                break;
            }
        }


        else if(menu == 2)
        {
            clrscr();
            printf("\t   Pasta Menu");
            printf("\n______________________________________\n");
            printf("\n[11] Regular spaghetti-------₱65.00");
            printf("\n[12] Spaghetti w/ Shanghai---₱75.00");
            printf("\n[13] Palabok-----------------₱65.00");
            printf("\n[14] Spaghetti Kasalo--------₱600.00");
            printf("\n[15] Palabok Kasalo----------₱650.00");
            printf("\n______________________________________\n");

            printf("\nEnter Your Choice Meal : ");
            scanf("%d",&code);
            if(code < 11)
            {
                printf("\nInvalid Menu");
            return 0;
            }
            else if(code > 15)
            {
                printf("\nInvalid Menu");
            return 0;
            }
            else
                printf("\nEnter Quantity         : ");
            scanf("%d",&quty);

            switch(code)
            {
            case 11:
                price = 65.00;
                break;

            case 12:
                price = 75.00;
                break;

            case 13:
                price = 65.00;
                break;

            case 14:
                price = 600.00;
                break;

            case 15:
                price = 650.00;
                break;
            }
        }
        else if(menu == 3)
        {
            clrscr ();
            printf("\t   Drinks Menu");
            printf("\n______________________________________\n");
            printf("\n---------[Cola]--------\n");
            printf("\n[16] Small---------₱26.00");
            printf("\n[17] Medium--------₱35.00");
            printf("\n[18] Large---------₱45.00\n");
            printf("\n---------[Sprite]-------\n");
            printf("\n[19] Small---------₱26.00");
            printf("\n[20] Medium--------₱35.00");
            printf("\n[21] Large---------₱45.00\n");
            printf("\n---------[Nestea]-------\n");
            printf("\n[22] Small---------₱26.00");
            printf("\n[23] Medium--------₱35.00");
            printf("\n[24] Large---------₱45.00");
            printf("\n______________________________________\n");

            printf("\nEnter Your Choice Meal : ");
            scanf("%d",&code);
            if(code < 16)
            {
                printf("\nInvalid Menu");
            return 0;
            }
            else if(code > 24)
            {
                printf("\nInvalid Menu");
            return 0;
            }
            else
                printf("\nEnter Quantity         : ");
            scanf("%d",&quty);
            switch(code)
            {
            case 16:
                price = 26.00;
                break;

            case 17:
                price = 35.00;
                break;

            case 18:
                price = 45.00;
                break;

            case 19:
                price = 26.00;
                break;

            case 20:
                price = 26.00;
                break;

            case 21:
                price = 26.00;
                break;

            case 22:
                price = 26.00;
                break;

            case 23:
                price = 26.00;
                break;

            case 24:
                price = 26.00;
                break;

            }
        }

        else if(menu == 4)
        {
            clrscr ();
            printf("\t   Burger Menu");
            printf("\n______________________________________\n");
            printf("\n[25] Regular Burger------------₱35.00");
            printf("\n[26] Burger w/egg--------------₱45.00");
            printf("\n[27] Burger w/cheese-----------₱40.00");
            printf("\n[28] Burger w/Bacon------------₱50.00");
            printf("\n[29] Buger w/Bacon and cheese---99.00");
            printf("\n______________________________________\n");
            printf("\nEnter Your Choice Meal : ");
            scanf("%d",&code);
            if(code < 25)
            {
                printf("\nInvalid Menu");
            return 0;
            }
            else if(code > 29)
            {
                printf("\nInValid Menu");
            return 0;
            }
            else
                printf("\nEnter Quantity         : ");
            scanf("%d",&quty);
            switch(code)
            {
            case 25:
                price = 35.00;
                break;

            case 26:
                price = 45.00;
                break;

            case 27:
                price = 40.00;
                break;

            case 28:
                price = 50.00;
                break;

            case 29:
                price = 99.00;
                break;
            }
        }
        else if(menu == 5)
        {
            printf("\n______________________________________\n");
            printf("\n[30] Choco Cake-------₱75.00");
            printf("\n[31] Ice Cream--------₱85.00");
            printf("\n[32] Choco Pie-------₱130.00");
            printf("\n______________________________________\n");
            printf("\nEnter Your Choice Meal : ");
            scanf("%d",&code);
            if(code < 30)
            {
                printf("\nInvalid Menu");
            return 0;
            }
            else if(code > 32)
            {
                printf("\nInvalid Menu");
            return 0;
            }
            else
                printf("\nEnter Quantity         : ");
            scanf("%d",&quty);

            switch(code)
            {
            case 30:
                price = 75.00;
                break;

            case 31:
                price = 85.00;
                break;

            case 32:
                price = 130.00;
                break;
            }
        }

        amount = price * quty;
        printf("\nAmount is %.2f", amount);

        total = total + amount;
        printf("\nTotal is %.2f",total);

        printf("\naddAnother?(y/n)");
        scanf("%d",& addAnother);
        addAnother = getchar();
    } while(addAnother == 'y' || addAnother == 'Y');
    
    

    return 0;
}