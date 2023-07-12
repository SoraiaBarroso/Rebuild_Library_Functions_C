#include <string.h>

char* reverse_string(char* param_1)
{
    int len = strlen(param_1) - 1; 
    char *newStr = malloc(sizeof(char) * (len + 1));
    int index = 0;

    if(param_1 == NULL)
    {
        return param_1;
    }

    for (int i = len; i >= 0; i--) 
    {
        newStr[index++] = param_1[i];
    }

    return newStr;
}
