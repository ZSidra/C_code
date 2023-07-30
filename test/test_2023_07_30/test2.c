#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
    char input[20] = { 0 };
    scanf("%[^\n]", &input);
    char* str = &input;
    int sz = strlen(input);
    for (int i = sz - 1; i >= 0; i--)
    {
        printf("%c", *(str + i));
    }

    return 0;
}