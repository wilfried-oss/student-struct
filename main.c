#include "struct.c"

int main(int argc, char *argv[])
{
    int n;
    printf("\nCombien d'élèves voulez-vous enregistrer : ");
    scanf("%d", &n);
    Student students[n];

    giveStudents(students, n);

    saveInFile(students, n);
    return 0;
}