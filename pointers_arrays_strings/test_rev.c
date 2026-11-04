#include "main.h"
#include <stdio.h>


int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
void rev_string(char *s)
{
    int start = 0;
    int end = 0;
    char tmp;

    while (s[end] != '\0')
        end++;
    end--;

    while (start < end)
    {
        tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
}