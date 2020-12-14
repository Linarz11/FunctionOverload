#include <iostream>
#include <conio.h>
using namespace std;
#define delimiter "\n--------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 4;

//Одномерный массив типа int
void Fillrand(int arr[], const int N);
void Print(int arr[], const int N);

//Двумерный массив типа int
void Fillrand(int arr[ROWS][COLS], const int M, const int N);
void Print(int arr[ROWS][COLS], const int M, const int N);

//Одномерный массив типа float
void Fillrand(float arr[], const int N);
void Print(float arr[], const int N);

//Двумерный массив типа float
void Fillrand(float arr[ROWS][COLS], const int M, const int N);
void Print(float arr[ROWS][COLS], const int M, const int N);

//Одномерный массив типа double
void Fillrand(double arr[], const int N);
void Print(double arr[], const int N);

//Двумерный массив типа double
void Fillrand(double arr[ROWS][COLS], const int M, const int N);
void Print(double arr[ROWS][COLS], const int M, const int N);

//Одномерный массив типа char
void Fillrand(char arr[], const int N);
void Print(char arr[], const int N);

//Двумерный массив типа char
void Fillrand(char arr[ROWS][COLS], const int M, const int N);
void Print(char arr[ROWS][COLS], const int M, const int N);

int Sum(int arr[], const int N);
float Sum(float arr[], const int N);
double Sum(double arr[], const int N);
int Sum(int arr[ROWS][COLS], const int M, const int N);
float Sum(float arr[ROWS][COLS], const int M, const int N);
double Sum(double arr[ROWS][COLS], const int M, const int N);

double Avg(int arr[], const int N);
double Avg(float arr[], const int N);
double Avg(double arr[], const int N);
double Avg(int arr[ROWS][COLS], const int M, const int N);
double Avg(float arr[ROWS][COLS], const int M, const int N);
double Avg(double arr[ROWS][COLS], const int M, const int N);

int minvaluein(int arr[], const int N);
float minvaluein(float arr[], const int N);
double minvaluein(double arr[], const int N);
int minvaluein(int arr[ROWS][COLS], const int M, const int N);
float minvaluein(float arr[ROWS][COLS], const int M, const int N);



int maxvaluein(int arr[], const int N);
float maxvaluein(float arr[], const int N);
double maxvaluein(double arr[], const int N);

void Sort(int arr[], const int N);
void Sort(float arr[], const int N);
void Sort(double arr[], const int N);





void main()
{
	setlocale(LC_ALL, "");
	cout << "Одномерный массив типа int " << endl;
	int const N = 10;
	int arr[N];
	Fillrand(arr, N);
	Print(arr, N);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, N) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, N) << endl;
	cout << "Минимальный элемент массива: " << minvaluein(arr, N) << endl;
	cout << "Максимальный элемент массива: " << maxvaluein(arr, N) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arr, N) ;
	Print(arr, N);
	cout << delimiter << endl;

	cout << "Двумерный массив типа int " << endl;
	int arrint[ROWS][COLS];
	Fillrand(arrint, ROWS, COLS);
	Print(arrint, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arrint, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrint, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << minvaluein(arrint, ROWS, COLS) << endl;

	cout << delimiter << endl;

	cout << "Одномерный массив типа float " << endl;
	int const NFL = 8;
	float arrf[NFL];
	Fillrand(arrf, NFL);
	Print(arrf, NFL);
	cout << "Сумма элементов массива: " << Sum(arrf, NFL) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrf, NFL) << endl;
	cout << "Минимальный элемент массива: " << minvaluein(arrf, NFL) << endl;
	cout << "Максимальный элемент массива: " << maxvaluein(arrf, NFL) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arrf, NFL);
	Print(arrf, NFL);

	cout << delimiter << endl;

	cout << "Двумерный массив типа float " << endl;
	float arrfl2[ROWS][COLS];
	Fillrand(arrfl2, ROWS, COLS);
	Print(arrfl2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arrfl2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrfl2, ROWS, COLS) << endl;


	cout << delimiter << endl;

	cout << "Одномерный массив типа double " << endl;
	int const NDBL = 10;
	double arrd[NDBL];
	Fillrand(arrd, NDBL);
	Print(arrd, NDBL);
	cout << "Сумма элементов массива: " << Sum(arrd, NDBL) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrd, NDBL) << endl;
	cout << "Минимальный элемент массива: " << minvaluein(arrd, NDBL) << endl;
	cout << "Максимальный элемент массива: " << maxvaluein(arrd, NDBL) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arrd, NDBL);
	Print(arrd, NDBL);
	cout << delimiter << endl;

	cout << "Двумерный массив типа double " << endl;
	double arrdbl2[ROWS][COLS];
	Fillrand(arrdbl2, ROWS, COLS);
	Print(arrdbl2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arrdbl2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrdbl2, ROWS, COLS) << endl;

	cout << endl;
	
	cout << delimiter << endl;

	cout << "Одномерный массив типа char " << endl;
	int const NCH = 6;
	char arrch[NCH];
	Fillrand(arrch, NCH);
	Print(arrch, NCH);
	cout << endl;
	
	cout << delimiter << endl;

	cout << "Двумерный массив типа char " << endl;
	char arrch2[ROWS][COLS];
	Fillrand(arrch2, ROWS, COLS);
	Print(arrch2, ROWS, COLS);
	cout << endl;


}


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
float minvaluein(float arr[ROWS][COLS], const int M, const int N)



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


