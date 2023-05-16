int f_strlen(char *s)
{
    int x = 0;
    while(*s)
    {   
        s++;
        x++;
    }
     return x;
}

int f_strcmp( char *s1, char *s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *s1-*s2;
}
