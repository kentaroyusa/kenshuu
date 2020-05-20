//
//  main.cpp
//  dokushu3-4
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.NSDMIを使うように書き換える
 class vector3d{
     float x;
     float y;
     float z;
 public:
     vector3d();
 };

 vector3d::vector3d():x(0),y(0),z(0){
     
 }

 int main(int argc, const char * argv[]) {

 }
 */

class vector3d{
    float x=0;
    float y=0;
    float z=0;
public:
    float get_x();
    float get_y();
    float get_z();
};

float vector3d::get_x(){
    return x;
}
float vector3d::get_y(){
    return y;
}
float vector3d::get_z(){
    return z;
}

int main(int argc, const char * argv[]) {
    vector3d v;
    std::cout<<v.get_x()<<","<<v.get_y()<<","<<v.get_z()<<std::endl;
}
