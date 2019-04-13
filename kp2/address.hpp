#include <iostream>

using namespace std;

class Address
{
    char *cityName, *streetName;
    int homeNumber;
    
public:
    Address();
    Address(char*, char*, int);
    Address(Address&);
    ~Address();
    
    Address& setCityName(char*);
    Address& setStreetName(char*);
    Address& setHomeNumber(int);
    
    char* getCityName();
    char* getStreetName();
    int getHomeNumber();
    void printFullInfo();
    void printShortInfo();
};

Address::Address()
{
    cityName=new char[50];
    streetName=new char[50];
    strcpy(cityName, "noCityName");
    strcpy(streetName, "noStreetName");
    homeNumber = 0;
    
}

Address::Address(char* sstreetName, char* ccityName, int hhomeNumber)
{
    cityName=new char[strlen(sstreetName) + 1];
    streetName=new char[strlen(ccityName) + 1];
    strcpy(cityName, sstreetName);
    strcpy(streetName, ccityName);
    homeNumber = hhomeNumber;
    
}

Address::Address(Address&address){
    homeNumber = address.homeNumber;
    cityName = new char[strlen(address.cityName) + 1];
    streetName = new char[strlen(address.streetName) + 1];
    strcpy(cityName, address.cityName);
    strcpy(streetName, address.streetName);
};

Address::~Address(){if(cityName) delete[] cityName; if(streetName) delete[] streetName;};

Address& Address::setCityName(char*ccityName){
    delete[] cityName;
    cityName=new char[strlen(ccityName)+1];
    strcpy(cityName, ccityName);
    return *this;
};

Address& Address::setStreetName(char*sstreetName){
    delete[] streetName;
    streetName=new char[strlen(sstreetName)+1];
    strcpy(streetName, sstreetName);
    return *this;
};

Address& Address::setHomeNumber(int hhomenumber){homeNumber=hhomenumber; return *this;};

char* Address::getCityName(){return cityName;};
char* Address::getStreetName(){return streetName;};
int Address::getHomeNumber(){return homeNumber;};

void Address::printFullInfo(){
    cout << "Address is: city name - " << cityName << ", street name - " << streetName << ", home number - " << homeNumber << endl;
};

void Address::printShortInfo(){
    cout << "Class name is Address. City name is " << cityName << ", street is " << streetName << endl;
};
