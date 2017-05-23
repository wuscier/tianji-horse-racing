#include <iostream>
using namespace std;

int main() {

	int lines;

	scanf("%d", &lines);

	for (int i = 0; i < lines; i++)
	{
		int num, temp, sum = 0;
		scanf("%d", &num);

		for (int i = 0; i < num; i++)
		{
			scanf("%d", &temp);
			sum += temp;
		}

		printf("%d\n", sum);
	}

	return 0;
}