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

using T = double;

int main() {
    int n = 0;
    std::cout << "Enter number of points:" << std::endl;
    std::cin >> n;
    std::cout << std::endl;
    
    std::vector<T> x(n), y(n);
    std::cout << "Enter points x_i, f(x_i):" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> x[i] >> y[i];
        assert(std::find(x.begin(), x.begin() + i, x[i]) == x.begin() + i);
        
    }
    std::cout << std::endl;
    
    T point = 0;
    
    std::cout << "Enter point:" << std::endl;
    std::cin >> point;
    std::cout << std::endl;
    std::cout << "Newton's result: " << useNewtonPolynomial(x, y, point) << std::endl;
    std::cout << "Lagrange result: " << useLagrangePolynomial(x, y, point) << std::endl;
    
    
    return 0;
}
