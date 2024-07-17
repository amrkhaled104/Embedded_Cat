/*Write a C code that asks the user to enter his grade and the program will print his rating.
(Excellent, very good,...,etc). %-based system */
#include<stdio.h>
int main() {
    float grade;
    printf("Enter your grade percentage: ");
    scanf("%f", &grade);
    if (grade >= 90) {
        printf("Rating: Excellent\n");
    } else if (grade >= 80) {
        printf("Rating: Very Good\n");
    } else if (grade >= 70) {
        printf("Rating: Good\n");
    } else if (grade >= 60) {
        printf("Rating: Satisfactory\n");
    } else {
        printf("Rating: Needs Improvement\n");
    }

    return 0;
}