//
//  main.cpp
//  dokushu2again
//
//  Created by Kentaro Yusa on 2020/06/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
using namespace std;

class vector3d{
public:
    using integer=int;
private:
    integer x;
    integer y;
    integer z;
public:
    void set_v(integer a,integer b,integer c){
        x=a;
        y=b;
        z=c;
    }
    integer get_x(){
        return x;
    }
    integer get_y(){
        return y;
    }
    integer get_z(){
        return z;
    }
};

vector3d set(vector3d::integer x,vector3d::integer y,vector3d::integer z){
    vector3d v;
    v.set_v(x, y, z);
    return v;
}
vector3d set(vector3d::integer x,vector3d::integer y){
    vector3d v;
    v.set_v(x, y, 0);
    return v;
}

void show(vector3d v){
    cout<<v.get_x()<<" "<<v.get_y()<<" "<<v.get_z()<<endl;
}

int main() {
    using integer=vector3d::integer;
    integer x,y,z;
    cout<<"Insert x,y,z:"<<endl;
    cin>>x>>y>>z;
    
    vector3d v;
    v.set_v(x, y, z);
    show(v);
    
    vector3d v1=set(x,y);
    show(v1);
    
}
