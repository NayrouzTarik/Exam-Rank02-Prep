int    ft_strcmp(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return(s1[i] - s2[i]); // once there s the diff i break
        i++;
    }
    return (s1[i] - s2[i]);
}