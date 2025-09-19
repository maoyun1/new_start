#include <stdio.h>

#define HOTEL_1 410
#define HOTEL_2 420
#define HOTEL_3 430
#define QUIT 4
#define STARBAR "********************"

void showprice(int choice, int nights);

int main()
{
    printf("%s\n", STARBAR);
    printf("(1)hotel-1       (2)hotel-2\n");
    printf("(3)hotel-3       (4)quit\n");
    printf("%s\n", STARBAR);
    printf("Please enter your choice: ");
    
    int choice;
    while(scanf("%d", &choice) != 1 || choice < 1 || choice > 4)
    {   
        printf("Please enter an integer from 1 to 4: ");
        while(getchar() != '\n');
    }
    
    if(choice == QUIT)
    {
        printf("Program ended.\n");
        return 0;
    }
    
    printf("How many nights do you want to stay: ");
    int nights;
    while(scanf("%d", &nights) != 1 || nights <= 0)
    {
        printf("Please enter a positive integer: ");
        while(getchar() != '\n');
    }
    
    showprice(choice, nights);
    
    // Wait for user to press enter before closing
    printf("Press Enter to exit...");
    getchar();
    getchar();
    
    return 0;
}

void showprice(int choice, int nights)
{
    double initial;
    switch(choice)
    {
        case 1:
            initial = HOTEL_1;
            break;
        case 2:
            initial = HOTEL_2;
            break;
        case 3:
            initial = HOTEL_3;
            break;
        default:
            return;
    }
    
    double total = 0.0;
    double factor = 1.0;
    double discount = 0.95;
    
    printf("\nPrice details:\n");
    for(int i = 0; i < nights; i++)
    {
        double nightly_price = initial * factor;
        total += nightly_price;
        printf("Night %d: %.2f (discount factor: %.4f)\n", i+1, nightly_price, factor);
        factor *= discount;
    }
    
    printf("\nTotal cost: %.2f\n", total);
}
