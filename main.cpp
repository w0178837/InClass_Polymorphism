//driver.cpp file

#include <iostream>
#include <typeinfo>
#include "Vehicle.h"
#include "Boat.h"
#include "Bicycle.h"

// prototypes
void withoutCasting();
void sliceExample();
void upCasting();
void downCasting();
void typeIdExample();
void polyExample();

int main() {

//     withoutCasting();
//     sliceExample();
//     upCasting();
//     downCasting();
//     typeIdExample();
     polyExample();

    return 0;
}

void withoutCasting(){
    Bicycle myBike;

    Boat myBoat;

    cout << myBike.blowHorn() << endl;

    cout << myBoat.blowHorn() << endl;

    cin.ignore();

}

void sliceExample(){
    Bicycle myBike;

    Vehicle v1 = myBike; // implicit upcast (causes slicing)

    cout << myBike.blowHorn() << endl;

    cout << v1.blowHorn() << endl;

}

void upCasting(){
    auto *pV = new Vehicle;
    auto *pBicycle = new Bicycle;
    auto *pBoat = new Boat;
    pV = pBicycle; // upcast
    cout<<pV->blowHorn() << endl;
    cin.ignore();

}

void downCasting(){
    Vehicle *pV = new Boat;
    Bicycle *pBic = dynamic_cast<Bicycle*>(pV); // donwcat
    cout << "pBoat " << (long)pBic << endl;
    Boat *pBoat = dynamic_cast<Boat*>(pV);
    cout << "pBoat " << (long)pBoat << endl;

}

void typeIdExample(){
    Vehicle *pV = new Boat;
    if(typeid(Bicycle) == typeid(*pV))
        cout << "pv references a bicycle" << endl;
    if(typeid(Boat)== typeid(*pV))
        cout << "pV references a boat" << endl;
}

void polyExample(){
    Vehicle *pV = new Vehicle;
    Bicycle *pBic = new Bicycle;
    Boat *pBoat = new Boat;

    // make an array of type vehicle
//    Vehicle *pVArray[2]; // declared on stack
    Vehicle **pVArray = new Vehicle*[2]; // declared on heap

    pVArray[0] = (Vehicle*)pBic; // expl upcast
    pVArray[1] = (Vehicle*)pBoat;

    for(int i=0;i<2;i++)
    {
        cout << pVArray[i]->blowHorn() << endl;
    }
}