//
//  main.cpp
//  dokushu6-2
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
 /*
  Q1.浮動小数点を扱うクラスFloatを定義して、Float同士で加減算できるように演算子をオーバーロードせよ
  */
/*
 Q2.Q1で作成したものに乗除算の演算子オーバーロードを追加せよ
 */
class Float{
    float value;
public:
    Float(float value):value(value){}
    Float operator+(const Float& other) const;
    Float operator-(const Float& other) const;
    Float operator*(const Float& other) const;
    Float operator/(const Float& other) const;
    void show() const{std::cout<<value<<std::endl;}
};

Float Float::operator+(const Float& other) const{
    return value+other.value;
}
Float Float::operator-(const Float& other) const{
    return value-other.value;
}
Float Float::operator*(const Float& other) const{
    return value*other.value;
}
Float Float::operator/(const Float& other) const{
    return value/other.value;
}
int main() {
    Float x=10.2;
    Float y=2.3;
    auto a=x+y;
    auto b=x-y;
    auto c=x*y;
    auto d=x/y;
    a.show();
    b.show();
    c.show();
    d.show();
}
