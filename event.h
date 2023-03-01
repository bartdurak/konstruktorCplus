//
// Created by fed36 on 2/26/23.
//

#ifndef OBJEKTOWY3_EVENT_H
#define OBJEKTOWY3_EVENT_H

#endif //OBJEKTOWY3_EVENT_H
#include <iostream>

using namespace std;
class Event
{
private:
//nie trzeba wpisywać przywate: bo nie wpissanie nieczego oznacza że dane są prywatne
    int day, mounth, year;
    int hour, minutes;
    string name;
public:

    //Event(string, int, int,int, int,int);
    Event(string="wracamy po rekolekcjach do nauki", int=2, int=3, int=2023, int=8, int=0);
    ~Event();
   void load();
   void show();

};
