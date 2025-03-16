#include "array.h"

void create1DArray(int A[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
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
bool isPrime(int n){
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}
void selectionSort(int A[], int n){
    for (int i = 0; i < n - 1; i++){
        int minIdx = i;
        for (int j = i + 1; j < n; j++){
            if (A[j] < A[minIdx]){
                minIdx = j;
            }
        }
        Swap(A[i], A[minIdx]);
    }
}

void print1DArray(int A[], int n){
    for (int i = 0; i < n - 1; i++){
        cout << A[i] << ' ';
    }
    cout << A[n - 1];
}
void print2DArray(int A[][MAXLEN], int nRow, int nCol){
    for (int i = 0; i < nRow; i++){
        for (int j = 0; j < nCol; i++){
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
}

// P01
void P01(int A[], int n){
    if (n < 0){
        cout << "0 0";
        return;
    }
    int evenMax = A[0];
    int oddMax = A[0];
    
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            if(A[i] > evenMax) evenMax = A[i];
        }
        else{
            if(A[i] > oddMax) oddMax = A[i];
        }
    }
    cout << evenMax <<" " << oddMax << endl;
}

// P02
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

//P04
void P04(int A[], int n){
    int count = 0;
    int arrPrime[MAXLEN];

    for(int i = 0; i < n; i++){
        if(isPrime(A[i]))
            arrPrime[count++] = A[i];
    }

    cout << count << endl;
    for(int i = 0; i < count; i ++){
        cout << arrPrime[i] << " ";
    }
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

// P06
void P06(int A[], int n){
    bool isIncrease = true;
    bool isDecrease = true;

    for(int i = 0; i < n - 1; i++){
        if (A[i] < A[i + 1]) isDecrease = false;
        if (A[i] > A[i + 1]) isIncrease = false;
    }
    
    if(isIncrease){
        cout << "The array is increasing" << endl;
    }
    else if(isDecrease){
        cout << "The array is decreasing" << endl;
    }
    else cout << "This is normal array" << endl;
}

// P09
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

//P12
int P12(int A[], int n){
    if (n <= 0) return 0;
    int max = A[0];
    int res = A[0];
    for (int i = 0; i < n; i++){
        if (A[i] > max){
            max = A[i];
        }
    }

    for (int i = 0; i < n; i++){
        if (A[i] > res && A[i] != max)
            res = A[i];
    }

    return res;
}

// P15
void P15(int A[], int n){
    int left = 0, right = n - 1;
    while (left < right){
        Swap(A[left++], A[right--]);
    }
}

//P25
void P25(int A[], int B[], int nA, int nB, int C[], int &nC){
    int idxA = 0, idxB = 0, idxC = 0;
    nC = nA + nB;
    while (idxC < nC){
        while (idxA >= nA){
            C[idxC++] = B[idxB++];
        }
        while (idxB >= nB){
            C[idxB++] = A[idxA++];
        }

        if (A[idxA] < B[idxB]){
            C[idxC++] = A[idxA++];
        }
        else{
            C[idxC++] = B[idxB++];
        }
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

//P320
int P320(int A[MAXLEN][MAXLEN], int nRow, int nCol){
    int sum = 0;

    for(int i = 0; i < nRow; i ++){
        for(int j = 0; j < nCol; j ++){
            if(A[i][j]> 0){
                sum += A[i][j];
            }
        }
    }
    
    return sum;
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

//P347
int P347(int A[MAXLEN][MAXLEN], int nRow, int nCol){
    int saddle = 0;
    bool isValid = true;
    for (int i = 0; i < nRow; i++){
        for (int j = 0; j < nCol; j++){
            int maxIRow = A[i][i];
            int minICol = A[i][j];

            // check
            for (int iCol = j; iCol < nCol; iCol++){
                if (A[i][iCol] > maxIRow){
                    isValid = false;
                }
            }

            if (isValid == false){
                continue;;
            }

            for (int iRow = i; iRow < nRow; iRow++){
                if (A[iRow][j] < minICol){
                    isValid = false;
                }
            }
            
            if (isValid == true){
                saddle++;
            }
        
        }
    }


    return saddle;
}

// P398
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

// P402 xoay theo chieu kim dong ho
void P402(int A[MAXLEN][MAXLEN], int &nRow, int &nCol){
    P398(A, nRow, nCol);
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

//P438
int P438(int A[MAXLEN][MAXLEN], int n){
    int sum = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            if(j > i) sum += A[i][j];
        }
    }
    
    return sum;
}

//P457
bool P457(int A[MAXLEN][MAXLEN], int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            if(A[i][j] != A[j][i]) return false;
        }
    }
    return true;
}


bool P458(int A[MAXLEN][MAXLEN], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(A[i][j] != A[n-1-j][n-1-i])
                return false;
        }
    }
    return true;
}

//P471
void P471(int A[MAXLEN][MAXLEN], int B[MAXLEN][MAXLEN], int n, int res[][MAXLEN]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = 0;
            for(int k = 0; k < n; k++){
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
}
