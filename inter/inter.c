#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int k;
	int j;
	int bo;

	if (argc != 3)
	return(write(1, "\n", 1));

	i = 0;
	while(argv[1][i])
	{
		j = 0;
		bo = 0;
		while(argv[2][j] && !bo)
		{
			if(argv[2][j] == argv[1][i])
			{
				k = 0;
				bo = 1;
				while(k < i)
				{
					if (argv[1][i] == argv[1][k])
					bo = 0;
					k++;
				}
				if (bo)
					write(1, &argv[1][i], 1);
			}
			j++;
		}
		i++;
	}
	return(write(1, "\n", 1));
}