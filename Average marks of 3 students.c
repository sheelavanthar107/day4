#include <stdio.h>
struct Student {
    char name[50];
    float marks;
};
int main() {
    struct Student students[3];
    float totalMarks = 0.0, average;
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
       printf("Enter marks of %s: ", students[i].name);
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }
    average = totalMarks / 3.0;
    printf("\nAverage marks of 3 students: %.2f\n", average);

    return 0;
}


