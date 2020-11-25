//find electric bill

#include <stdio.h>

int main()
{
    //declare variable
    int units;
    float bill,tax,gross_amount;
    //user input
    printf("enter the number of units");
    scanf("%d",&units);
    
    if(units <= 200)
    bill = units * 2;
    else if(units <= 400)
    bill = units * 3;
    else if(units <= 600)
    bill = units * 4;
    else
    bill = units * 5;
    
    tax = bill * 10/100;
    gross_amount = tax + bill;
    printf("Payable amount is %f for this bill", gross_amount);
    
    
}
