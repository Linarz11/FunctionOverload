#include"Functions.h"
#include"Functions.cpp"



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
	cout << "\nМассив сдвинутый вправо на один элемент:\n ";
	Shift(arr, N);
	Print(arr, N);
	cout << delimiter << endl;

	cout << "Двумерный массив типа int " << endl;
	int arrint[ROWS][COLS];
	Fillrand(arrint, ROWS, COLS);
	Print(arrint, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arrint, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrint, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << minvaluein(arrint, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << maxvaluein(arrint, ROWS, COLS) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arrint, ROWS, COLS);
	Print(arrint, ROWS, COLS);
	cout << "\nМассив сдвинутый вправо на один элемент:\n ";
	Shift(arrint,ROWS, COLS);
	Print(arrint, ROWS, COLS);
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
	cout << "\nМассив сдвинутый вправо на один элемент:\n ";
	Shift(arrf, NFL);
	Print(arrf, NFL);

	cout << delimiter << endl;

	cout << "Двумерный массив типа float " << endl;
	float arrfl2[ROWS][COLS];
	Fillrand(arrfl2, ROWS, COLS);
	Print(arrfl2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arrfl2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrfl2, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << minvaluein(arrfl2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << maxvaluein(arrfl2, ROWS, COLS) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arrfl2, ROWS, COLS);
	Print(arrfl2, ROWS, COLS);

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
	cout << "\nМассив сдвинутый вправо на один элемент:\n ";
	Shift(arrd, NDBL);
	Print(arrd, NDBL);
	cout << delimiter << endl;

	cout << "Двумерный массив типа double " << endl;
	double arrdbl2[ROWS][COLS];
	Fillrand(arrdbl2, ROWS, COLS);
	Print(arrdbl2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arrdbl2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arrdbl2, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << minvaluein(arrdbl2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << maxvaluein(arrdbl2, ROWS, COLS) << endl;
	cout << "Отсортированный массив:\n";
	Sort(arrdbl2, ROWS, COLS);
	Print(arrdbl2, ROWS, COLS);
	cout << endl;
	
	cout << delimiter << endl;

	cout << "Одномерный массив типа char " << endl;
	int const NCH = 6;
	char arrch[NCH];
	Fillrand(arrch, NCH);
	Print(arrch, NCH);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arrch, NCH) << endl;

	cout << delimiter << endl;

	cout << "Двумерный массив типа char " << endl;
	char arrch2[ROWS][COLS];
	Fillrand(arrch2, ROWS, COLS);
	Print(arrch2, ROWS, COLS);
	cout << endl;


}




