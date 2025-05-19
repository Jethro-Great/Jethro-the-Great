#include <stdio.h>

float GradeConverter (char grade) {

    switch (grade) {

    case 'A':
        return 5.0;
        break;
    case 'B':
        return 4.0;
        break;
    case 'C':
        return 3.0;
        break;
    case 'D':
        return 2.0;
        break;
    case 'F':
        return 0.0;
        break;
    default:
        return -1.0;

    }
}


int main () {
int num_courses = 0;
printf ("please input the number of courses offered:\n");
scanf("%d", &num_courses);


char grades[num_courses];
int creditUnit[num_courses];

float totalGradePoints = 0;
 int totalCreditUnit = 0;

 for (int i = 0; i < num_courses;i++) {
    printf("please enter the credit unit of course %d\n", i + 1);
    scanf(" %d", &creditUnit[i]);
     printf("please enter the Grade obtained in course %d\n" , i + 1);
     scanf(" %c", &grades[i]);

     float GradePoint = GradeConverter(grades[i]) * creditUnit[i];

     totalGradePoints += GradePoint;
     totalCreditUnit += creditUnit[i];

 }

 float CGPA = totalGradePoints / totalCreditUnit;

 printf("Your CGPA is: %.2f", CGPA);

return 0;

}



/*int main () {

int lengthArray = 0;
printf("Input the number of courses\n");
scanf("%d", &lengthArray);

int studentScores[lengthArray];

int num = sizeof (studentScores)/sizeof(studentScores[0]);

int sum = 0;

for (int i = 0; i < num; i++){
    printf("Enter the score of Course %d\n", i + 1);
    scanf(" %d", &studentScores[i]);
    printf("The score of Course %d is %d:\n", i + 1, studentScores[i]);

    sum += studentScores[i];
}

printf("The total score of all courses is: %d", sum);

return 0;
}*/
