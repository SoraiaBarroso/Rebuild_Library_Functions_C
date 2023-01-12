#include <string.h>

//destination
char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    char *start = param_2;

    while(*param_2 && param_3--)
    {
        *param_1 = *param_2; //from source to destination
        param_1++;
        param_2++;
    }

    return start;
}
