#pragma once
const int ROWS = 3;
const int COLS = 4;
#include <iostream>
#include <conio.h>
using namespace std;
#define delimiter "\n--------------------------------------------------\n"
//Одномерный массив типа int
void Fillrand(int arr[], const int N);

//Двумерный массив типа int
void Fillrand(int arr[ROWS][COLS], const int M, const int N);

//Одномерный массив типа float
void Fillrand(float arr[], const int N);

//Двумерный массив типа float
void Fillrand(float arr[ROWS][COLS], const int M, const int N);

//Одномерный массив типа double
void Fillrand(double arr[], const int N);

//Двумерный массив типа double
void Fillrand(double arr[ROWS][COLS], const int M, const int N);

//Одномерный массив типа char
void Fillrand(char arr[], const int N);

//Двумерный массив типа char
void Fillrand(char arr[ROWS][COLS], const int M, const int N);

template <typename T>
void Print(T arr[], const int N);

template <typename T>
void Print(T arr[ROWS][COLS], const int M, const int N);

template <typename T>
T Sum(T arr[], const int N);

template <typename T>
T Sum(T arr[ROWS][COLS], const int M, const int N);

template <typename T>
double Avg(T arr[], const int N);

template <typename T>
double Avg(T arr[ROWS][COLS], const int M, const int N);

template <typename T>
T minvaluein(T arr[], const int N);

template <typename T>
T minvaluein(T arr[ROWS][COLS], const int M, const int N);



template <typename T>
T maxvaluein(T arr[], const int N);

template <typename T>
T maxvaluein(T arr[ROWS][COLS], const int M, const int N);

template <typename T>
void Sort(T arr[], const int N);
template <typename T>

void Sort(T arr[ROWS][COLS], const int M, const int N);
template <typename T>
void Shift(T arr[], const int N);
template <typename T>
void Shift(T arr[ROWS][COLS], const int M, const int N);

