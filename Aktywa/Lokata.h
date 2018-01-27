//
// Created by Artur on 2018-01-27.
//

#ifndef PO1_LOKATA_H
#define PO1_LOKATA_H


#include "../Aktywo.h"

class Lokata: public Aktywo {
public:
    Lokata(const std::string &nazwa, double wartosc, double oprocentowanie);

    Lokata();

    std::string getTyp() const;
};


#endif //PO1_LOKATA_H
