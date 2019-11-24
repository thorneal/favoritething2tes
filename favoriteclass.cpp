//public class
#include <iostream>
#include <string>
#include "favoriteclass.h"
using namespace std;
//listing indentifiers for favorite types of dogs, breed, weight, and colors`
favorite::favorite()
{
    dog = 0;
    breed = 0;
    weight = 0;
    colors = "";
}
favorite::favorite(int i, string n, double c, int q)
{
    dog = i;
    breed = q;
    weight = c;
    colors = n;
}
int favorite::getdog()
{
    return dog;
}
string favorite::getcolors()
{
    return colors;
}
double favorite::getweight()
{
    return weight;
}
int favorite::getbreed()
{
    return breed;
}
void favorite::setdog(int i)
{
    dog = i;
}
void favorite::setcolors(string n)
{
    colors = n;
}
void favorite::setweight(double c)
{
    weight = c;
}
void favorite::setbreed(int q)
{
    breed = q;
}

void favorite::getfavoriteInput()
{
    cout << "Hello! Welcome to my page where I have listed my favorite dogs. Starting iwth a pitbull. They are typicall grey,white,tan,or black and anywhere from 30-60 pounds. Use this site to create a list of your favorite dogs. Enter your favorite type of dog" << endl;
    cin >> dog;
    cout << "enter breed " << endl;
    cin >> breed;
    cout << "enter typical weight " << endl;
    cin >> weight;
    cin.ignore();
    cout << "enter type their typical colors" << endl;
    getline(cin, colors, '\n');
}

ostream& operator<<(ostream &output, favorite &i)
{
    output << "List of Dogs: " << i.dog << endl;
    output << "|" << i.weight << "|" << i.breed << "|" << i.colors << endl;
    return output;
}
