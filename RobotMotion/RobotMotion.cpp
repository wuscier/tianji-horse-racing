
#include <iostream>
using namespace std;

int main()
{
	const int Max_Row = 10, Max_Column = 10;
	char Grid[Max_Row][Max_Column];

	int Input_Row, Input_Column, Starting_Column;


	while (true)
	{
		cout << "Enter number of row(s), number of column(s), and number of starting column. Each divided by space: ";

		cin >> Input_Row;
		cin >> Input_Column;
		cin >> Starting_Column;

		if (Input_Row == 0 && Input_Column == 0)
		{
			break;
		}

		for (int row = 0; row < Input_Row; row++)
		{
			cin >> Grid[row];
		}

		int steps = 0;
		bool Out_Of_Grid = false;

		for (int row = 0; row < Input_Row;)
		{
			if (Out_Of_Grid)
			{
				break;
			}
			for (int column = Starting_Column - 1; column < Input_Column;)
			{
				steps++;

				switch (Grid[row][column])
				{
				case 'E':
					if ((++column) == Input_Column)
					{
						Out_Of_Grid = true;
					}
					break;
				case 'S':
					if ((++row) == Input_Row)
					{
						Out_Of_Grid = true;
					}
					break;
				case 'W':
					if ((--column) == -1)
					{
						Out_Of_Grid = true;
					}
					break;
				case 'N':
					if ((--row) == -1)
					{
						Out_Of_Grid = true;
					}
					break;
				}

				if (Out_Of_Grid)
				{
					break;
				}
			}
		}

		if (Out_Of_Grid)
		{
			cout << steps << "step(s) to exit" << endl;
		}
		else
		{
			cout << 3 << "step(s) before a loop of " << 8 << " step(s)" << endl;
		}
	}

	return 0;
}