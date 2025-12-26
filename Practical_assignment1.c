#include<stdio.h>
int main () {
    int p,q;
    float d;
    printf("enter your price:");
    scanf("%d",&p);
   
    printf("enter your quantity:");
    scanf("%d",&q);
    printf("Enter Discount percentage:");
    scanf("%f",&d);

    float discount=p*(d/100);
    float total_price=(p-discount)*q;
    printf("*** DIWALI FIREWORKS ***");
    printf("\nItem Price: \t\t %d",p);
    printf("\nQuantity:\t%d",q);
    printf("\nDiscount:\t%0.2f",d);
    printf("\nTotal:\t %0.2f",total_price);
    return 0;
}