#include "struct.h"

Student *giveStudents(Student students[], int taille)
{
    printf("\n");
    for (int i = 0; i < taille; i++)
    {
        printf("Prénom de l'étudiant %d : ", i + 1);
        scanf("%s", students[i].firstname);
        printf("Nom de l'étudiant %d : ", i + 1);
        scanf("%s", students[i].lastname);

        printf("\n");

        printf("\tNote de Français : ");
        scanf("%d", &students[i].notes[0]);

        printf("\tNote de Maths: ");
        scanf("%d", &students[i].notes[1]);

        printf("\n");
    }
    return students;
}

void displayStudents(Student students[], int taille)
{
    printf("\tAFFICHAGE DES STUDENTS \n");
    for (int i = 0; i < taille; i++)
    {
        printf("\nEtudiant %d  : %s  %s \n", i + 1, students[i].firstname, students[i].lastname);
        printf("\tMes Notes\n");
        printf("\tFrançais : %d \n", students[i].notes[0]);
        printf("\tMaths : %d \n", students[i].notes[1]);
        printf("\n");
    }
}
