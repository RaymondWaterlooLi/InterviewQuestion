//
// Created by Raymond Li on 2019-02-05.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

double myPow(double x, int n) {
    if (n == 1){
        return x;
    }
    else if (n == -1){
        return (1 / x);
    }
    else if (n == 0) {
        return 1;
    }
    else if (n % 2 == 0) {
        double res = myPow(x, n / 2);
        return res * res;
    }
    else {
        double res;
        if (n > 0) {
            res = myPow(x, (n - 1) / 2);
            return x * res * res;
        }
        else {
            res = myPow(x, (n + 1) / 2);
            return (1/x) * res * res;
        }
    }
}