#include <stdio.h>
#include <stdlib.h>

struct item{ // creating the structure(template)
    char *itemName; // pointer name since string - in main, must allocate memory
    float price;
    int quantity;
    float amount; // price * quantity
};

struct item readItem(struct item *itemRead){
    printf("Product Name: ");
    gets(itemRead->itemName);
    //scanf("%s", ); // no need for "&" since string
    printf("Price: ");
    scanf("%f", &itemRead->price); // use "&" for numbers
    printf("Quantity: ");
    scanf("%d", &itemRead->quantity);

    itemRead->amount = (itemRead->price) * (itemRead->quantity); // price * quantity
}

struct item printItem(struct item * itemPrint){
    printf("\nItem Details: \n--------------\n");
    printf("Product Name: %s\n", itemPrint->itemName);
    printf("Price: %.2f\n", itemPrint->price);
    printf("Quantity: %d\n", itemPrint->quantity);
    printf("\nTotal Amount: %.2f\n", itemPrint->amount);
}

int main(){
    struct item one; // declaring a struct item date type variable called "one"
    struct item *onePtr = &one; // declaring a pointer

    // allocating memory for pointer *itemName as member of the struct since it's a string
    one.itemName = (char*)malloc(20 * sizeof(char));

    readItem(onePtr); // input
    printItem(onePtr); // output

    free(one.itemName); // free the memory of pointer one.item name
}
