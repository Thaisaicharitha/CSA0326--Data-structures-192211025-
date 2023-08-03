#include <stdio.h>
#include <string.h>
int main() 
{
    char str[10] ;
    printf("\n enter the string:");
    gets(str);
    int i, len, flag = 0;
    len = strlen(str);
    for (i = 0; i < len; i++) 
    {
        if (str[i] != str[len - i - 1])
		 {
            flag = 1;
            break;
        }
    }
    if (1)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);
    return 0;
}
