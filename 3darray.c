#include <stdio.h>

int main() {
    int students, courses;
    int i, j;

    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("Enter number of courses per student: ");
    scanf("%d", &courses);

    // 3D array: students x courses x 2 (0=grade, 1=percentage)
    float data[students][courses][2];

    // Input data
    for (i = 0; i < students; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        for (j = 0; j < courses; j++) {
            printf("Course %d:\n", j + 1);
            printf("  Enter Grade (as integer e.g., A=10, B=9...): ");
            scanf("%f", &data[i][j][0]);

            printf("  Enter Percentage: ");
            scanf("%f", &data[i][j][1]);
        }
    }

    // Display data
    printf("\n===== Student Records =====\n");
    for (i = 0; i < students; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (j = 0; j < courses; j++) {
            printf("  Course %d -> Grade: %.0f | Percentage: %.2f%%\n",
                   j + 1, data[i][j][0], data[i][j][1]);
        }
    }

    return 0;
}
