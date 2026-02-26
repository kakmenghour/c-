#include <stdio.h>
int main()
{

    float A;
    A = 8.00;

    int A1;
    A1 = 2;
    
    float B;
    B = 3.50;

    int B1;
    B1 = 3;

    float Tax;
    Tax = 0.10;

    float subtotal;
    subtotal = (A * A1) + (B * B1);

    float Tax1;
    Tax1 = 2.65;

    float Total;
    Total = subtotal + Tax1;

    printf(" ====================================================\n");
    printf("E-COMMERCE CART REPORT \n");
    printf("====================================================\n");
    printf("Enter the price of the first product in ($)=");
    scanf("%f", &A);
    printf("Enter the quantity of the first product = ");
    scanf("%d", &A1);
    printf("Enter the price of the second product in ($)= ");
    scanf("%f", &B);
    printf("Enter the quantity of the second product =");
    scanf("%d", &B1);
    printf("Enter the sales tax rate in (%%)=  ");
    scanf("%f", &Tax);

    printf("====================================================\n");

    printf("subtotal =$%.2f\n", subtotal);
    printf("Tax ($) = %.2f\n ", Tax1);
    printf("Total = $%.2f\n", Total);
    printf("====================================================\n");

    return 0;
}