/* 
 * File:   SIMPLEAXE.h
 * Author: Ben
 *
 *
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, ignores <20 
 * armor points)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple axe", 60.0) {
    }
    virtual ~SimpleAxe() {}; 
    virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */

