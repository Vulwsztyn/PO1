//
// Created by Artur on 2018-01-27.
//

#include "Nieruchomosc.h"

Nieruchomosc::Nieruchomosc(const std::string &nazwa, double wartosc, double oprocentowanie) : Aktywo(nazwa,
                                                                                                                wartosc,
                                                                                                                oprocentowanie) {}

std::string Nieruchomosc::getTyp() const {
    return "Nieruchomość";
}


