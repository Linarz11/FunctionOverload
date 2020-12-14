#include"Functions.h"
void Fillrand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
	}
}
void Print(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Fillrand(int arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void Print(int arr[ROWS][COLS], const int M, const int N)
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

void Fillrand(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = float(rand() % 100) / 10;
	}
}
void Print(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Fillrand(float arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = float(rand() % 100) / 10;
		}
	}
}
void Print(float arr[ROWS][COLS], const int M, const int N)
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

void Fillrand(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = double(rand() % 1000) / 10;
	}
}
void Print(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Fillrand(double arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = double(rand() % 1000) / 10;
		}
	}
}
void Print(double arr[ROWS][COLS], const int M, const int N)
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

void Fillrand(char arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{

		arr[i] = rand() % 100;
	}
}
void Print(char arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Fillrand(char arr[ROWS][COLS], const int M, const int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(char arr[ROWS][COLS], const int M, const int N)
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

int Sum(int arr[], const int N)
{
	int summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
float Sum(float arr[], const int N)
{
	float summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
double Sum(double arr[], const int N)
{
	double summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += arr[i];
	}
	return summ;
}
int Sum(int arr[ROWS][COLS], const int M, const int N)
{
	int summ = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}
float Sum(float arr[ROWS][COLS], const int M, const int N)
{
	float summ = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}
double Sum(double arr[ROWS][COLS], const int M, const int N)
{
	double summ = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;
}



double Avg(int arr[], const int N)
{
	return (double)Sum(arr, N) / N;
}
double Avg(float arr[], const int N)
{
	return (double)Sum(arr, N) / N;
}
double Avg(double arr[], const int N)
{
	return (double)Sum(arr, N) / N;
}
double Avg(int arr[ROWS][COLS], const int M, const int N)
{
	return (double)Sum(arr, M, N) / (M * N);
}
double Avg(float arr[ROWS][COLS], const int M, const int N)
{
	return (double)Sum(arr, M, N) / (M * N);
}
double Avg(double arr[ROWS][COLS], const int M, const int N)
{
	return (double)Sum(arr, M, N) / (M * N);
}

int minvaluein(int arr[], const int N)
{
	int min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
float minvaluein(float arr[], const int N)
{
	float min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minvaluein(double arr[], const int N)
{
	double min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minvaluein(int arr[ROWS][COLS], const int M, const int N)
{
	int min = arr[0][0];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

int maxvaluein(int arr[], const int N)
{
	int max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
float maxvaluein(float arr[], const int N)
{
	float max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxvaluein(double arr[], const int N)
{
	double max = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}


void Sort(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}