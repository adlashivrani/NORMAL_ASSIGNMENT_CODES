/*C program to print the roll number of a student who got the highest total marks */
#include <stdio.h>
void student_marks();
int main()
{ 
    student_marks();
    return 0;
}
void student_marks()
{
	int roll;
	int student;
	int subject1;
	int subject2;
	int subject3;
	int total_marks[5];
	int temp = 0;
	int temp_roll;
    for (student = 1; student <= 5; student++)
    {
    	 printf("\nEnter roll number of student %d:  ", student);
     	 scanf("%d", &roll);
      	 if (roll >= 1000 && roll <= 9999) 
      	 {
          	 printf("\nEnter the marks of three subjects:\n");
           	 scanf("\n%d \n%d \n%d", &subject1, &subject2, &subject3);
          	 total_marks[student] = subject1 + subject2 + subject3;
          	 if(subject1 > 65 && subject2 > 65 && subject3 > 65)
           	 	printf("\nTotal marks of student: %d is: %d\n", roll, total_marks[student]);
             else
           		 printf("\nGot less than 65 marks in one of the subjects!\n");
        		 if (total_marks[student] > temp)
           		 {
            		 temp = total_marks[student];
            		 temp_roll = roll;
           		 }
        
      	 }  else {
          			 printf("\nRoll number is not in the given Range!\n");
       			 }
    }	
	printf("\nHighest marks scored student roll number: %d\n", temp_roll);
}

