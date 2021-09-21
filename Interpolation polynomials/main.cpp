//
//  main.cpp
//  Interpolation polynomials
//
//  Created by Egor Denisov on 15.09.2021.
//

#include <iostream>
#include <vector>
#include <assert.h>
#include <algorithm>
#include "Newton form.hpp"
#include "Lagrange form.hpp"
#include "Data type.h"


void readData(int & n, std::vector<T> & x, std::vector<T> & y) {
    std::cout << "Enter number of points:\n";
    std::cin >> n;
    x.resize(n);
    y.resize(n);
    
    std::cout << "\nEnter points x_i, f(x_i):\n";
    for (int i = 0; i < n; i++) {
        std::cin >> x[i] >> y[i];
        assert(std::find(x.begin(), x.begin() + i, x[i]) == x.begin() + i);
    }
}


int main() {
    int n = 0;
    std::vector<T> x, y;
    readData(n, x, y);
    
    T point = 0;
    while (true) {
        std::cout << std::endl;
        std::cout << "Enter point: ";
        std::cin >> point;
        std::cout << "Newton's result: " << useNewtonPolynomial(x, y, point) << std::endl;
        std::cout << "Lagrange result: " << useLagrangePolynomial(x, y, point) << std::endl;
    }
    
    return 0;
}
