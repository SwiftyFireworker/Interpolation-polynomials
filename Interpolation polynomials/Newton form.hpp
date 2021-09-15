//
//  Newton form.hpp
//  Interpolation polynomials
//
//  Created by Egor Denisov on 15.09.2021.
//

#ifndef Newton_form_hpp
#define Newton_form_hpp

#include <iostream>
#include <vector>
#include "Data type.h"

T getDividedDifference(std::vector<T>::const_iterator xBegin, std::vector<T>::const_iterator xEnd,
                       std::vector<T>::const_iterator yBegin, std::vector<T>::const_iterator yEnd);

T useNewtonPolynomial(const std::vector<T>& x,
                      const std::vector<T>& y,
                      const T point);

#endif /* Newton_form_hpp */
