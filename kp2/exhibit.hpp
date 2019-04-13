#include <iostream>

using namespace std;

class Exhibit
{
    char *name;
    int length, width;
    Address address;
    
public:
    Exhibit();
    Exhibit(char*, int, int, Address);
    Exhibit(Exhibit&);
    ~Exhibit();
    
    Exhibit& setName(char*);
    Exhibit& setLength(int);
    Exhibit& setWidth(int);
    Exhibit& setAddress(Address);
    
    char* getName();
    int getLength();
    int getWidth();
    Address * getAddress();
    
    void printFullInfo();
    void printShortInfo();
};

Exhibit::Exhibit()
{
    name=new char[20];
    strcpy(name, "noExhibitName");
    width = 0;
    length = 0;
    address = *new Address();
}

Exhibit::Exhibit(char* nName, int wWidth, int lLength, Address aAddress)
{
    name=new char[strlen(nName) + 1];
    strcpy(name, nName);
    width = wWidth;
    length = lLength;
    address = * new Address(aAddress);
}

Exhibit::Exhibit(Exhibit&exhibit){
    width = exhibit.width;
    length = exhibit.length;
    name = new char[strlen(exhibit.name) + 1];
    strcpy(name, exhibit.name);
    address = exhibit.address;
};

Exhibit::~Exhibit()
{
    if(this->address.getCityName())
        this->address = * new Address;
    
    if(name) delete[] name;
};

Exhibit& Exhibit::setName(char*nName){
    delete[] name;
    name=new char[strlen(nName)+1];
    strcpy(name, nName);
    return *this;
};
Exhibit& Exhibit::setWidth(int wWidth){ width = wWidth; return *this;};
Exhibit& Exhibit::setLength(int lLength){ length = lLength; return *this;};
Exhibit& Exhibit::setAddress(Address aAddress){address = aAddress; return *this;};


char* Exhibit::getName(){return name;};
int Exhibit::getWidth(){return width;};
int Exhibit::getLength(){return length;};
Address * Exhibit::getAddress(){return &address;};

void Exhibit::printFullInfo(){
    cout << endl<< "Exhibit is: name - " << name << ", width - " << width << ", length - " << length << endl;
    cout << "Address of exibit is: " << endl;
    address.printFullInfo();
};

void Exhibit::printShortInfo(){
    cout << endl << "Class name is Exibit. Name is " << name << endl;
    cout << "Address of exibit is: " << endl;
    address.printShortInfo();
};
