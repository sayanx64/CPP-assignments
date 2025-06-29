// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// struct book {
//     char title[100];
//     char author[100];
//     char pub[100];
//     float price;
// };

// int main() {
//     int n;
//     char search[100];

//     printf("Enter the number of books to add: ");
//     scanf("%d", &n);

//     struct book *b = (struct book *)malloc(n * sizeof(struct book)); // dynamic allocation

//     for (int i = 0; i < n; i++) {
//         printf("Enter Book %d Details:\n", i + 1);
//         printf("Title: "); scanf(" %[^\n]", b[i].title);
//         printf("Author: "); scanf(" %[^\n]", b[i].author);
//         printf("Publication: "); scanf(" %[^\n]", b[i].pub);
//         printf("Price: "); scanf("%f", &b[i].price);
//     }

//     printf("\nAll Book Details:\n");
//     for (int i = 0; i < n; i++) {
//         printf("\nBook %d:\n", i + 1);
//         printf("Title: %s\n", b[i].title);
//         printf("Author: %s\n", b[i].author);
//         printf("Publication: %s\n", b[i].pub);
//         printf("Price: %.2f\n", b[i].price);
//     }

//     printf("\nEnter the author name to search: ");
//     scanf(" %[^\n]", search);

//     printf("\nBooks by '%s':\n", search);
//     int found = 0;
//     for (int i = 0; i < n; i++) {
//         if (strcmp(b[i].author, search) == 0) {
//             printf("\nTitle: %s\n", b[i].title);
//             printf("Publication: %s\n", b[i].pub);
//             printf("Price: %.2f\n", b[i].price);
//             found = 1;
//         }
//     }

//     if (!found) {
//         printf("No books found by the author '%s'.\n", search);
//     }

//     free(b);
//     return 0;
// }



#include <stdio.h>
#include <string.h>


struct Student {
    int roll_no;
    char name[50];
    char gender;
    int marks[3]; 
    int total_marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter the student %d data:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].gender);

        students[i].total_marks = 0;
        for (int j = 0; j < 3; j++) {
            printf("Mark in subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total_marks += students[i].marks[j];
        }
    }

  
    printf("\nRoll Number   Name       Gender   Sub 1   Sub 2   Sub 3   Total\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d       %s         %c          %d          %d          %d        %d\n",
               students[i].roll_no, students[i].name, students[i].gender,
               students[i].marks[0], students[i].marks[1], students[i].marks[2],
               students[i].total_marks);
    }

    //failed
    for (int j = 0; j < 3; j++) {
        printf("\nStudents failed in Subject %d: ", j + 1);
        int failed_flag = 0;
        for (int i = 0; i < n; i++) {
            if (students[i].marks[j] < 40) {
                printf("%s ", students[i].name);
                failed_flag = 1;
            }
        }
        if (!failed_flag) {
            printf("None");
        }
    }

    return 0;
}
