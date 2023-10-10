#include <stdio.h>

struct stu_address {
   int street;
   char *state;
   char *city;
   char *country;
};

struct stu_Data {
    char *stu_name;
    int stu_id;
    int stu_age; 
    struct stu_address stuAddress;
};

int main(){
    struct stu_Data mydata;

    mydata.stu_id = 10;
    mydata.stu_age = 18;
    mydata.stu_name = "Sameer";

    mydata.stuAddress.state= "Uttar Pradesh";
    mydata.stuAddress.city= "Gorakhpur";
    mydata.stuAddress.country = " India";

    printf("\nStudent id: %d", mydata.stu_id);
    printf("Student name is  : %s" , mydata.stu_name);
    printf("Student age is ; %d" , mydata.stu_age);

    printf("Student street is : %d", mydata.stuAddress.street);


return 0;
}
