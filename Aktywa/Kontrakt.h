//
// Created by Artur on 2018-01-27.
//

#ifndef PO1_KONTRAKT_H
#define PO1_KONTRAKT_H


#include "../Aktywo.h"

class Kontrakt: public Aktywo {
public:
    Kontrakt(const std::string &nazwa, double wartosc, double oprocentowanie);
    std::string getTyp() const;
};


#endif //PO1_KONTRAKT_H
