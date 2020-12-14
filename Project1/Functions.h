#pragma once
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



int maxvaluein(int arr[], const int N);
float maxvaluein(float arr[], const int N);
double maxvaluein(double arr[], const int N);

void Sort(int arr[], const int N);
void Sort(float arr[], const int N);
void Sort(double arr[], const int N);
