#include <stdio.h>

//Function to find the middle element that returns a pointer to it
int *find_middle(int a[]), int n) {
	return &a[n/2];
}

int main() {
	int n;
	
	printf("Enter the number of elements in the array: \n");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter the elements of the array with the size of %d \n", n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	int *middle = find_middle(a,n);
	
	printf("The middle element is %d \n", *middle);
	
	
}
