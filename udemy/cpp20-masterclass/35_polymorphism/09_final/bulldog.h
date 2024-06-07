#ifndef BULL_DOG_H
#define BULL_DOG_H

#include "dog.h"

class BullDog : public Dog
{
    BullDog();
    
    virtual ~BullDog();

    // Will throw a compiler error since Dog::run() is final
    /*
    virtual void run() const override
    {
        std::cout << "Bulldog::run() called..." << std::endl;
    }
    */
};

#endif