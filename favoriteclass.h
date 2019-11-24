//favorite header class
#pragma once
#include <iostream>
#include <string>
//making a class of favorite type's of dogs so the user can input their favorite type of dog with the breed,colors, and typical weight. Then to create an inventory of all the good doggos.
using namespace std;
//private favorite class


class favorite
{
private:
    int dog; //pitbull
    string colors; //grey,tan,black
    double weight; //30-60lbs
    int breed; //pitbull
  //end private class
    
    // start private class
public:
    favorite();
    favorite(int i, string n, double c, int q);
    int getdog();
    string getcolors();
    double getweight();
    int getbreed();
    void setdog(int i);
    void setcolors(string n);
    void setweight(double c);
    void setbreed(int q);
    void getfavoriteInput();
    friend ostream& operator<<(ostream &output, favorite &i);
};

//end class 
