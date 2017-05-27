
#include <iostream>
using namespace std;

int main()
{
	const int Max_Row = 10, Max_Column = 10;
	char Grid[Max_Row][Max_Column];
	char Path[Max_Row][Max_Column];

	int Input_Row, Input_Column, Starting_Column;

	while (scanf("%d%d%d", &Input_Row, &Input_Column, &Starting_Column) != EOF)
	{
		if (Input_Row == 0 || Input_Column == 0)
		{
			break;
		}

		for (int i = 0; i < Input_Row; i++)
		{
			scanf("%s", Grid[i]);
		}


		int x = 0;
		int y = Starting_Column - 1;
		int steps = 0;

		while (x >= 0 && y >= 0 && x < Input_Row&&y < Input_Column&&Grid[x][y] != 'X')
		{
			if (Grid[x][y] == 'N')
			{
				Grid[x][y] = 'X';
				Path[x][y] = steps++;


				x--;
			}
			else if (Grid[x][y] == 'S')
			{
				Grid[x][y] = 'X';
				Path[x][y] = steps++;


				x++;
			}
			else if (Grid[x][y] == 'E')
			{
				Grid[x][y] = 'X';
				Path[x][y] = steps++;


				y++;
			}
			else if (Grid[x][y] == 'W')
			{
				Grid[x][y] = 'X';
				Path[x][y] = steps++;


				y--;
			}

		}

		if (Grid[x][y] == 'X')
		{
			printf("%d step(s) before a loop of %d step(s)\n", Path[x][y], steps - Path[x][y]);
		}
		else {
			printf("%d step(s) to exit\n", steps);
		}
	}

	return 0;
}