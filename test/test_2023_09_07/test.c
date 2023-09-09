#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*********Begin*********/
typedef struct Fool
{
    char name[20];
    int num;
}Fool;

/*********End**********/
int main(void)
{
    /*********Begin*********/
    int n = 0;
    Fool f1, f2, f3;
    strcpy(f1.name, "Li");
    strcpy(f2.name, "Sun");
    strcpy(f3.name, "Zhang");
    f1.num = f2.num = f3.num = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char temp[20];
        scanf("%s", temp);
        if (strcmp(temp, f1.name))
        {
            f1.num++;
        }
        else if (strcmp(temp, f2.name))
        {
            f2.num++;
        }
        else if (strcmp(temp, f3.name))
        {
            f3.num++;
        }
    }

    printf("%s:%d\n", f1.name, f1.num);
    printf("%s:%d\n", f3.name, f3.num);
    printf("%s:%d", f2.name, f2.num);

    /*********End**********/
    return 0;
}