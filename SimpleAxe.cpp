/* 
 * File:   SimpleAxe.cpp
 * Author: Ben
 * 
 *
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
    double damage = hitPoints - (armor < 20 && armor > 0 ? 0 : armor);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
