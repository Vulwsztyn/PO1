#include <iostream>
#include "Portfel.h"
#include "Aktywo.h"
#include "Aktywa/Lokata.h"
#include "Aktywa/Kontrakt.h"
#include "Aktywa/Nieruchomosc.h"
#include "Aktywa/IKE.h"
#include "Aktywa/IKZE.h"
void dodaj(Portfel<Aktywo*> &portfel){
    std::cout<<"Wybierz rodzaj aktywów, które chcesz dodać:\n1 - Lokata\n2 - Kontrakt\n3 - Nieruchomość\n4 - IKE\n5 - IKZE\n";
    int dodawane;
    double wartosc,oprocentowanie;
    std::string nazwa;
    std::cin>>dodawane;
    std::cout<<"Podaj nazwę aktyw:\n";
    std::cin>>nazwa;
    std::cout<<"Podaj wartość aktyw:\n";
    std::cin>>wartosc;
    std::cout<<"Podaj oprocentowanie aktyw (5.6% to 5.6):\n";
    std::cin>>oprocentowanie;

switch(dodawane){
    case 1:{
        portfel+= new Lokata(nazwa,  wartosc, oprocentowanie);
        break;}
    case 2:{
        portfel+= new Kontrakt(nazwa,  wartosc, oprocentowanie);
        break;}
    case 3:{
        portfel+= new Nieruchomosc(nazwa,  wartosc, oprocentowanie);
        break;}
    case 4:{
        portfel+= new IKE(nazwa,  wartosc, oprocentowanie);
        break;}
    case 5:{
        portfel+= new IKZE(nazwa,  wartosc, oprocentowanie);
        break;}
    default:
        std::cout<<"Proszę wybierz poprawną liczbę\n";
}
}

void wyswietl(Portfel<Aktywo*> portfel){
    std::cout<<"\n------------------------------------------\n\n";
    for(int i=0;i<portfel.getPosiadane().size();i++){
        Aktywo* a=portfel.getPosiadane()[i];
        std::cout<<i<<" "<<a->getTyp()<<" "<<a->getNazwa()<<" wartość: "<<a->getWartosc()<<"zł; oprocentowanie: "<<a->getOprocentowanie()<<"%; wartość po 10 latach: "<<a->getWartoscPoX(10)<<std::endl;
    }
    std::cout<<"\n------------------------------------------\n\n";
}

void usun(Portfel<Aktywo*> &portfel){
    wyswietl(portfel);
    std::cout<<"Podaj indeks elementu do usunięcia:\n";
    int index;
    std::cin>>index;
    portfel-=index;
}

void edytuj(Portfel<Aktywo*> &portfel){
    wyswietl(portfel);
    std::cout<<"Podaj indeks elementu do edycji:\n";
    int index;
    double wartosc,oprocentowanie;
    std::string nazwa;
    std::cin>>index;
    Aktywo* a=portfel.getPosiadane()[index];
    std::cout<<"Podaj nową nazwę aktyw:\n";
    std::cin>>nazwa;
    std::cout<<"Podaj nową wartość aktyw:\n";
    std::cin>>wartosc;
    std::cout<<"Podaj nowe oprocentowanie aktyw (5.6% to 5.6):\n";
    std::cin>>oprocentowanie;
    a->setNazwa(nazwa);
    a->setWartosc(wartosc);
    a->setOprocentowanie(oprocentowanie);
}
int main() {
    Portfel<Aktywo*> portfel;
    portfel+= new Lokata("lok",  400, 6.7);
    portfel+= new Kontrakt("kon",  403, 3);
    portfel+= new Nieruchomosc("nier",  345, 6.700000001);
    portfel+= new IKE("ike",  1, 6.7845);
    portfel+= new IKZE("ikze",  2, 5.7);
    while(!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!false){
        std::cout<<"Wybierz rodzaj akcji:\n1 - dodaj Aktywa\n2 - usuń Aktywa\n3 - edytuj Aktywa\n4 - wyświtl Aktywa\n5 - zamknij program\n";
        int mode;
        std::cin>>mode;
        switch(mode){
            case 1:
                dodaj(portfel);
                break;
            case 2:
                usun(portfel);
                break;
            case 3:
                edytuj(portfel);
                break;
            case 4:
                wyswietl(portfel);
                break;
            case 5:
                return 0;
            default:
            std::cout<<"Proszę wybierz poprawny tryb\n";
        }
    }

}