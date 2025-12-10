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
            if (count >= 10) {
                printf("List is full! Cannot add more students.\n");
            }
            else {
                printf("Enter student name: ");
                scanf("%s", students[count].name);

                printf("Enter marks (0-100): ");
                scanf("%d", &students[count].marks);

                count++;

                printf("Student added successfully!\n");
            }

        }
        else if (choice == 2) {
            if (count == 0) {
                printf("No students to display!\n");
            }
            else {
                printf("\n--- List of Students ---\n");
                for (int i = 0; i < count; i++) {
                    printf("%d. Name: %s | Marks: %d\n", i + 1, students[i].name, students[i].marks);
                }
        
            }
        }
        else if (choice == 3) {
            if (count == 0) {
                printf("Students required to calculate average!");
            }
            else {
                int total = 0;
                for (int i = 0; i < count; i++) {
                    total += students[i].marks;
                }
                double average = (double)total / count;

                printf("\n--- Students average ---\n");
                printf("Total number of students: %d\n", count);
                printf("Total marks: %d\n", total);
                printf("Average marks: %.2f\n", average);

            }

        }
        else if (choice == 4) {
            if (count == 0) {
                printf("No students to compare");
            } else {
                int highest = students[0].marks;
                char highestName[50];

                for (int j = 0; students[0].name[j] !='\0'; j++) {
                    highestName[j] = students[0].name[j];
                    highestName[j + 1] = '\0';
                }

                for (int i = 1; i < count; i++) {
                    if (students[i].marks > highest) {
                        highest = students[i].marks;

                        for (int j = 0; students[i].name[j] != '\0'; j++) {
                            highestName[j] = students[i].name[j];
                            highestName[j + 1] = '\0';
                        }
                    }
                }

                printf("\n--- Highest Marks --- \n");
                printf("Highest marks: %d\n", highest);

            }

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