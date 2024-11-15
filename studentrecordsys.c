#include <stdio.h>
#include <string.h>

struct student {
    int std_id;
    char fullname[100];
    char dob[15];
    char gender[10];
    char course[100];
    int year;
    int grades;
    float cgpa;
    char email[100];
    int phonenum;
    char address[100];
};

void addrecord() {
    struct student student;
    
    printf("Enter student ID: ");
    scanf("%d", &student.std_id);
    getchar();

    printf("Enter full name of student: ");
    fgets(student.fullname, sizeof(student.fullname), stdin);
    student.fullname[strcspn(student.fullname, "\n")] = 0;

    printf("Enter the date of birth of student (DD/MM/YYYY): ");
    fgets(student.dob, sizeof(student.dob), stdin);
    student.dob[strcspn(student.dob, "\n")] = 0;

    printf("Enter Male or Female: ");
    fgets(student.gender, sizeof(student.gender), stdin);
    student.gender[strcspn(student.gender, "\n")] = 0;

    if (strcmp(student.gender, "Male") == 0 || strcmp(student.gender, "Female") == 0 || 
        strcmp(student.gender, "male") == 0 || strcmp(student.gender, "female") == 0) {
        
        printf("Course of the student: ");
        fgets(student.course, sizeof(student.course), stdin);
        student.course[strcspn(student.course, "\n")] = 0;
        
        printf("Year of study: ");
        scanf("%d", &student.year);
        
        printf("Grades: ");
        scanf("%d", &student.grades);
        getchar();
        
        printf("CGPA: ");
        scanf("%f", &student.cgpa);
        getchar();
        
        printf("Email: ");
        fgets(student.email, sizeof(student.email), stdin);
        student.email[strcspn(student.email, "\n")] = 0;
        
        getchar();

        printf("Phone number: ");
        scanf("%d", &student.phonenum);
        getchar();
        
        printf("Address: ");
        fgets(student.address, sizeof(student.address), stdin);
        student.address[strcspn(student.address, "\n")] = 0;

        getchar();

        printf("\nStudent record added successfully:\n");
        printf("ID: %d\nName: %s\nDOB: %s\nGender: %s\nCourse: %s\nYear: %d\nGrades: %d\nCGPA: %.2f\nEmail: %s\nPhone: %d\nAddress: %s\n",
               student.std_id, student.fullname, student.dob, student.gender, 
               student.course, student.year, student.grades, student.cgpa, 
               student.email, student.phonenum, student.address);
    } else {
        printf("Invalid gender entered. Please enter Male or Female.\n");
    }
}
int editrecord()
{
    
}

int main() {
    addrecord();
    return 0;
}
