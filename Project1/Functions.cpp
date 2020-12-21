#include"Functions.h"



template <typename T>
void Print(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
}

template <typename T>
void Print(T arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

template <typename T>
T Sum(T arr[], const int N)
{
	T summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}

template <typename T>
T Sum(T arr[ROWS][COLS], const int M, const int N)
{
	T summ = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}

template <typename T>
double Avg(T arr[], const int N)
{
	return (double)Sum(arr, N) / N;
}
template <typename T>
double Avg(T arr[ROWS][COLS], const int M, const int N)
{
	return (double)Sum(arr, M, N) / (M * N);
}

template <typename T>
T minvaluein(T arr[], const int N)
{
	T min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template <typename T>
T minvaluein(T arr[ROWS][COLS], const int M, const int N)
{
	T min = arr[0][0];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

template <typename T>
T maxvaluein(T arr[], const int N)
{
	T max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

template <typename T>
T maxvaluein(T arr[ROWS][COLS], const int M, const int N)
{
	T max = arr[0][0];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template <typename T>
void Sort(T arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <typename T>
void Sort(T arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < (ROWS * COLS-1); i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				if (j == ROWS - 1 && k == COLS - 1) // был вынужден стащить из интернета, без этого во втором элементе всегда появлялся мусор.
				{
					continue;  
				}
				if (arr[j][k] > arr[j][k + 1])
				{
					T buffer = arr[j][k];
					arr[j][k] = arr[j][k + 1];
					arr[j][k + 1] = buffer;
				}
			}
		}
	}
}

template <typename T>
void Shift(T arr[], const int N)
{
		T buffer = arr[0];
	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[N - 1] = buffer;
}
template <typename T>
void Shift(T arr[ROWS][COLS], const int M, const int N) // тут начались ошибки
{
	int buffer = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = arr[i+1][j + 1];
		}
	}
	arr[ROWS - 1][COLS - 1] = buffer;
}
