#include <stdio.h>
#define N 10

int main() {
	//Declare an array of N integers
	int a[N];
	//Declare sum
	int sum = 0;
	//Declare a pointer and make it point to the array
	int *p = a; //p is read as a[0]
	
	//Ask the user to input N numbers for the array
	printf("Enter %d numbers: \n", N);
	for(int i = 0; i < N; i++) {
		scanf("%d", &a[i]); //Read each number into array a using indexing
    }
    
    //Use pointer subscript notation to sum of all of the elements in the array
    for (int i = 0; i < N; i++) {
    	sum += p[i]; //p[i] serves as a[i] because p[i] is exactly the same as *(p + i).
	}
    
      // Print the total sum of all elements
    printf("Sum of the array elements = %d\n", sum);

    return 0; // End of program
    
}

