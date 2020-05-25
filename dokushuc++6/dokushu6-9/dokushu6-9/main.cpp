//
//  main.cpp
//  dokushu6-9
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.演算子をフレンド関数としてオーバーロードした方がいいのはどのような場合か
 二項演算子で右辺にオブジェクトがある場合
 */
/*
 Q2.練習問題6.2のプログラムの演算子をフレンド関数として定義しなおせ
 */
#include <iostream>
class Float{
    float value;
public:
    explicit Float(float value):value(value){}
    friend Float operator+(const Float& lhs,float rhs);
    friend Float operator+(float lhs,const Float& rhs);
    friend Float operator+(const Float& lhs,const Float& rhs);
    friend Float operator-(const Float& lhs,float rhs);
    friend Float operator-(float lhs,const Float& rhs);
    friend Float operator-(const Float& lhs,const Float& rhs);
    friend Float operator*(const Float& lhs,float rhs);
    friend Float operator*(float lhs,const Float& rhs);
    friend Float operator*(const Float& lhs,const Float& rhs);
    friend Float operator/(const Float& lhs,float rhs);
    friend Float operator/(float lhs,const Float& rhs);
    friend Float operator/(const Float& lhs,const Float& rhs);
    void show() const{std::cout<<value<<std::endl;}
};

Float operator+(const Float& lhs,float rhs){
    return Float{lhs.value+rhs};
}
Float operator+(float lhs,const Float& rhs){
    return Float{lhs+rhs.value};
}
Float operator+(const Float& lhs,const Float& rhs){
    return Float{lhs.value+rhs.value};
}
Float operator-(const Float& lhs,float rhs){
    return Float{lhs.value-rhs};
}
Float operator-(float lhs,const Float& rhs){
    return Float{lhs-rhs.value};
}
Float operator-(const Float& lhs,const Float& rhs){
    return Float{lhs.value-rhs.value};
}
Float operator*(const Float& lhs,float rhs){
    return Float{lhs.value*rhs};
}
Float operator*(float lhs,const Float& rhs){
    return Float{lhs*rhs.value};
}
Float operator*(const Float& lhs,const Float& rhs){
    return Float{lhs.value*rhs.value};
}
Float operator/(const Float& lhs,float rhs){
    return Float{lhs.value/rhs};
}
Float operator/(float lhs,const Float& rhs){
    return Float{lhs/rhs.value};
}
Float operator/(const Float& lhs,const Float& rhs){
    return Float{lhs.value/rhs.value};
}
int main() {
    Float x{10.2};
    Float y{2.3};
    auto a=x+y;
    auto a1=2.4+y;
    auto a2=x+3.2;
    auto b=x-y;
    auto c=x*y;
    auto d=x/y;
    a.show();
    a1.show();
    a2.show();
    b.show();
    c.show();
    d.show();
}

