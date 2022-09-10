//
// Created by rivaldo on 9/10/22.
//

#ifndef _MIA_P1_201900956_USERS_H
#define _MIA_P1_201900956_USERS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class users {
public:
    users();
    bool login(string user, string pass);
};

#endif //_MIA_P1_201900956_USERS_H