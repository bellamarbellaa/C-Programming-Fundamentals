#include <stdio.h>
/*Function to check whether a year is a leap year,
where a leap year occurs every 4 years*/
 
int is_leap_year(int year) {
	if (year % 4 == 0) {
		return 1;// Leap year
	} else {
		return 0; //Not a leap year
	}
}

//Function to calculate the day number in a year
int day_of_year(int year, int month, int day) {
	//List the number of days in each month for a non-leap year in an array
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 
						31, 31, 30, 31, 30, 31};
	int i, total = 0;
	
	//Check whether the year given is a leap year and modify the day count in February
	if (is_leap_year(year)) {
		days_in_month[1] = 29;
	}
	
	//Add the days from the previous months before the given month
	for (i = 0; i < month - 1; i++) {
		total += days_in_month[i];
	}
	
	//Add on the day of the current month
	return total += day;
}

int main() {
	int month, day, year;

    //Ask user to enter a date
    printf("Enter month (1 - 12): \n");
    scanf("%d", &month);

    printf("Enter day (1 - 31): \n");
    scanf("%d", &day);

    printf("Enter year: \n");
    scanf("%d", &year);

    // Calculate and display the day of the year
    printf("%d", day_of_year(year, month, day));
    
	//int doy = day_of_year(month, day, year);
	//printf("Day of the year: %d\n", doy);

    return 0;
}

