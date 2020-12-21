#include "Functions.h"

void Fillrand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;
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

void Fillrand(float arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = float(rand() % 100) / 10;
	}
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

void Fillrand(double arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = double(rand() % 1000) / 10;
	}
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

void Fillrand(char arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{

		arr[i] = rand() % 100;
	}
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