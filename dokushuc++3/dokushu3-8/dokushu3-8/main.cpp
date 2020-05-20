//
//  main.cpp
//  dokushu3-8
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.フレンド関数はメンバー関数/非メンバー関数のどちらか
 非メンバー関数
 Q2.以下のプログラムのvector3dの二つを受けて減算を行うsub関数をフレンド関数として定義する
 */
class vector3d{
    float x;
    float y;
    float z;
public:
    vector3d();
    explicit vector3d(float x,float y,float z);
    friend vector3d add(const vector3d& lhs,const vector3d& rhs);
    friend vector3d sub(const vector3d& lhs,const vector3d& rhs);
    void dump() const;
};

vector3d::vector3d():x(0),y(0),z(0){
}
vector3d::vector3d(float x,float y,float z):x(x),y(y),z(z){
}

vector3d add(const vector3d& lhs,const vector3d& rhs){
    vector3d result;
    result.x=lhs.x + rhs.x;
    result.y=lhs.y + rhs.y;
    result.z=lhs.z + rhs.z;
    return result;
}

void vector3d::dump()const{
    std::cout<<x<<","<<y<<","<<z<<std::endl;
}

//Q2
vector3d sub(const vector3d& lhs,const vector3d& rhs){
    vector3d result;
    result.x=lhs.x - rhs.x;
    result.y=lhs.y - rhs.y;
    result.z=lhs.z - rhs.z;
    return result;
}



int main() {
    vector3d a(1,1,1),b(1,2,3);
    vector3d c=add(a,b);
    c.dump();
    vector3d d=sub(a,b);
    d.dump();
}
