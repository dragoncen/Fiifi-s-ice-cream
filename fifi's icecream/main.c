#include <stdio.h>
#include <stdlib.h>

char flavours[4][100] = {"Vanilla", "Strawberry", "Chocolate", "Mango"};
 float smallflavourcost[20] = {5.0,5.0,6.0,7.0};
 float largeflavourcost[30] = {8.0,8.0,9.0,10.0};
 char topping[4][20] = {"Sprinkles", "Whipped creams", "Chopped nuts", "Coconut shavings"};
float topcost[12] = {2.0,3.0,4.0,5.0};
int toptime[5] = {2,3,4,5};




int main()
{
    int order = 0,time = 0, choice;
    float cost = 0;
    printf("WELCOME TO FIIFI\'S ICE CREAM SHOP\nWhat would you like to order\n");
    do{
        int flavour = 0,toppings = 0, size = 0;
        printf("\n1-Vanilla\n2-Strawberry\n3-Chocolate\n4-Mango\n5-Enquiries\n");
        scanf("%d", &flavour);
        printf("1-Small\n2-Large\n");
        scanf("%d", &size);
        if(flavour==1||flavour==2||flavour==3||flavour==4){
            if(size==1){
                printf("flavour:%s\nSize:Small", flavours[flavour-1]);
                cost+=smallflavourcost[flavour-1];
                time+=2;
                printf("\nYour cost is %f and time remaining is %d", cost,time);
            }
            else if(size==2){
                printf("Flavour:%s\nSize:Large",flavours[flavour-1]);
                cost+=largeflavourcost[flavour-1];
                time+=3;
                 printf("\nYour cost is %f and time remaining is %d", cost,time);
            }
            else
            printf("\nInvalid Entry");
            }
        else if(flavour==5)
            printf("\nA customer service agent will be with you soon");
        else
            printf("\nInvalid flavour entry");

            do{
                printf("\n******************\nTOPPINGS\n*****************");
                printf("\n1-sprinkles\n2-Whipped cream\n3-Chopped Nuts\n4-Coconut shavings\n");
                scanf("%d",&toppings);
            if(0<toppings<5){
                printf("\nThe flavour chosen is %s", flavours[flavour-1]);
                cost+=topcost[toppings-1];
                time+=toptime[toppings-1];
                printf("\nThe cost of the toppings is %f\nTime remaining is %d",cost,time);
                ++toppings;
            }
           else if(toppings==5)
                toppings=0;
            else
                printf("\nInvalid entry");

            }while(toppings<4);
            printf("\nWould you like anything else?\n1-Yes\n2-No");
            scanf("%d", &choice);
            if(choice==1)
                order++;
            else{
                order=0;
                printf("\nTotal cost is:%f\nTime remaining is:%d", cost, time);
                }

            printf("\nHere is your order\nThanks for coming to Fiifi\'s Ice Cream");
            }while(order>0);



    return 0;
}
