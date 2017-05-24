#include <iostream>
using namespace std;

int main() {

	int num;
	while (scanf("%d", &num)!= EOF)
	{
		int temp, sum = 0;
		for (int i = 0; i < num; i++)
		{
			scanf("%d", &temp);
			sum += temp;
		}

		printf("%d\n", sum);
	}

	return 0;
}