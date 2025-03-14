#include "array.h"

void create1DArray(int A[], int &n){
    cin >> n;
    for (int i = 0; i < MAXLEN; i++){
        cin >> A[i];
    }
}
void create2DArray(int A[][MAXLEN], int &nRow, int &nCol){
    for (int i = 0; i < nRow; i++){
        for (int j = 0; j < nCol; j++){
            cin >> A[i][j];
        }
    }
}
bool isEven(int n){
    return (n % 2 == 0) ? true : false;
}
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

float P02(int A[], int n){
    float sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        if (A[i] % 2 == 0){
            sum += A[i];
            count++;
        }
    }

    return sum / count;
}

void P05(int A[], int n){
    for (int i = 0; i < n - 1; i++){
        int minIdx = i;
        if (isEven(A[i])){
            for (int j = i + 1; j < n; j++){
                if (isEven(A[j]) && A[j] < A[minIdx]){
                    minIdx = j;
                }
            }
            Swap(A[minIdx], A[i]);
        }
    }
}

int P09(int A[], int n){
    int count = 0;
    bool isExist = false;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (A[j] == A[i]){
                isExist = true;
                break;
            }
        }
        if (isExist == false){
            count++;
        }
        isExist = false;
    }

    return count;
}

void P15(int A[], int n){
    int left = 0, right = n - 1;
    while (left < right){
        Swap(A[left++], A[right--]);
    }
}

void P26(int A[], int B[], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (B[j] == A[i]){
                cout << A[i] << " ";
            }
        }
    } 
}

int P342(int A[][MAXLEN], int nRow, int nCol){
    int count = 0;
    int idxRowAround[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int idxColAround[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    int n = 0, numIdxAround = 9;

    for (int i = 0; i < nRow; i++){
        for (int j = 0; j < nCol; j++){

            for (int idx = 0; i < 9; i++){
                int iRow = i + idxRowAround[i];
                int iCol = j + idxColAround[j];
                if (iRow < 0 || iRow >= nRow || iCol < 0 || iCol >= nCol){
                    numIdxAround--;
                    continue;
                }

                if (A[i][j] > A[iRow][iCol]){
                    n++;
                }
            }
            
            if (n == numIdxAround){
                count++;
            }
        }
    }

    return count;
}

void P398(int A[][MAXLEN], int &nRow, int &nCol){
    int newRow = nCol, newCol = nRow;
    int newArr[MAXLEN][MAXLEN];
    for (int i = 0; i < newRow; i++){
        for (int j = 0; j < newCol; j++){
            newArr[i][j] = A[nRow - 1 - j][i];
        }
    }

    for (int i = 0; i < newRow; i++){
        for (int j = 0; j < newCol; j++){
            A[i][j] = newArr[i][j];
        }
    }
}

void P423(int A[][MAXLEN], int nRow, int nCol){
    int top = 0, bot = nRow - 1;
    int left = 0, right = nCol - 1;
    int size1DArr = nRow + nCol;
    int arr1D[MAXLEN];
    int idx = 0;

    for (int i = 0; i < nRow; i++){
        for (int j = 0; j < nCol; j++){
            size1DArr = A[i][j];
        }
    }

    for (int i = 0; i < size1DArr - 1; i++){
        int minIdx = i;
        for (int j = i + 1; j < size1DArr; i++){
            if (arr1D[j] < arr1D[minIdx]){
                minIdx = j;
            }
        }
        Swap(arr1D[minIdx], arr1D[i]);
    }

    while (left <= right && top <= bot){
        for (int i = left; i <= right; i++) A[top][i] = arr1D[idx++];
        top++;
        for (int j = top; j <= bot; j++) A[j][right] = arr1D[idx++];
        right--;
        
        if (top <= bot){
            for (int i = right; i >= left; i--) A[bot][i] = arr1D[idx++];
            bot--;
        }
        if (left <= right){
            for (int j = bot; j >= top; j++) A[j][left] = arr1D[idx++];
        }
    }
}