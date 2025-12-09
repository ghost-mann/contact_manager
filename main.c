#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

// array for 10 students
struct Student students[10];
int count = 0;

int main() {
    int choice;
    
    while (1) {
        printf("\n=== Student Grade Manager ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Show Average Marks\n");
        printf("4. Show Highest Marks\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

        }
        else if (choice == 2) {

        }
        else if (choice == 3) {

        }
        else if (choice == 4) {

        }
        else if (choice == 5) {
            printf("Goodbye!\n");
            break;

        }
        else {
            printf("Invalid choice!\n");
            
        }

    }
    return 0;

}