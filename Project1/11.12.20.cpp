#include"Functions.h"
#include"Functions.cpp"



void main()
{
	setlocale(LC_ALL, "");
	cout << "���������� ������ ���� int " << endl;
	int const N = 10;
	int arr[N];
	Fillrand(arr, N);
	Print(arr, N);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arr, N) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, N) << endl;
	cout << "����������� ������� �������: " << minvaluein(arr, N) << endl;
	cout << "������������ ������� �������: " << maxvaluein(arr, N) << endl;
	cout << "��������������� ������:\n";
	Sort(arr, N) ;
	Print(arr, N);
	cout << "\n������ ��������� ������ �� ���� �������:\n ";
	Shift(arr, N);
	Print(arr, N);
	cout << delimiter << endl;

	cout << "��������� ������ ���� int " << endl;
	int arrint[ROWS][COLS];
	Fillrand(arrint, ROWS, COLS);
	Print(arrint, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arrint, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arrint, ROWS, COLS) << endl;
	cout << "����������� ������� �������: " << minvaluein(arrint, ROWS, COLS) << endl;
	cout << "������������ ������� �������: " << maxvaluein(arrint, ROWS, COLS) << endl;
	cout << "��������������� ������:\n";
	Sort(arrint, ROWS, COLS);
	Print(arrint, ROWS, COLS);
	cout << "\n������ ��������� ������ �� ���� �������:\n ";
	Shift(arrint,ROWS, COLS);
	Print(arrint, ROWS, COLS);
	cout << delimiter << endl;

	cout << "���������� ������ ���� float " << endl;
	int const NFL = 8;
	float arrf[NFL];
	Fillrand(arrf, NFL);
	Print(arrf, NFL);
	cout << "����� ��������� �������: " << Sum(arrf, NFL) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arrf, NFL) << endl;
	cout << "����������� ������� �������: " << minvaluein(arrf, NFL) << endl;
	cout << "������������ ������� �������: " << maxvaluein(arrf, NFL) << endl;
	cout << "��������������� ������:\n";
	Sort(arrf, NFL);
	Print(arrf, NFL);
	cout << "\n������ ��������� ������ �� ���� �������:\n ";
	Shift(arrf, NFL);
	Print(arrf, NFL);

	cout << delimiter << endl;

	cout << "��������� ������ ���� float " << endl;
	float arrfl2[ROWS][COLS];
	Fillrand(arrfl2, ROWS, COLS);
	Print(arrfl2, ROWS, COLS);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arrfl2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arrfl2, ROWS, COLS) << endl;
	cout << "����������� ������� �������: " << minvaluein(arrfl2, ROWS, COLS) << endl;
	cout << "������������ ������� �������: " << maxvaluein(arrfl2, ROWS, COLS) << endl;
	cout << "��������������� ������:\n";
	Sort(arrfl2, ROWS, COLS);
	Print(arrfl2, ROWS, COLS);

	cout << delimiter << endl;

	cout << "���������� ������ ���� double " << endl;
	int const NDBL = 10;
	double arrd[NDBL];
	Fillrand(arrd, NDBL);
	Print(arrd, NDBL);
	cout << "����� ��������� �������: " << Sum(arrd, NDBL) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arrd, NDBL) << endl;
	cout << "����������� ������� �������: " << minvaluein(arrd, NDBL) << endl;
	cout << "������������ ������� �������: " << maxvaluein(arrd, NDBL) << endl;
	cout << "��������������� ������:\n";
	Sort(arrd, NDBL);
	Print(arrd, NDBL);
	cout << "\n������ ��������� ������ �� ���� �������:\n ";
	Shift(arrd, NDBL);
	Print(arrd, NDBL);
	cout << delimiter << endl;

	cout << "��������� ������ ���� double " << endl;
	double arrdbl2[ROWS][COLS];
	Fillrand(arrdbl2, ROWS, COLS);
	Print(arrdbl2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arrdbl2, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arrdbl2, ROWS, COLS) << endl;
	cout << "����������� ������� �������: " << minvaluein(arrdbl2, ROWS, COLS) << endl;
	cout << "������������ ������� �������: " << maxvaluein(arrdbl2, ROWS, COLS) << endl;
	cout << "��������������� ������:\n";
	Sort(arrdbl2, ROWS, COLS);
	Print(arrdbl2, ROWS, COLS);
	cout << endl;
	
	cout << delimiter << endl;

	cout << "���������� ������ ���� char " << endl;
	int const NCH = 6;
	char arrch[NCH];
	Fillrand(arrch, NCH);
	Print(arrch, NCH);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arrch, NCH) << endl;

	cout << delimiter << endl;

	cout << "��������� ������ ���� char " << endl;
	char arrch2[ROWS][COLS];
	Fillrand(arrch2, ROWS, COLS);
	Print(arrch2, ROWS, COLS);
	cout << endl;


}




