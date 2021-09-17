#include <iostream>
using namespace std;

// task 1

void separation()
{
	cout << "//===Homework===//\n\n";
}


double kkm[77];


bool PrintArr(double kkm[], int size)
{
	if (kkm == nullptr || size == 0)
		return false;

	for (size_t a = 0; a < size; a++)

		cout << a << " : " << kkm[a] << " ";

	return true;
	cout << endl;
}

// task 2

void Task2(int* m, const int k)
{
	for (int i = 0; i < k; i++)
		if (m[i]) m[i] = 0;
		else m[i] = 1;
}

void Hw2(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\n";
}


int main()
{
	{ separation();
	PrintArr(kkm, 77);
	separation();

	const int k = 10;
	int m[k] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

	Hw2(m, k);
	Task2(m, k);
	Hw2(m, k);
	}
	// task 3
	{ separation();

	int array[8];
	array[0] = 1;
	for (int i = 1; i < 8; i++) {
		array[i] = array[i - 1] + 3;

	}
	Hw2(array, 8);

	}
}



