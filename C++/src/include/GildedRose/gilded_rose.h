#ifndef GILDEDROSE_GILDED_ROSE_H
#define GILDEDROSE_GILDED_ROSE_H

#include <string>

class GildedRose
{
    std::string _name;
    int _days_remaining;
    int _quality;

public:
    GildedRose(const std::string &name, int days_remaining, int quality);
    void tick();
    int days_remaining();
    int quality();
};

#endif //GILDEDROSE_GILDED_ROSE_H
