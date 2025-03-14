#pragma once
#include<iostream>

using namespace std;
#define MAXLEN 10000

void create1DArray(int A[], int &n);
void create2DArray(int A[][MAXLEN], int &nRow, int &nCol);
bool isEven(int n);
void Swap(int &a, int &b);

float P02(int A[], int n);
void P05(int A[], int n);
int P09(int A[], int n);
void P15(int A[], int n);
void P26(int A[], int B[], int n, int m);
int P342(int A[][MAXLEN], int nRow, int nCol);
void P398(int A[][MAXLEN], int &nRow, int &nCol);
void P423(int A[][MAXLEN], int nRow, int nCol);