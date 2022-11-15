#include <stdio.h>
int main() {
    char name[50], subject_name[20], subject_code[8], matric_no[8];
    char IC_number[12];
    printf("\nEnter your full name : ");
    scanf("%s", &name);
    printf("\nEnter your IC number : ");
    scanf("%s", &IC_number);
    printf("\nEnter your matric number : ");
    scanf("%s", &matric_no);
    printf("\nEnter subject code : ");
    scanf("%s", &subject_code);
    printf("\nEnter subject name : ");
    scanf("%s", &subject_name);
    printf("\n%s", name);
    printf("\n%s", IC_number);
    printf("\n%s", matric_no);
    printf("\n%s", subject_code);
    printf("\n%s", subject_name);
}