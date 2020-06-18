//
//  main.cpp
//  dokushu3-1again
//
//  Created by Kentaro Yusa on 2020/06/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
using namespace std;
class A{
    int v;
public:
    void set(int value);
    int get();
    int get()const;
};


void A::set(int value){
    v=value;
}
int A::get(){
    return v+1;
}

int A::get()const{
    return v;
}


int main() {
    A a;
    a.set(42);
    cout<<a.get()<<endl;
    const A& ca=a;
    cout<<ca.get()<<endl;
}
