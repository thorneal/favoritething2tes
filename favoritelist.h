#pragma once
#include <iostream>
#include <string>
#include "favoritelist.h"
using namespace std;
//support page for file saving
class favoritelist
{
    //no more than 100 to save
    favorite dogs[100];
    int numItems;
    int totalfavorite;
public:
    favoritelist();
    void AddItem();
    void showList();
    int readFromFile(string filename);
    int writeToFile(string filename);
};
