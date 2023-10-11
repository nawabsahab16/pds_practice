#include <stdio.h>

struct StudData {
    char *stu_name;
    int stu_id;
    int stu_age; 
};

int main() {
    struct StudData student;
    
    student.stu_name="Sameer Sharma";
    student.stu_id = 43;
    student.stu_age= 19;

    printf("Student Name is : %s", student.stu_name);
    printf("Student ID is: %d" , student.stu_id);
    printf("Student age is : %d" , student.stu_age);
    
    return 0;
    
}