#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to initialize an array with random values
void initializeArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Random values between 0 and 99
    }
}

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    int arraySize = 10;
    int myArray[arraySize];

    initializeArray(myArray, arraySize);

    printf("Array elements:\n");
    printArray(myArray, arraySize);

    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += myArray[i];
    }
    printf("Sum of all elements: %d\n", sum);

    int maxVal = myArray[0];
    int minVal = myArray[0];
    for (int i = 1; i < arraySize; i++) {
        if (myArray[i] > maxVal) {
            maxVal = myArray[i];
        }
        if (myArray[i] < minVal) {
            minVal = myArray[i];
        }
    }
    printf("Maximum value: %d\n", maxVal);
    printf("Minimum value: %d\n", minVal);

    double average = (double)sum / arraySize;
    printf("Average value: %.2f\n", average);

    return 0;
}
