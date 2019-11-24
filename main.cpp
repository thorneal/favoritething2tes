//main cpp to initiate and be home of the program
#include <iostream>
#include <string>
#include "favoriteclass.h"
#include "favoritelist.h"
using namespace std;

int main()
{
    favorite iobject1;
    iobject1.getfavoriteInput();
    cout << iobject1 << endl;

    favoritelist myList;
    myList.AddItem();
    myList.AddItem();
    myList.AddItem();

    myList.showList();

//ability for user to add input to list and add their favorites
    
    system("pause");
    return 0;
}
