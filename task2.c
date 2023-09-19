#include <stdio.h>

// Function to perform selection sort on an integer array
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to perform bubble sort on an integer array
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform insertion sort on an integer array
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int choice, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Choose a sorting algorithm:\n");
    printf("1. Selection Sort\n");
    printf("2. Bubble Sort\n");
    printf("3. Insertion Sort\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectionSort(arr, size);
            printf("Sorted array using Selection Sort:\n");
            break;
        case 2:
            bubbleSort(arr, size);
            printf("Sorted array using Bubble Sort:\n");
            break;
        case 3:
            insertionSort(arr, size);
            printf("Sorted array using Insertion Sort:\n");
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
