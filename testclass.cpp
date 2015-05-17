#include "testclass.h"
#include <iostream>


using namespace std;
Foo::Foo(){
    cout<< "Foo has been activated!\n";
    w = new MainWindow;
    w->setWindowTitle("PID Tuner");
    w->show();
}

void Foo::bar(){
    cout << "The home button has been clicked!" <<endl;
}

void Foo::loop(){
    int count = 0;
    while(count <= 1000000){
        cout<< count << " ";
         count++;
    }
}

