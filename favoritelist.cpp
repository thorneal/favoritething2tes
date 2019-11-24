#include <iostream>
#include <string>
#include <fstream>
#include "favoriteclass.h"
#include "favoritelist.h"
using namespace std;

favoritelist::favoritelist()
{
    numItems = 0;
    totalfavorite = 0;
}
void favoritelist::AddItem()
{
    dogs[numItems].getfavoriteInput();
    totalfavorite += dogs[numItems].getbreed();
    numItems++;

}
void favoritelist::showList()
{
    int i;
    for (i = 0; i < numItems; i++)
    {
        cout << dogs[i];
    }
    cout << "total quantity of all item is" << totalfavorite << endl;
}
//asking user if they would like to store favorites to a seperate file
int favoritelist::writeToFile(string filename)
{
    int i;
    ofstream outputFile;
    outputFile.open(filename, ios::app);
    if (!outputFile)
    {
        cout << "ERRROR - file open failed!" << endl;
        return -2;
    }
    for (i = 0; i < numItems; i++)
    {
        outputFile << dogs[i].getdog() << "|";
        outputFile << dogs[i].getbreed() << "|";
        outputFile << dogs[i].getcolors() << "|";
        outputFile << dogs[i].getweight() << "|" << endl;
    }
    outputFile.close();
    return 0;
}

int favoritelist::readFromFile(string filename)
{
    ifstream inputFile;
    inputFile.open(filename, ios::in);
    if (!inputFile)
    {
        cout << "ERROR: could not open file" << endl;
        return -2;
    }

    //create a place to temporaryly store files
    int id;
    string name;
    double cost;
    int qty;
    string inputstring;
    while (!inputFile.eof())
    {
        // reading from the file
        getline(inputFile,inputstring, '|');
        if (inputstring.length() >= 1)
        {
            id = stoi(inputstring);
            getline(inputFile, name, '|');
            getline(inputFile, inputstring, '|');
            cost = stod(inputstring);
            getline(inputFile, inputstring, '|');
            qty = stoi(inputstring);
            getline(inputFile, inputstring, '\n');

            // adding to list
            dogs[numItems].setdog(<#int i#>)(id);
            dogs[numItems].setbreed(<#int q#>)(name);
            dogs[numItems].setcolors(<#string n#>)(cost);
            dogs[numItems].setweight(<#double c#>)(qty);
            numItems++;
           totalfavorite += qty;
        }
    }
    
    inputFile.close();
    return 0;
}
