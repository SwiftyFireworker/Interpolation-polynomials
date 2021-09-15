//
//  Lagrange form.hpp
//  Interpolation polynomials
//
//  Created by Egor Denisov on 15.09.2021.
//

#ifndef Lagrange_form_hpp
#define Lagrange_form_hpp

#include <iostream>
#include <vector>
#include "Data type.h"

T getBasisPolynomial(T point, int i, const std::vector<T> & x);
T useLagrangePolynomial(const std::vector<T>& x,
                        const std::vector<T>& y,
                        const T point);
#endif /* Lagrange_form_hpp */
