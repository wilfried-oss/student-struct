#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#define TAILLE_MAX 100
#include <stdlib.h>
#include <stdio.h>

typedef struct Student
{
    char firstname[100];
    char lastname[100];
    int notes[2];

} Student;

Student *giveStudents(Student students[], int taille);
void displayStudents(Student students[], int taille);

#endif // STUDENT_H_INCLUDED