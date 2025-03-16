#include "array.cpp"

int main(){
    int choice;
    int A[MAXLEN], B[MAXLEN], C[MAXLEN], nA, nB, nC, n;
    double D[MAXLEN][MAXLEN];
    int E[MAXLEN][MAXLEN], F[MAXLEN][MAXLEN], G[MAXLEN][MAXLEN];
    int nRow, nCol, nRow1, nCol1;
    do{
        cout << "Menu:\n"
             << "1. P01\n"
             << "2. P02\n"
             << "3. P04\n"
             << "4. P05\n"
             << "5. P06\n"
             << "6. P09\n"
             << "7. P12\n"
             << "8. P15\n"
             << "9. P15\n"
             << "10. P26\n"
             << "11. P320\n"
             << "12. P342\n"
             << "13. P347\n"
             << "14. P398\n"
             << "15. P402\n"
             << "16. P423\n"
             << "17. P438\n"
             << "18. P457\n"
             << "19. P458\n"
             << "20. P471\n"
             << "Nhap lua chon: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;
        // case 1:
        //     create1DArray(A, n);
        //     P01(A, n);
        //     break;
        // case 2:
        //     create1DArray(A, n);
        //     cout << P02(A, n);
        //     break;
        // case 3:
        //     create1DArray(A, n);
        //     P04(A, n);
        //     break;
        // case 5:
        //     create1DArray(A, n);
        //     P06(A, n);
        //     break;
        // case 6:
        //     create1DArray(A, n);
        //     cout << P09(A, n);
        //     break;
        // case 7:
        //     create1DArray(A, n);
        //     cout << P12(A, n);
        //     break;
        // case 8:
        //     create1DArray(A, n);
        //     P15(A, n);
        //     print1DArray(A, n);
        //     break;
        // case 9:
        //     inputP25_26(A, B, C, nA, nB, nC);
        //     P25(A, B, nA, nB, C, nC);
        //     print1DArray(C, nC);
        //     break;
        // case 10:
        //     inputP25_26(A, B, C, nA, nB, nC);
        //     P26(A, B, nA, nB);
        //     break;
        // case 11:
        //     create2DArrayFloat(D, nRow, nCol);
        //     cout << P320(D, nRow, nCol);
        //     break;
        // case 12:
        //     create2DArrayFloat(D, nRow, nCol);
        //     cout << P342(D, nRow, nCol);
        //     break;
        // case 13:
        //     create2DArray(E, nRow, nCol);
        //     cout << P347(E, nRow, nCol);
        //     break;
        // case 14:
        //     create2DArray(E, nRow, nCol);
        //     P398(E, nRow, nCol);
        //     print2DArray(E, nRow, nCol);
        //     break;
        // case 15:
        //     create2DArray(E, nRow, nCol);
        //     P402(E, nRow, nCol);
        //     print2DArray(E, nRow, nCol);
        //     break;
        // case 16:
        //     create2DArray(E, nRow, nCol);
        //     P423(E, nRow, nCol);
        //     print2DArray(E, nRow, nCol);
        //     break;
        // case 17:
        //     create2DArray(E, nRow, nCol);
        //     cout << P438(E, nRow);
        //     break;
        // case 18:
        //     create2DArray(E, nRow, nCol);
        //     cout << boolalpha << P457(E, nRow);
        //     break;
        // case 19:
        //     create2DArray(E, nRow, nCol);
        //     cout << boolalpha << P458(E, nRow);
        //     break;
        // case 20:
        //     create2DArray(E, nRow, nCol);
        //     create2DArray(F, nRow1, nCol1);
        //     P471(E, F, nRow, G);
        //     print2DArray(G, nRow, nCol);
        //     break;
        default:
            cout << "Please enter from 0 - 20!";
            break;
        }

    } while (choice != 0);

    return 0;
}