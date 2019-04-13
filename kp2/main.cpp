//
//  main.cpp
//  kp2
//
//  Created by Anastasiia Latysh on 4/13/19.
//  Copyright © 2019 Anastasiia Latysh. All rights reserved.
//

#include "address_tests.hpp"
#include "exhibit_tests.hpp"

int main(int argc, const char * argv[]) {
    cout << "ADDRESS TESTS:" << endl;
    testCreateAddressWithDefaultConstructor();
    testCreateAddressWithNotDefaultConstructor();
    testCopyAddress();
    
    cout << "EXHIBIT TESTS:" << endl;
    testCreateExhibitWithDefaultConstructor();
    testCreateExhibitWithNotDefaultConstructor();
    testCopyExhibit();
    return 0;
}
