#include "struct.c"

int main(int argc, char *argv[])
{
    int size = 0;
    printf("\nCombien d'élèves voulez-vous enregistrer : ");
    scanf("%d", &size);

    Student *students;
    if (size > 0)
    {
        students = malloc(size * sizeof(Student));
        if (students == NULL)
        {
            exit(0);
        }

        giveStudents(students, size);
        saveInFile(students, size);
        free(students);
    }

    return 0;
}