int ft_isascii(int arg)
{
    if (0 <= arg && arg <= 255)
        return (1);
    else 
        return (0);
}

#include <stdio.h>
int main(void)
{
    printf("%i", ft_isascii('ß'));
}