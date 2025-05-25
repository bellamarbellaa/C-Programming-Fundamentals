#include <stdio.h>

int main() {
	char color[20];
	char item[20];
	char celebrityF[20];
	char celebrityL[20];
	
	printf("Enter a color: \n");
	scanf("%s", &color);
	printf("Enter a plural item: \n");
	scanf("%s", &item);
	printf("Enter a celebrity full name: \n");
	scanf("%s%s", &celebrityF, &celebrityL);
	
	printf("Roses are %s \n", color);
	printf("%s are blue \n", item);
	printf("I love %s %s \n", celebrityF, celebrityL);
	
	return 0;
}
