#include <iostream>
using namespace std;

int main() {
	int n, u, d;

	while (scanf("%d", &n) && n != 0)
	{
		scanf("%d%d", &u, &d);

		int Current_Distance = 0;
		int minute;
		for (minute = 1; Current_Distance < n; minute++)
		{
			int increment = minute % 2 == 0 ? -d : u;
			Current_Distance += increment;
		}

		printf("%d\n", minute - 1);
	}


	return 0;
}