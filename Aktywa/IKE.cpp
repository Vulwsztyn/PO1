//
// Created by Artur on 2018-01-27.
//

#include "IKE.h"

IKE::IKE(const std::string &nazwa, double wartosc, double oprocentowanie) : KontoEmerytalne(nazwa,
                                                                                                       wartosc,
                                                                                                       oprocentowanie) {}

std::string IKE::getTyp() const {
    return "IKE";
}