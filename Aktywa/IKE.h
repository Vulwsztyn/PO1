//
// Created by Artur on 2018-01-27.
//

#ifndef PO1_IKE_H
#define PO1_IKE_H


#include "KontoEmerytalne.h"

class IKE: public KontoEmerytalne {
public:
    IKE(const std::string &nazwa, double wartosc, double oprocentowanie);
    std::string getTyp() const;

};


#endif //PO1_IKE_H
