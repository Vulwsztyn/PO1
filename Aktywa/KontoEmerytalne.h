//
// Created by Artur on 2018-01-27.
//

#ifndef PO1_KONTOEMERYTALNE_H
#define PO1_KONTOEMERYTALNE_H


#include "../Aktywo.h"

class KontoEmerytalne: public Aktywo {
public:
    KontoEmerytalne(const std::string &nazwa, double wartosc, double oprocentowanie);

};


#endif //PO1_KONTOEMERYTALNE_H
