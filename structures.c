/*Structures using pointers in c program*/

#include <stdio.h>
#include<string.h>
struct person
{
   char name[50];
   int age;
};
// function prototype
void display(struct person *p);
int main() 
{
   struct person *pointer;
   struct person p1;
   pointer = &p1;
   printf("Enter name: ");
   // read string input from the user until \n is entered
   // \n is discarded
   scanf("%[^\n]s", &pointer->name);
   printf("Enter age: ");
   scanf("%d", &pointer->age);
   display(&p1);
   return 0;
}
void display(struct person *p) 
{
   printf("\nDisplaying information\n");
   printf("Name: %s", p->name);
   printf("\nAge: %d", p->age);
}
