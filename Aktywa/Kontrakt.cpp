//
// Created by Artur on 2018-01-27.
//

#include "Kontrakt.h"

Kontrakt::Kontrakt(const std::string &nazwa, double wartosc, double oprocentowanie) : Aktywo(nazwa,
                                                                                                        wartosc,
                                                                                                        oprocentowanie) {}

std::string Kontrakt::getTyp() const {
    return "Kontrakt";
}

