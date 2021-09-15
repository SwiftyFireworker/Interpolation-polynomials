//
//  Newton form.cpp
//  Interpolation polynomials
//
//  Created by Egor Denisov on 15.09.2021.
//

#include "Newton form.hpp"

T getDividedDifference(std::vector<T>::const_iterator xBegin, std::vector<T>::const_iterator xEnd,
                    std::vector<T>::const_iterator yBegin, std::vector<T>::const_iterator yEnd) {
    if (xEnd - xBegin == 1) {
        return *yBegin;
    }
    
    if (xEnd - xBegin == 2) {
        return (*(yEnd - 1) - *yBegin) / (*(xEnd - 1) - *xBegin);
    }
    
    return (getDividedDifference(xBegin + 1, xEnd, yBegin + 1, yEnd) -
            getDividedDifference(xBegin, xEnd - 1, yBegin, yEnd - 1)) / (*(xEnd - 1) - *xBegin);
}

T useNewtonPolynomial(const std::vector<T>& x, const std::vector<T>& y,
                      const T point) {
    T result = y[0];
    
    T coeff = 1;
    for (int i = 1; i < x.size(); i++) {
        coeff *= (point - x[i - 1]);
        result += coeff * getDividedDifference(x.cbegin(), x.cbegin() + i + 1,
                                            y.cbegin(), y.cbegin() + i + 1);
    }
    
    return result;
}
