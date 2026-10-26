/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 00:41:21 by akisuzuk          #+#    #+#             */
/*   Updated: 2026/10/26 11:31:30 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

intis_valid_number(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
        return (0);

    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return (0);
        }
        i++;
    }
    return (1);
}

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

    int i;

    if  (argc != 5 && argc != 6)
    {
        printf("Error: Invalid number of arguments\n");
        return (1);
    }

    i = 1;
    while(i < argc)
    {
        if (!is_valid_number(argv[i]))
        {
            printf("Error: Invalid number\n");
            return (1);
        }
        i++;
    }

    //printf("Number = %d\n", ft_atoi(argv[1]));
    printf("Arguments OK\n");
    return (0);
}
