#include"array.h"
#include<math.h>

// P01
void P01(int a[], int n){
    int even_max = -100;
    int odd_max = -101;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            if(a[i] > even_max) even_max = a[i];
        }
        else{
            if(a[i] > odd_max) odd_max = a[i];
        }
    }
    cout << even_max <<" " << odd_max << endl;
}

//P04
bool isPrime(int n){
    if (n <= 1) return false;
    if (n <= 3) return true;
    for (int i = 2; i <= sqrt(n); i ++)
        if (n % i )
            return false;
}

void P04(int a[], int n){
    int count = 0;
    int b[n];
    for(int i = 0; i < n; i++){
        if(isPrime(a[i]))
            b[count] = a[i];
            count++;
    }
    cout << count << endl;
    for(int i = 0; i < count; i ++){
        cout << b[i] << " ";
    }
}

// P06
void P06(int a[], int n){
    bool ham_tang = true;
    bool hamg_giam = true;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i- 1]) hamg_giam = false;
    }
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]) ham_tang = false;
    }
    if(ham_tang){
        cout << "Ham tang" << endl;
    }
    else if(hamg_giam){
        cout << "Ham giam" << endl;
    }
    else cout << "Khong tang khong giam" << endl;
}

//P12

void sortMang(int a[], int n){
    for(int i = 1; i < n; i ++){
        int key = a[i];
        int j = i- 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
void P12(int a[], int n){
    sortMang(a, n);
    cout << a[n-2]<< endl;
}

//P25
void P25(int a[], int b[], int na, int nb, int c[], int nc){
    int i = 0, j = 0, k = 0;
    while(i < na || j < nb ){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++, k++;
        }
        else{
            c[k] = b[j];
            k++, j++
        }
    }
    while(i < na){
        a[i] = c[k];
        i++, k++
    }
    while(j < nb){
        b[j] = c[k];
        j++, k++;
    }
    for(int i = 0; i < nc; i ++){
        cout << c[i] << " ";
        cout << endl;
    }
}

//P320
void P320(double a[max][max], int m, int n){
    int sum = 0;
    for(int i = 0; i < m; i ++){
        for(int j =0; j < n; j ++){
            if(a[i][j]> 0) sum += a[i][j];
        }
    }
    cout << sum << endl;
}

//P347
void P347(int a[max][max], int m, int n) {
    int yenNgua = 0;

    for(int i = 0; i < m; i++){
        int hangMax = a[i][0];
        int cotmax  = 0;
        for(int j = 1; j < n; j++ ){
            if(a[i][j] > hangMax){
                hangMax = a[i][j];
                cotmax = j;
            }
        }

        bool flag = true;
        for(int k = 0; k < m; k++){
            if(a[k][cotmax] < hangMax){
                flag = false;
                break;
            }
        }
        if(flag) yenNgua++;
    }

    cout << yenNgua << endl;
}
// P402 xoay theo chieu kim dong ho
void P402(int a[max][max], int m, int n){
    int b[n][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            b[j][m - 1 - i] = a[i][j];
        }
    }

}

//P438
void P438(int a[,max][max], int n){
    int sum = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            if(j > i) sum += a[i][j];
        }
    }
    cout << sum << endl;
}

bool P458(int a[max][max], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[n-1-j][n-1-i])
                return false;
        }
    }
    return true;
}

//P471
void P471(int a[max][max], int n){
    int b[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                b[i][j] += a[i][k] * a[k][i];
            }
        }
    }
}
//P457
bool P457(int a[max][max], int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            if(a[i][j] != a[j][i]) return false;
        }
    }
    return true;
}

