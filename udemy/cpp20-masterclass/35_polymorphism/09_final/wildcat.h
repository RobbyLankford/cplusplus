#ifndef WILD_CAT_H
#define WILD_CAT_H

#include "cat.h"

// Will not work as Cat is final and cannot be derived from
//class WildCat : public Cat
class WildCat
{
    public:
        WildCat();
        
        ~WildCat();
};

#endif