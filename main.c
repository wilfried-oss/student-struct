#include "struct.c"

int main(int argc, char *argv[])
{
    int n;
    printf("\nCombien d'élèves voulez-vous enregistrer : ");
    scanf("%d", &n);
    Student students[n];

    giveStudents(students, n);

    displayStudents(students, n);
    /*Ici on veut rediriger la sortie de displayStudents vers un fichier.txt*/

    printf("\n");
    return 0;
}