//
// Created by Artur on 2018-01-27.
//

#include "IKZE.h"

IKZE::IKZE(const std::string &nazwa, double wartosc, double oprocentowanie) : KontoEmerytalne(nazwa,
                                                                                                         wartosc,
                                                                                                         oprocentowanie) {}

std::string IKZE::getTyp() const {
    return "IKZE";
}
