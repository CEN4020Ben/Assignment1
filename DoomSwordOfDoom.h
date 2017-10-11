/* 
 * File:   DoomSwordOfDoom.h
 * Author: Ben
 *
 *
 */

#include <string>
#include "Weapon.h"

#ifndef DOOMSWORDOFDOOM_H
#define DOOMSWORDOFDOOM_H

/**
 * Defines the behavior of a Doom Sword of Doom (hitpoint = 99, 
 * ignores 50% armor)
 */
class DoomSwordOfDoom : public Weapon {
public:

    DoomSwordOfDoom() : Weapon("Doom Sword of Doom!", 99.0) {
    }
    virtual ~DoomSwordOfDoom() {}; 
    virtual double hit(double armor);

};

#endif /* DOOMSWORDOFDOOM_H */

