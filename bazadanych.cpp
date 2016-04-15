#include "bazadanych.h"
BazaDanych* BazaDanych::bd=0;

BazaDanych::BazaDanych()
{

    sql::Driver *driver;
    sql::Connection *con;
    try{
    driver = get_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "root", "admin");
    }catch(...){
        std::cout << "Blad\n" << con << std::endl;
    }

    std::cout << "baza ok\n" << con << std::endl;
}

BazaDanych* BazaDanych::instancja()
{
    if(!bd){
        bd=new BazaDanych;
    }
    return bd;
}

bool BazaDanych::dodajProjekt(z1__temat)
{
    return false;
}

bool BazaDanych::dodajTermin(z1__termin)
{
    return false;
}

bool BazaDanych::zapiszNaProjekt(z1__student student, int projektId)
{
    return false;
}

bool BazaDanych::zapiszNaTermin(z1__student student, int terminId)
{
    return false;
}

string BazaDanych::pobierzProjekt(int id)
{
    return "";
}

string BazaDanych::pobierzTermin(int id)
{
    return "";
}

string BazaDanych::pobierzPrzedmiot(int id)
{
    return "";
}
/*
z1__temat BazaDanych::infoProjekt(int projektId)
{

}

z1__termin BazaDanych::infoTermin(int terminId)
{

}
*/
int BazaDanych::szukajProjekt(z1__temat projekt)
{
    return 0;
}

int BazaDanych::szukajTermin(z1__termin termin)
{
    return 0;
}

int BazaDanych::wolneMiejscaProjekt(int projektId)
{
    return 0;
}

int BazaDanych::wolneMiejscaTermin(int terminId)
{
    return 0;
}

