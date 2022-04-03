#include "struct.h"

Student *giveStudents(Student students[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("Student %d firstname  : ", i + 1);
        scanf("%s", students[i].firstname);
        printf("Student %d lastname : ", i + 1);
        scanf("%s", students[i].lastname);

        printf("\n");

        printf("\tFirst average : ");
        scanf("%d", &students[i].notes[0]);

        printf("\tSecond average : ");
        scanf("%d", &students[i].notes[1]);

        printf("\n");
    }
    return students;
}

/**
 * @brief we save the output in file.txt
 *
 * @param students
 * @param size
 */
void saveInFile(Student students[], int size)
{
    FILE *file = fopen("file.txt", "w"); // opening in write mode

    fprintf(file, "\tVIEWING STUDENTS");

    for (int i = 0; i < size; i++)
    {
        /**
         * @brief we use here fprintf instead of printf
         * The first parameter is the file indicator
         *
         */
        fprintf(file, "\nStudent %d  : %s  %s \n", i + 1, students[i].firstname, students[i].lastname);
        fprintf(file, "\tMy averages\n");
        fprintf(file, "\tFrench: %d \n", students[i].notes[0]);
        fprintf(file, "\tMaths : %d \n", students[i].notes[1]);
        printf("\n");
    }
}
