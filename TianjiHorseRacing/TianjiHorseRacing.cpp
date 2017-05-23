// TianjiHorseRacing.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	const int Max_Horse_Number = 1000;
	int Tianji_Horses_Speeds[Max_Horse_Number];
	int King_Horses_Speeds[Max_Horse_Number];
	int Input_Horse_Number = 0;

	while (true)
	{
		cout << "enter the number of horse(s): ";
		cin >> Input_Horse_Number;

		cout << "enter speed of each of tianji's horse(s), each divided by space: ";
		for (int i = 0; i < Input_Horse_Number; i++)
		{
			cin >> Tianji_Horses_Speeds[i];
		}

		cout << "enter speed of each of king's horse(s), each divided by space: ";
		for (int i = 0; i < Input_Horse_Number; i++)
		{
			cin >> King_Horses_Speeds[i];
		}

		//sorts the elements in the range [first, last) into ascending order.
		sort(Tianji_Horses_Speeds, Tianji_Horses_Speeds + Input_Horse_Number);
		sort(King_Horses_Speeds, King_Horses_Speeds + Input_Horse_Number);

		int Round = 0;
		int Tianji_Min_Speed_Horse = 0;
		int King_Min_Speed_Horse = 0;
		int Tianji_Max_Speed_Horse = Input_Horse_Number - 1;
		int King_Max_Speed_Horse = Input_Horse_Number - 1;
		int Rounds_Won_By_Tianji = 0;

		while ((Round++) < Input_Horse_Number)
		{
			if (Tianji_Horses_Speeds[Tianji_Max_Speed_Horse] > King_Horses_Speeds[King_Max_Speed_Horse])
			{
				Rounds_Won_By_Tianji++;
				Tianji_Max_Speed_Horse--;
				King_Max_Speed_Horse--;
			}
			else if (Tianji_Horses_Speeds[Tianji_Max_Speed_Horse] < King_Horses_Speeds[King_Max_Speed_Horse])
			{
				Rounds_Won_By_Tianji--;
				Tianji_Min_Speed_Horse++;
				King_Max_Speed_Horse--;
			}
			else
			{
				if (Tianji_Horses_Speeds[Tianji_Min_Speed_Horse] > King_Horses_Speeds[King_Min_Speed_Horse])
				{
					Rounds_Won_By_Tianji++;
					Tianji_Min_Speed_Horse++;
					King_Min_Speed_Horse++;
				}
				else
				{
					if (Tianji_Horses_Speeds[Tianji_Min_Speed_Horse] < King_Horses_Speeds[King_Max_Speed_Horse])
					{
						Rounds_Won_By_Tianji--;
					}
					Tianji_Min_Speed_Horse++;
					King_Max_Speed_Horse--;
				}
			}
		}

		cout << "maximum dollars won by tianji: " << Rounds_Won_By_Tianji * 200 << endl;
	}

	return 0;
}

