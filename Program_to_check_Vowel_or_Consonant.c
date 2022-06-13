#include<stdio.h>
int main()
{
    char n,a,e,i,o,u,A,E,I,O,U;
    scanf("%c",&n);
    {
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='U'||n=='O')
        printf("Vowel");
        else
        printf("Consonant");
    }
    return 0;
}