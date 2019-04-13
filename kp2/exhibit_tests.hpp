#include <iostream>
#include "exhibit.hpp"

using namespace std;

void testCreateExhibitWithDefaultConstructor(){
    cout << "_________________________________________" << endl;
    cout << endl << "Test started" << endl;
    Exhibit exhibitWithDefeaultConstructor;
    exhibitWithDefeaultConstructor.printFullInfo();
    exhibitWithDefeaultConstructor.printShortInfo();
    cout << endl << "Test ended" << endl;
    cout << "_________________________________________" << endl;
}


void testCreateExhibitWithNotDefaultConstructor(){
    char name[20];
    int width, length;
    Address address;
    char addressCityName[20];
    char addressStreetName[20];
    int addressHomeNumber;
    
    cout << "_________________________________________" << endl;
    cout << endl << "Test started" << endl;
    
    cout << "Enter exhibit info as name width length" << endl;
    cin >> name >> width >> length;
    Exhibit exhibitWithParamsConstructor(name, width, length, address);
    
    cout << "Enter address info of exhibit as as cityName streetName homeNumber" << endl;
    cin >> addressCityName >> addressStreetName >> addressHomeNumber;
    exhibitWithParamsConstructor.getAddress()->setCityName(addressCityName);
    exhibitWithParamsConstructor.getAddress()->setStreetName(addressStreetName);
    exhibitWithParamsConstructor.getAddress()->setHomeNumber(addressHomeNumber);
    
    exhibitWithParamsConstructor.printFullInfo();
    exhibitWithParamsConstructor.printShortInfo();
    
    cout << endl << "Test ended" << endl;
    cout << "_________________________________________" << endl;
}

void testCopyExhibit(){
    char name[20];
    int width, length;
    Address address;
    char addressCityName[20];
    char addressStreetName[20];
    int addressHomeNumber;
    
    cout << "_________________________________________" << endl;
    cout << endl << "Test started" << endl;
    
    cout << "Enter exhibit info as name width length" << endl;
    cin >> name >> width >> length;
    Exhibit exhibitWithParamsConstructor(name, width, length, address);
    
    cout << "Enter exhibit address info as as cityName streetName homeNumber" << endl;
    cin >> addressCityName >> addressStreetName >> addressHomeNumber;
    exhibitWithParamsConstructor.getAddress()->setCityName(addressCityName);
    exhibitWithParamsConstructor.getAddress()->setStreetName(addressStreetName);
    exhibitWithParamsConstructor.getAddress()->setHomeNumber(addressHomeNumber);
    
    exhibitWithParamsConstructor.printFullInfo();
    
    cout << endl << "Data of copied exhibit is: " << endl;
    Exhibit copiedExhibit(exhibitWithParamsConstructor);
    copiedExhibit.printFullInfo();
    
    cout << endl << "Test ended" << endl;
    cout << "_________________________________________" << endl;
}
