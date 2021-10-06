#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int d1, m1, y1, d2, m2, y2, r1, r2, r3;
    char person_name[30];
    int *ages;
    system("cls");

    ages = (int *)malloc(sizeof(int) * 9);
    char* name = (char *)malloc(strlen(person_name) + 1);
    strcpy(name, person_name);

    if(ages == NULL || name == NULL)
    {
        printf("Sorry! unable to allocate memory");
        exit(0);
    }
    ages[0] = d1, ages[1] = m1, ages[2] = y1, ages[3] = d2, ages[4] = m2, ages[5] = y2, ages[6] = r1, ages[7] = r2,  ages[8] = r3;

    printf("\n\n\n\t\t\t================================================\n");
    printf("                                          Age Calculator                 \n");
    printf("\t\t\t================================================\n");

    printf("\n\nEnter your name: ");
    scanf("%s", person_name);
    printf("\nEnter your Birthday day: ");
    scanf("%d", &d1);
    printf("\nEnter your Birthday month: ");
    scanf("%d", &m1);
    printf("\nEnter your Birthday year: ");
    scanf("%d", &y1);
    printf("\n\nEnter your Current day: ");
    scanf("%d", &d2);
    printf("\nEnter your Current month: ");
    scanf("%d", &m2);
    printf("\nEnter your Current year: ");
    scanf("%d", &y2);

    if((d1 > 31 || d1 < 1) || (d2 > 31 || d2 < 1) || (m1 > 12 || m1 < 1) || (m2 > 12 || m2 < 1) || (y1 < 0 || y2 < 0))
    {
        printf("Your Enter Wrong Something.! Try Againg");
    }
    else
    {
        system("cls");
        r3 = y2 - y1;
        if(d2 >= d1)
        {
            r1 = d2 - d1;
        }
        else
        {
            m2 -= 1;
            d2 += 30;
            r1 = d2 - d1;
        }
        if(m2 >= m1)
        {
            r2 = m2 - m1;
        }
        else
        {
            y2 -= 1;
            m2 += 12;
            r2 = m2 - m1;
        }
        printf("%s Age is %d day %d month %d year. ", person_name, r1, r2, r3);
    }

    free(ages);
    free(name);

    return 0;
}
