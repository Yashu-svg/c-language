/*
**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********
*/

// Using only one nested for loop
#include <stdio.h>

int main() {
    int n = 5, rows = 2*n - 1;

    for (int i = 0; i < rows; i++) {
        int stars = (i < n) ? (n - i) : (i - n + 2);
        int spaces = (i < n) ? (2 * i) : (2 * (rows - i - 1));

        // print left stars
        for (int j = 0; j < stars; j++) printf("*");
        // print spaces
        for (int j = 0; j < spaces; j++) printf(" ");
        // print right stars
        for (int j = 0; j < stars; j++) printf("*");

        printf("\n");
    }

    return 0;
}
// Using two nested for loops
#include <stdio.h>

int main() {
    int n = 5, rows = 2*n - 1;

    for (int i = 0; i < rows; i++) {
        int stars = (i < n) ? (n - i) : (i - n + 2);
        int spaces = (i < n) ? (2 * i) : (2 * (rows - i - 1));

        // left stars
        for (int j = 0; j < stars; j++) printf("*");
        // middle spaces
        for (int j = 0; j < spaces; j++) printf(" ");
        // right stars
        for (int j = 0; j < stars; j++) printf("*");

        printf("\n");
    }

    return 0;
}
// Using while loop
#include <stdio.h>

int main() {
    int n = 5, rows = 2*n - 1;
    int i = 0;

    while (i < rows) {
        int stars = (i < n) ? (n - i) : (i - n + 2);
        int spaces = (i < n) ? (2 * i) : (2 * (rows - i - 1));

        int j = 0;
        while (j < stars) { printf("*"); j++; }

        j = 0;
        while (j < spaces) { printf(" "); j++; }

        j = 0;
        while (j < stars) { printf("*"); j++; }

        printf("\n");
        i++;
    }

    return 0;
}
// Using 4 for loops
#include <stdio.h>

int main() {
    int n = 5; // controls half of the height
    
    // Upper part
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = n; j > i; j--) {
            printf("*");
        }
        // Spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        // Right stars
        for (int j = n; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part
    for (int i = n - 2; i >= 0; i--) {
        // Left stars
        for (int j = n; j > i; j--) {
            printf("*");
        }
        // Spaces
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        // Right stars
        for (int j = n; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// Pure recursion
#include <stdio.h>

// recursive print helper
void printChar(int count, char ch) {
    if (count == 0) return;
    printf("%c", ch);
    printChar(count - 1, ch);
}

// recursive row printer
void printRow(int row, int n, int totalRows) {
    if (row == totalRows) return;

    int stars = (row < n) ? (n - row) : (row - n + 2);
    int spaces = (row < n) ? (2*row) : (2*(totalRows - row - 1));

    printChar(stars, '*');
    printChar(spaces, ' ');
    printChar(stars, '*');
    printf("\n");

    printRow(row + 1, n, totalRows);
}

int main() {
    int n;
    printf("Enter number of stars (half width): ");
    scanf("%d", &n);

    int totalRows = 2*n - 1;
    printRow(0, n, totalRows);

    return 0;
}
/*
**********
 ********
  ******
   ****
    **
    **
   ****
  ******
 ********
**********
*/
#include <stdio.h>

int main() {
    int rows = 5;   // half of the pattern height

    // upper part
    for (int i = 0; i < rows; i++) {
        // leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // stars
        for (int j = 0; j < 2*(rows - i); j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower part
    for (int i = 0; i < rows; i++) {
        // leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // stars
        for (int j = 0; j < 2*(i+1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
    **    
   ****   
  ******  
 ******** 
  ******  
   ****   
    **    
          

*/
#include <stdio.h>

int main() {
    int n = 5; // controls half of the height
    
    // Upper part
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // Spaces
        for (int j = 0; j < 2 * i; j++) {
            printf("*");
        }
        // Right stars
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        printf("\n");
    }

    // Lower part
    for (int i = n - 2; i >= 0; i--) {
        // Left stars
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // Spaces
        for (int j = 0; j < 2 * i; j++) {
            printf("*");
        }
        // Right stars
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

