#include <stdio.h>
int main() {
	
    int amount, notes_20000, notes_10000, notes_5000, notes_1000;
    
    //Prompt user for input
	printf("Enter an amount in Rupiah: \n");
    scanf("%d", &amount);
    
    //Calculate the amount of Rp. 20.0000 notes
    notes_20000 = amount / 20000;
    printf("The amount of Rp 20.000 notes is: %d \n", notes_20000);
    
    //Calculate the remaining amount after Rp.20.000 notes are distributed
    amount = amount % 20000;
    
    //Calculate the amount of Rp. 10.000 notes
    notes_10000 = amount / 10000;
    printf("The amount of Rp. 10.0000 notes is; %d \n", notes_10000);
    
    //Calculate the remaining amount after Rp.10.000 are distributed
    amount = amount % 10000;
    
    //Calculate the amount of Rp. 5.000 notes
    notes_5000 = amount / 5000;
    printf("The amount of Rp. 5000 notes is: %d \n", notes_5000);
    
    //Calculte the remaining amount after Rp. 5000 are distributed
    amount = amount % 5000;
    
    //Calculate the amount of Rp. 1.000 notes
    notes_1000 = amount / 1000;
    printf("The amount of Rp. 1000 notes is: %d \n", notes_1000);
    
    return 0;
}
    

