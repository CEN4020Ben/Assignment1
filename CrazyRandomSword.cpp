/* 
 * File:   CrazyRandomSword.cpp
 * Author: Ben
 * 
 *
 */

#include "CrazyRandomSword.h"

#include <cstdlib>
#include <cmath>

double CrazyRandomSword::hit(double armor) {
    double damage = hitPoints + floor(rand()*90) - floor(rand()*armor/2);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
