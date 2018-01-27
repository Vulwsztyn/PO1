//
// Created by Artur on 2018-01-26.
//

#ifndef PO1_PORTFEL_H
#define PO1_PORTFEL_H

#include <vector>

template <class T>
class Portfel {
private:
    std::vector<T> posiadane;

public:
    double podajWartosc(){
     return 5.7;
    };

    const std::vector<T> &getPosiadane() const {
        return posiadane;
    }


    Portfel& operator+=(T a){
     posiadane.push_back(a);
    };
    Portfel& operator-=(int i){
     posiadane.erase(posiadane.begin()+i);
    };
};


#endif //PO1_PORTFEL_H
