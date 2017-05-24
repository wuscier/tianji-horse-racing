#include <iostream>
using namespace std;

int main() {

	int lines, numOfLine;
	scanf("%d", &lines);

	for (int i = 0; i < lines; i++)
	{
		scanf("%d", &numOfLine);

		int temp, sum = 0;
		for (int i = 0; i < numOfLine; i++)
		{
			scanf("%d", &temp);
			sum += temp;
		}

		printf("%d\n", sum);

		if (i < lines - 1)
		{
			printf("\n");
		}
	}

	return 0;
}