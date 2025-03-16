#pragma once
#include <iostream>
#include <cmath>

using namespace std;

#define MAXLEN 10000

void create1DArray(int A[], int &n);
void create2DArray(int A[][MAXLEN], int &nRow, int &nCol);
void create2DArrayFloat(double A[][MAXLEN], int &nRow, int &nCol);
bool isEven(int n);
void Swap(int &a, int &b);
void selectionSort(int A[], int n);
void print1DArray(int A[], int n);
void print2DArray(int A[], int nRow, int nCol);
bool isPrime(int n);
void inputP25_26(int A[], int B[], int C[], int &nA, int &nB, int &nC);



void P01(int A[], int n);
float P02(int A[], int n);
void P04(int A[], int n);
void P05(int A[], int n);
void P06(int A[], int n);
int P09(int A[], int n);
int P12(int A[], int n);
void P15(int A[], int n);
void P25(int A[], int B[], int nA, int nB, int C[], int &nC);
void P26(int A[], int B[], int nRow, int nCol);
int P320(double A[][MAXLEN], int nRow, int nCol);
int P342(double A[][MAXLEN], int nRow, int nCol);
int P347(int A[][MAXLEN], int nRow, int nCol);
void P398(int A[][MAXLEN], int &nRow, int &nCol);
void P402(int A[][MAXLEN], int &nRow, int &nCol);
void P423(int A[][MAXLEN], int nRow, int nCol);
int P438(int A[][MAXLEN], int n);
bool P458(int A[][MAXLEN], int n);
bool P457(int A[][MAXLEN], int n);
void P471(int A[][MAXLEN], int B[][MAXLEN], int n, int res[][MAXLEN]);