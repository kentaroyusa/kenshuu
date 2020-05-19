//
//  main.cpp
//  dokushu2
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.vector3dclassの作成
 Q2.外部アクセスするためのgetter/setterの追加
 Q3.コンソールからx,y,zの三つの整数を入力し、vector3dのインスタンスに格納
 Q4.x,y,zからvector3dを作って返すset()関数の作成
 Q5.ラムダ式にキャプチャに=と書いた場合どのようなことが行われるか
 defaltのキャプチャとなり使用されている変数をそのまま使える
 */
using integer = int;

class vector3d{
    integer x;
    integer y;
    integer z;
public:
    integer get_x();
    void set_x(integer new_x);
    integer get_y();
    void set_y(integer new_y);
    integer get_z();
    void set_z(integer new_z);
};

integer vector3d::get_x(){
    return x;
};
void vector3d::set_x(integer new_x){
    x=new_x;
};
integer vector3d::get_y(){
    return y;
};
void vector3d::set_y(integer new_y){
    y=new_y;
};
integer vector3d::get_z(){
    return z;
};
void vector3d::set_z(integer new_z){
    z=new_z;
};

vector3d set(integer x,integer y,integer z){
    vector3d v;
     v.set_x(x);
     v.set_y(y);
     v.set_z(z);
    return v;
};

vector3d set(integer x,integer y){
    vector3d v;
     v.set_x(x);
     v.set_y(y);
     v.set_z(0);
    return v;
};
void get(vector3d v){
    std::cout<<"("<<v.get_x()<<","<<v.get_y()<<","<<v.get_z()<<")"<<std::endl;
};



int main() {
    vector3d v;
    integer x,y,z;
    std::cout << "x方向成分の入力>" << std::endl;
    std::cin>>x;
    std::cout << "y方向成分の入力>" << std::endl;
    std::cin>>y;
    std::cout << "z方向成分の入力>" << std::endl;
    std::cin>>z;
    v=set(x,y,z);
    get(v);
    
    
}
