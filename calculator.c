#include<stdio.h>
 Addition(){
        // Addition function 
        printf("\nHow many numbers are you adding: -- \t");
        scanf("%d", &n);// read the input from user 
        printf("\nEnter the sum values: --\n");

 for (i = 0; i < n; i++) { 
            scanf("%d", &a[i]);
            sum += a[i];
        }

        printf("Total of Sum = %d\n", sum);
    } 
    
subtraction(){
    // Subtraction
        printf("\nHow many numbers are you subtracting: -- \t");
        scanf("%d", &n);
        printf("\nEnter the subtraction values: --\n");

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n; i++) {
            if (a[i] >= 0)
                sum += a[i];
            else
                sub -= a[i];
        }

        printf("Total of Subtraction = %d\n", sub);
}

multiplication(){
    // Multiplication
        printf("\nHow many values are multiplied: --\t");
        scanf("%d", &n);
        printf("\nEnter multiplication values: --\n");

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            multi *= a[i];
        }

        printf("Total of Multiplication = %d\n", multi);
}

Division(){
    // Division
        printf("\nEnter division values: --\n");
        scanf("%d%d", &sum, &sub);
        divi = (float)sum / sub;
        printf("Total of Division = %.2f\n", divi);

}
void main() {
    // type declaration
    int S, n, i, sum=0, sub=0, multi=1, a[100];
    float divi;

    printf("Select any one:-\n1.Sum\n2.Sub\n3.Multi\n4.Div\n");
    printf("Choose any one 1, 2, 3, 4: -- ");
    scanf("%d", &S);

    if (S == 1) { 
        Addition();
    }
       
    else if (S == 2) {
         Subtraction();
       }
    else if (S == 3) { 
        multiplication();

     } 
    else { 
        Division();
       
    }
}



// Function to add two 2x2 matrices
void add(int a[2][2], int b[2][2]) {
    printf("\n\t\033[1;34m Sum of the matrices:-- \n\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("\033[2;32m %d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[2][2], b[2][2], i, j;

    // Input for the first matrix
    printf("\033[1;36mEnter Matrix 1:--\n\033[1;33m");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for the second matrix
    printf("\033[1;36mEnter Matrix 2:--\n\033[1;33m");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    // Call the add function to calculate and display the result
    add(a, b);

    return 0;
}
