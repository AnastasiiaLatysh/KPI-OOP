#include <iostream>
#include "address.hpp"

using namespace std;

void testCreateAddressWithDefaultConstructor(){
    cout << "_________________________________________" << endl;
    cout << endl << "Test started" << endl;
    Address addressWithDefeaultConstructor;
    addressWithDefeaultConstructor.printFullInfo();
    addressWithDefeaultConstructor.printShortInfo();
    cout << "_________________________________________" << endl;
    cout << endl << "Test ended" << endl;
}

void testCreateAddressWithNotDefaultConstructor(){
    char cityName[20];
    char streetName[20];
    int homeNumber;
    
    cout << "_________________________________________" << endl;
    cout << endl << "Test started" << endl;
    cout << "Enter address info as cityName streetName homeNumber" << endl;
    cin >> cityName >> streetName >> homeNumber;
    Address addressWithParamsConstructor(cityName, streetName, homeNumber);
    addressWithParamsConstructor.printFullInfo();
    addressWithParamsConstructor.printShortInfo();
    cout << "_________________________________________" << endl;
    cout << endl << "Test ended" << endl;
}

void testCopyAddress(){
    char cityName[20];
    char streetName[20];
    int homeNumber;
    
    cout << "_________________________________________" << endl;
    cout << endl << "Test started" << endl;
    cout << "Enter address info as cityName streetName homeNumber" << endl;
    cin >> cityName >> streetName >> homeNumber;
    Address addressWithParamsConstructor(cityName, streetName, homeNumber);
    addressWithParamsConstructor.printFullInfo();
    addressWithParamsConstructor.printShortInfo();
    
    cout << "Data of copied address is: " << endl;
    Address copiedAddress(addressWithParamsConstructor);
    copiedAddress.printFullInfo();
    copiedAddress.printShortInfo();
    cout << "_________________________________________" << endl;
    cout << endl << "Test ended" << endl;
}
