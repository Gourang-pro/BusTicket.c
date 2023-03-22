#include <stdio.h>

int main()
 {
    int age, price;
    printf("Enter passenger's age: ");
    scanf("%d", &age);
    
    if(age < 5) 
    {
        price = 0;
    } 
        else if(age >= 5 && age <= 12)
    {
        price = 50;
    } 
        else if(age > 12 && age <= 60) 
    {
        price = 100;
    } 
        else 
    {
        price = 70;
    }
    
    printf("Passenger's age: %d\n", age);
    printf("Ticket price: %d\n", price);
    
    return 0;
}
