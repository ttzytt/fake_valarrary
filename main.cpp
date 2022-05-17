#include "fake_valarray.hpp"
#include <bits/stdc++.h>
int main(){
    Mask_array<int, 10> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    Mask_array<int, 10> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    (a[a == 2]) = 114514;    
    
    for (int i = 0; i < 10; i++) {
        std::cout << a.data[i] << std::endl;
    }
}