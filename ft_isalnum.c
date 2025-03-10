int ft_isalnum(int arg)
{
    if (('a' <= arg && arg <= 'z') || ('A' <= arg && arg <= 'Z') || ('0' <= arg && arg <= '9'))
        return (1);
    else
        return(0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%i", ft_isalnum('1'));
// }