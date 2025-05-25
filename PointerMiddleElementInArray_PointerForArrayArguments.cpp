#include <stdio.h>

// Function that takes a pointer to an array (int *a or int a[] are equivalent here)
// and returns a pointer to the middle element
int *find_middle(int a[], int n) {
    return &a[n / 2]; // Returns the address of the middle element
}

int main() {
    int n;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);

    int a[n]; // This is array 'a' is treated like a pointer to its first element when used is function's argument

    // Fill the array using pointer notation
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // a[i] is the same as *(a + i), showing how 'a' acts like a pointer
    }

    // Call the function that returns a pointer to the middle element
    int *middle = find_middle(a, n); // 'a' is passed as a pointer to the first element

    // Dereference the pointer to get the middle value
    printf("The middle element is %d\n", *middle);

    return 0;
}
