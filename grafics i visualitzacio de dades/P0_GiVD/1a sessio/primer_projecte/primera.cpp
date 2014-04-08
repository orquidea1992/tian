#include "primera.h"
using namespace miespacio;

Primera::Primera()
{
    x = new int;
    *x=0;
    y = new int;
    *y=0;
}

Primera::Primera(int x, int y){
    this->x=new int;
    *this->x = x;
    this->y=new int;
    *this->y = y;
}

Primera::~Primera(){
    delete x;
    delete y;
}

void Primera::setValues(int x, int y)
{
    *this->x = x;
    *this->y = y;
}
