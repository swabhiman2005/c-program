#include<stdio.h>
int main()
{
    char str[100], copy_str[100];
    char *pstr, *pcopy_str;
    pstr=str;
    pcopy_str=copy_str;
    printf("\n enter * to end");
    printf("\n **********");
    printf("\n enter the string");
    scanf("%c",pstr);
    while(*pstr!='*')
    {
        pstr++;
        scanf("%c",pstr);
    }
    *pstr = '\0';
    pstr--;
    while(pstr >= str)
    {
        *pcopy_str = *pstr;
        pcopy_str++;
        pstr--;
    }
    *pcopy_str = '\0';
    printf("\n the new text is:");
    pcopy_str = copy_str;
    while(*pcopy_str != '\0')
    {
        printf("%c",*pcopy_str);
        pcopy_str++;
    }
    return 0;
}
