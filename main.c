
#include <stdio.h>


int ft_atoi(char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}

int main(int argc, char **argv)
{
    //printf("argc = %d\n", argc);
    //printf("argv[0] = %s\n", argv[0]);
    
    if  (argc != 5 && argc != 6)
    {
        printf("Error: Invalid number of arguments\n");
        return (1);
    }
    printf("Number = %d\n", ft_atoi(argv[1]));
    return (0);
}