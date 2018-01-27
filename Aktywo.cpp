//
// Created by Artur on 2018-01-26.
//

#include "Aktywo.h"

const std::string &Aktywo::getNazwa() const {
    return nazwa;
}

void Aktywo::setNazwa(const std::string &nazwa) {
    Aktywo::nazwa = nazwa;
}

double Aktywo::getWartosc() const {
    return wartosc;
}

void Aktywo::setWartosc(double wartosc) {
    Aktywo::wartosc = wartosc;
}

double Aktywo::getOprocentowanie() const {
    return oprocentowanie;
}

void Aktywo::setOprocentowanie(double oprocentowanie) {
    Aktywo::oprocentowanie = oprocentowanie;
}

Aktywo::Aktywo(const std::string &nazwa, double wartosc, double oprocentowanie) : nazwa(nazwa),
                                                                                             wartosc(wartosc),
                                                                                             oprocentowanie(
                                                                                                     oprocentowanie) {}

double Aktywo::getWartoscPoX(int x) const {
    double w=wartosc;
    for(int i=0;i<x;i++) w*=(1+oprocentowanie/100);
    return w;
}

Aktywo::Aktywo() = default;

//std::string Aktywo::getTyp()const {
//    return "Aktywa";
//}

