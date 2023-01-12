#include <string.h>

char* my_strstr(char* param_1, char* param_2)
{
    const char *a;
    const char *b;
    b = param_2;

    //char haysack[] = "hi child"
    //char needle[] = "chi"
    
    if (*b == 0) 
    { 
        return param_1;
    }

    for(; *param_1 != 0; param_1++)
    {
        if (*param_1 != *b) 
        { 
            continue;
        }
        else
        {
        return param_1++;
        }
    }

    return NULL;
}