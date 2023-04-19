#include <unistd.h>
/*
int main(int argc, char **argv)
{
    static char used[255];
    int i;

    if (argc != 3)
        return(write(1, "\n", 1));
    
    i = 0;
    while(argv[1][i])
    {
        while(argv[1][i])
        {
            if(!used[argv[1][i]])
            {
                used[argv[1][i]] = 1;
                write(1, &argv[1][i], 1);
            }
        i++;
        }
    }
    i = 0;
    while(argv[2][i])
    {
        if(!used[argv[2][i]])
        {
            used[argv[2][i]] = 1;
            write(1, &argv[2][i], 1);
        }
        i++;
    }
    return(write(1, "\n", 1));
}
*/
/*
int     main(int ac, char **av)
{
    int i = 0;
    static char tab[127];

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (!tab[av[1][i]])
            {
                tab[av[1][i]] = 1;
                write(1, &av[1][i], 1);
            }
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            if (!tab[av[2][i]])
            {
                tab[av[2][i]] = 1;
                write(1, &av[2][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
*/

 
/*
int main(int argc, char **argv)
{
    int used[255];
    int i;
    int j;

    if(argc != 3)
        return(write(1, "\n", 1));
    
    i = 1;
    while(i < 3)
    {
        j = 0;
        while(argv[i][j])
        {
            if(!used[argv[i][j]])
            {
                used[argv[i][j]] = 1;
                write(1, &argv[i][j], 1);
            }
            j++;
        }
        i++;
    }
    return(write(1, "\n", 1));
}
*/