#pragma once
#include<iostream>

using namespace std;
 void P01(int a[], int n){
    int so_chan_max = -100;
    int so_le_max = -101;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0 ){
            if(a[i] > so_chan_max) so_chan_max = a[i];
            
        }
    }
}