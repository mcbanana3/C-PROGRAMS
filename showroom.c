#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_CARS 100

struct Car {
    char brand[50];
    char model[50];
    int modelYear;
    char engineType[20];
    int seatingCapacity;
    float price;
};

struct Car showroom[MAX_CARS];
int carCount = 0;

void addNewCar() {
    if (carCount < MAX_CARS) {
        struct Car newCar;
        printf("Enter Brand: ");
        scanf("%s", newCar.brand);
        printf("Enter Model: ");
        scanf("%s", newCar.model);
        printf("Enter Model Year: ");
        scanf("%d", &newCar.modelYear);
        printf("Enter Engine Type: ");
        scanf("%s", newCar.engineType);
        printf("Enter Seating Capacity: ");
        scanf("%d", &newCar.seatingCapacity);
        printf("Enter Price: ");
        scanf("%f", &newCar.price);

        showroom[carCount++] = newCar;
        printf("Car added to the showroom successfully.\n");
    } 
    
    else{
        printf("Showroom is full. Cannot add more cars.\n");
    }
}

void searchAndDisplayDetails() {
    char searchModel[50];
    printf("Enter the model to search: ");
    scanf("%s", searchModel);

    for (int i = 0; i < carCount; ++i) {
        if (strcmp(showroom[i].model, searchModel) == 0) {
            printf("Details of %s:\n", searchModel);
            printf("Brand: %s\n", showroom[i].brand);
            printf("Model Year: %d\n", showroom[i].modelYear);
            printf("Engine Type: %s\n", showroom[i].engineType);
            printf("Seating Capacity: %d\n", showroom[i].seatingCapacity);
            printf("Price: %.2f\n", showroom[i].price);
            return;
        }
    }

    printf("Car with model %s not found in the showroom.\n", searchModel);
}

void displayPetrolCars() {
    printf("List of Petrol Cars:\n");
    for (int i = 0; i < carCount; ++i) {
        if (strcmp(showroom[i].engineType, "Petrol") == 0) {
            printf("%s %s\n", showroom[i].brand, showroom[i].model);
        }
    }
}

void displayDieselCars() {
    printf("List of Diesel Cars:\n");
    for (int i = 0; i < carCount; ++i) {
        if (strcmp(showroom[i].engineType, "Diesel") == 0) {
            printf("%s %s\n", showroom[i].brand, showroom[i].model);
        }
    }
}

int comparePrices(const void *a, const void *b) {
    return ((struct Car *)a)->price - ((struct Car *)b)->price;
}

int compareModels(const void *a, const void *b) {
    return strcmp(((struct Car *)a)->model, ((struct Car *)b)->model);
}

void sortCarsBasedOnPrice() {
    qsort(showroom, carCount, sizeof(struct Car), comparePrices);
    printf("Cars sorted based on price (Lowest to Highest).\n");
}

void sortCarsBasedOnModel() {
    qsort(showroom, carCount, sizeof(struct Car), compareModels);
    printf("Cars sorted based on model (Chronological Order).\n");
}

int main() {
    
    int choice;

    while(1){
        printf("\nPre-Owned Cars Showroom Management\n");
        printf("1. Add New Car to the Showroom\n");
        printf("2. Search and Display Details of a Given Model\n");
        printf("3. Display Only Petrol Cars\n");
        printf("4. Display Only Diesel Cars\n");
        printf("5. Sort Cars Based on Price (Lowest to Highest)\n");
        printf("6. Sort Cars Based on Model (Chronological Order)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNewCar();
                break;
            case 2:
                searchAndDisplayDetails();
                break;
            case 3:
                displayPetrolCars();
                break;
            case 4:
                displayDieselCars();
                break;
            case 5:
                sortCarsBasedOnPrice();
                break;
            case 6:
                sortCarsBasedOnModel();
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                exit(1);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}