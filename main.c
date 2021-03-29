#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    *s = ",,,a,,bc,,def,,,"; 
    char    c = ',';
    char    **sp;
    int     i = 0;
    
    printf("test\n");
    sp = ft_split(s, c);
    while (sp[i] != NULL)
    {
        printf("%s|", sp[i]);
        i++;
    }
    i = 0;
    while (sp[i] != NULL)
    {
        //free(sp[i]);
        i++;
    }
    //free(sp);
    return 0;
}
