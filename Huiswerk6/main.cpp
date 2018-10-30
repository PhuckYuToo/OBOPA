#include <iostream>
#include "Parent.h"
#include <memory>
//Cannos Urros

//Herschrijf ParentChildPtr
//stap 1:
//  - gebruik unique_ptr voor de Parent -> Child relatie
//  - verifieer of alle children opgeruimd worden

//stap 2:
//  - Maak het Parent object aan als een shared_ptr
//  - maak meerdere kopieen van deze shared_ptr, en toon de reference count

//Canfuncties
void printLine() {
    std::cout << std::endl << "==============================================" << std::endl;
}
void printOpdr(int i) {
    printLine();
    std::cout << "Opdracht " << i << std::endl << "==============================================" << std::endl;
}


int main() {
    std::shared_ptr<Parent> p1 = std::make_shared<Parent>("Parent1");
    //Parent* p1 = new Parent("Parent1");
    std::cout << "P1:" << *p1 << std::endl;
    std::cout << "Ref: " << p1.use_count() << std::endl << std::endl;

    std::shared_ptr<Parent> p2 = p1;
    //Parent* p2 = new Parent(*p1); // roept de copy constructor aan
    std::cout << "P2:" << *p2 << std::endl;
    std::cout << "Ref: " << p2.use_count() << std::endl << std::endl;

    std::shared_ptr<Parent> p3 = std::make_shared<Parent>("Parent3");
    //Parent* p3 = new Parent("Parent3");
    std::cout << "P3:" << *p3 << std::endl;
    std::cout << "Ref: " << p3.use_count() << std::endl << std::endl;

    *p3 = *p1; // roept de assignment operator aan
    std::cout << "P3:" << *p3 << std::endl;
    std::cout << "Ref: " << p1.use_count() << std::endl << std::endl;

    //delete p1;
    //delete p2;
    //delete p3;

    return 0;
}