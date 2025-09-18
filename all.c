#include <stdio.h>

int main() {
	char name[50];
	char section[30];
	float grd1,grd2,grd3,grd4,average;

	printf("Enter Complete Name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter Section: ");
	fgets(section, sizeof(section), stdin);

    printf("\nEnter 1st Quarter Grade: ");
    scanf("%f", &grd1);
    
    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &grd2);
    
    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &grd3);
    
    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &grd4);
    
    average = (grd1 + grd2 + grd3 + grd4)/ 4.00;
    
    
    printf("\nStudent: %s", name);
    printf("Section: %s", section);
    printf("General Average: %.2f\n", average);
    
    if (average >= 90 && average <= 100){
        printf("Remarks: Outstanding", average);}
    else if (average >= 85 && average <= 89){
        printf("\nRemarks: Very Satisfactory",average);}
    else if (average >= 80 && average <= 84){
        printf("\nRemarks: Satisfactory",average);}
    else if (average >= 75 && average <= 79){
        printf("\nRemarks: Fair",average);}
    else{
        printf("Remarks: Failed",average);}
    return 0;
}

