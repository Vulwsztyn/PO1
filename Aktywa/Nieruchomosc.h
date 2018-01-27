//
// Created by Artur on 2018-01-27.
//

#ifndef PO1_NIERUCHOMOSC_H
#define PO1_NIERUCHOMOSC_H


#include "../Aktywo.h"

class Nieruchomosc: public Aktywo {
public:
    Nieruchomosc(const std::string &nazwa, double wartosc, double oprocentowanie);
    std::string getTyp() const;
};


#endif //PO1_NIERUCHOMOSC_H
