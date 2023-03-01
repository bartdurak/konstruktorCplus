//
// Created by fed36 on 2/26/23.
#include <iostream>
#include "event.h"
using namespace std;

void Event::load()
{
    cout << endl << "Nazwa wydarzenia: ";
    cin>> name;
    cout<<endl<< "Dzień: ";
    cin>>day;
    cout << endl<< "Miesiąc: ";
    cin>> mounth;
    cout << endl<< "Rok";
    cin>> year;
    cout<< endl<< "Godzina: ";
    cin>> hour;
    cout<< endl<< "Minut:";
    cin>> minutes;
}
void Event::show()
{
 cout<< endl<<name<<" "<<day<<"."<<mounth<<"."<<year<<" "<<hour<<"."<<minutes<<endl;
}
Event::Event(string n, int d, int m, int y, int h, int mins)
{
name=n;
day=d;
mounth=m;
year=y;
hour=h;
minutes=mins;
}
Event::~Event()
{
    cout<<endl<< " To ja destruktor się nazywam , kasuje co popaddnie ";
    cout<< endl<<" Było miło ale się skończyło";
}

