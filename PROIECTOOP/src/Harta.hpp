//
//  Harta.hpp
//  CTPCLUJ2
//
//  Created by Marian George on 29/05/2019.
//  Copyright © 2019 Marian George. All rights reserved.
//

#ifndef Harta_hpp
#define Harta_hpp
#include <iostream>
using namespace std;
#include <stdio.h>
#include "BazaDateAuto.hpp"
#include <queue>
#include <string>
#include <vector>
#include "Nod.hpp"
class Harta{
private:
    vector<Nod> Graf;
public:
    Harta();
    Harta(vector<Nod>);
    Harta(const Harta&);
    Harta& operator=(const Harta&);
    ~Harta();
    vector<Nod> getGraf();
    vector<string> getvecini(string);
    void setAll(vector<Nod>);
    bool operator==(const Harta&);
    string toString();
    void create(BazaDateAutobuze);
    void addNod(Nod);
    int searchNodWithGivenInfo(string);
    bool searchVecinforGivenNod(string info, string vecin);
    void dijkstra(string start,string stop, vector<int>& dist, vector<string>& drum);
};
#endif /* Harta_hpp */
