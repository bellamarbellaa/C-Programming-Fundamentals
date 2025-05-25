#include <stdio.h>

int main() {
    int a[10];  //Declare an array of size 10
    int i = 0;

    //Loop to assign values to the array
    while (i < 10) {
        a[i] = i + 1;  //Assign increasing values (1, 2, 3, ...)
        i++;  //Move to the next index
    }

    //Reset i and print array values
    i = 0;
    while (i < 10) {
        printf("a[%d] = %d\n", i, a[i]);
        i++;
    }

    return 0;
}



