

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return ('NULL');
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

//the example doesnt have the condition so idk






char    *ft_strcpy2(char *s1, char *s2)
{
    int i = 0;

    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}




























