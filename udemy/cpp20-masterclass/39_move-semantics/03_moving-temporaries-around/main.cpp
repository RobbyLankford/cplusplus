#include <iostream>

#include "boxcontainer.h"

void populate_box(BoxContainer<int> &box, int modifier)
{
    for (size_t i {0}; i < 20; i++)
        box.add((i + 1) * modifier);
}

BoxContainer<int> make_box(int modifier)
{
    BoxContainer<int> local_int_box(20);
    populate_box(local_int_box, modifier);

    return local_int_box;
}

int main()
{
    BoxContainer<int> box_array[2];

    for (size_t i {0}; i < 2; i++)
    {
        // Copy assignment operator called at each iteration...
        // Copying data from the temporary and throwing the temporary away
        box_array[i] = make_box(i + 1);
    }

    return 0;
}
