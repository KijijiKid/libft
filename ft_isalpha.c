int ft_isalpha(char a)
{
    if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'))
        return (1);
    else
        return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i", ft_isalpha('G'));
// }