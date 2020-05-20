//
//  main.cpp
//  dokushu3
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.エラーの原因は何か
 class A{
 public:
     A(const A& other);
 };
 A::A(const A& other){
 }
 int main() {
     A a;
 }
 
 コンストラクターを生成していない
 class A{
 public:
     A();
     A(const A& other);
 };
 A::A(){
 }
 A::A(const A& other){
 }
 int main() {
     A a;
 }
 */

/*
 Q2.次のクラスをNSDMIを用いた形にせよ
 class vector3d{
     float x;
     float y;
     float z;
 public:
     vector3d();
     vector3d(float x,float y);
     vector3d(float x,float y,float z);
 };
 vector3d::vector3d():x(0),y(0),z(0){
 }
 vector3d::vector3d(float x,float y):x(x),y(y){
 }
 vector3d::vector3d(float x,float y,float z):x(x),y(y),z(z){
 }

 int main() {
     vector3d a;
 }
 
//Q2
 class vector3d{
     float x=0;
     float y=0;
     float z=0;
 public:
     vector3d();
     vector3d(float x,float y);
     vector3d(float x,float y,float z);
 };
 vector3d::vector3d(){}
 vector3d::vector3d(float x,float y):x(x),y(y){
 }
 vector3d::vector3d(float x,float y,float z):x(x),y(y),z(z){
 }

 int main() {
     vector3d a;
 }
 
 Q3.適当なメンバー関数を持つクラスから派生し、名前の隠蔽を回避しつつオーバーロードを追加せよ
 Q4.フレンド関数はクラスのプライベートメンバーにアクセスできることを示す
 Q5.constメンバー関数からstaticメンバーを変更できることを示す
 */
class vector2d{
    int x=0;
    int y=0;
public:
    vector2d();
    vector2d(int x,int y);
    int get_x();
    int get_y();

};
vector2d::vector2d(){}
vector2d::vector2d(int x,int y):x(x),y(y){}
int vector2d::get_x(){
    return x;
}
int vector2d::get_y(){
    return y;
}
 
class shape{
public:
    virtual int area() =0;
};

class square:public shape{
    static int count;
    vector2d v;
public:
    square(vector2d v);
    int area() override;
    friend int sum(vector2d v);
    void count_reset() const;
    int get_count();
};

    int square::count=0;

square::square(vector2d v):v(v){
    count++;
}
void square::count_reset()const{
    count=0;
}
int square::get_count(){
    return count;
}

int square::area(){
    return v.get_x() * v.get_y();
}
int sum(vector2d v){
    return v.get_x()+v.get_y();
}

int main() {
    vector2d a(3,4);
    square s(a);
    std::cout<<s.area()<<","<<sum(a)<<std::endl;
    std::cout<<s.get_count()<<std::endl;
    s.count_reset();
    std::cout<<s.get_count()<<std::endl;

}
