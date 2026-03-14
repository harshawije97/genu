// preprocessor directives
#include <stdio.h>
#include <string.h>

int main()
{
    // Variables
    char inputItemOne[10];
    char inputItemTwo[10];

    // Prices
    float prices[4] = {0.0, 0.0, 0.0, 0.0};
    int lengthOfPricesArray = 4;
    int nextValue = 0;

    char donutC[] = "N043";
    char fishPat[] = "N056";
    char chickenPas[] = "C093";
    char applePie[] = "E023";

    // Prices
    float donutCPrice = 200.35;
    float fishPatPrice = 170.00;
    float chickenPasPrice = 250.50;
    float applePiePrice = 200.00;

    printf("=== Welcome to Charles Bakery 🥐 ===\n---- Select from the Menu -----\n");
    printf("> Donut Chocolate Flavour N043 || Price: %.2f\n", donutCPrice);
    printf("> Fish Paties N056 || Price: %.2f\n", fishPatPrice);
    printf("> Chicken Pastry C093 || Price: %.2f\n", chickenPasPrice);
    printf("> Apple pie E023 || Price: %.2f\n", applePiePrice);

    printf("Enter item number to select:(You can only buy 2 items at a time)");
    scanf("%10s", inputItemOne);
    printf("Enter item number to select:");
    scanf("%10s", inputItemTwo);

    if (
        strcmp(inputItemOne, donutC) == 0 || strcasecmp(inputItemTwo, donutC) == 0)
    {
        prices[nextValue] = donutCPrice;
        nextValue++;
        printf("Donut Chocolate ADDED...\n");
    }
    if (
        strcmp(inputItemOne, fishPat) == 0 || strcasecmp(inputItemTwo, fishPat) == 0)
    {
        prices[nextValue] = fishPatPrice;
        nextValue++;
        printf("Fish Paties added...\n");
    }
    if (
        strcmp(inputItemOne, chickenPas) == 0 || strcasecmp(inputItemTwo, chickenPas) == 0)
    {
        prices[nextValue] = chickenPasPrice;
        nextValue++;
        printf("Chicken Pastry added...\n");
    }
    if (
        strcmp(inputItemOne, applePie) == 0 || strcasecmp(inputItemTwo, applePie) == 0)
    {
        prices[nextValue] = applePiePrice;
        nextValue++;
        printf("Apple Pie added...\n");
    }

    printf("==== All items are inserted ====\n\n");
    printf("Calculating....\n");

    float accumulator = 0.0;
    for (int i = 0; i < lengthOfPricesArray; i++)
    {
        accumulator += prices[i];
    }

    printf("Your total is: Rs.%.2f\n $$$ Please pay by the casher counter", accumulator);

    return 0;
}
