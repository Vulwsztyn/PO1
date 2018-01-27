//
// Created by Artur on 2018-01-26.
//

#ifndef PO1_AKTYWA_H
#define PO1_AKTYWA_H

#include <iostream>
#include <conio.h>

class Aktywo {
public:
    Aktywo();

private:
    std::string nazwa;
    double wartosc;
    double oprocentowanie;

public:
     virtual std::string getTyp()const=0;

    Aktywo(const std::string &nazwa, double wartosc, double oprocentowanie);

    const std::string &getNazwa() const;

    void setNazwa(const std::string &nazwa);

    double getWartosc() const;

    double getWartoscPoX(int x) const;

    void setWartosc(double wartosc);

    double getOprocentowanie() const;

    void setOprocentowanie(double oprocentowanie);
};


#endif //PO1_AKTYWA_H
