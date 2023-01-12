#include <string.h>

//destination - source - size
char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    char *source = param_2;

    for(int i = 0; i <= param_3; i++)
    {
       param_1[i] = *source;
    }

    return source;
}