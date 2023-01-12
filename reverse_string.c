#include <string.h>

char* reverse_string(char* param_1)
{
   //size param_1
   int n = strlen(param_1);
   n--; 
   
   char* newStr;
   int index = 0;
   
   //no string given as parameter
   if(*param_1 == 0)
   {
        return param_1;
   }
   
   //iterate from the end through param_1 
   for(int i = n; param_1[i] != '\0'; --i) 
   {
      newStr[index++] = param_1[i];
      newStr[index] = '\0';
   }
   
   return newStr;
}
