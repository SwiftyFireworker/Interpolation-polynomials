//
//  Lagrange form.cpp
//  Interpolation polynomials
//
//  Created by Egor Denisov on 15.09.2021.
//

#include "Lagrange form.hpp"

T getBasisPolynomial(T point, int i, const std::vector<T> & x) {
    T result = 1;
    for (int j = 0; j < x.size(); j++) {
        if (i == j) {
            continue;
        }
        result *= (point - x[j]) / (x[i] - x[j]);
    }
    return result;
}

T useLagrangePolynomial(const std::vector<T>& x,
                        const std::vector<T>& y,
                        const T point) {
    T result = 0;
    for (int i = 0; i < x.size(); i++) {
        result += y[i] * getBasisPolynomial(point, i, x);
    }
    return result;
}
