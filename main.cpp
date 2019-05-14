#include <iostream>
#include <list>
#include <fstream>

using namespace std;

string clothType[6] = {
        "Pantaloni",
        "Rochii",
        "Camasi",
        "Paltoane",
        "Gegci",
        "Costume"
};

class cloth {

    int weight, clothType, washTemp;
    bool color;

public:
    cloth();
    cloth(int, int, int, bool);
    ~cloth();
    int stance;
     friend ostream& operator<< (ostream& os, const cloth& obj);


};

cloth::cloth(int weight, int clothType, int washTemp, bool color) {
    this->weight = weight;
    this->clothType = clothType;
    this->washTemp = washTemp;
    this->color = color;
}
cloth::cloth() {}
cloth::~cloth() {}

ostream& operator<< (ostream& os, const cloth& obj)
{
    return os;
}

class washingMachine{
    int maxWeight, workTime;
};



int main() {

    fstream f("date.in");
    list <cloth> cloths;

    int x,y,z;
    bool a;

    for(int i=0; i<3;i++)
    {
        f>>x>>y>>z>>a;
        cloth temp(x,y,z,a);
        cloths.push_back(temp);
    }




    return 0;
}