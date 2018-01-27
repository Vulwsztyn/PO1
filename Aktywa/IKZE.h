   //
// Created by Artur on 2018-01-27.
//

#ifndef PO1_IKZE_H
#define PO1_IKZE_H


#include "KontoEmerytalne.h"

class IKZE: public KontoEmerytalne {
public:
    IKZE(const std::string &nazwa, double wartosc, double oprocentowanie);
    std::string getTyp() const;
};


#endif //PO1_IKZE_H
