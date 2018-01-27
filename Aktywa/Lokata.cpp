//
// Created by Artur on 2018-01-27.
//

#include "Lokata.h"

Lokata::Lokata(const std::string &nazwa, double wartosc, double oprocentowanie) : Aktywo(nazwa,
                                                                                                    wartosc,
                                                                                                    oprocentowanie) {}


Lokata::Lokata() = default;

std::string Lokata::getTyp() const{
    return "Lokata";
}


