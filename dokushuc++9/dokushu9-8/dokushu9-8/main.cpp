//
//  main.cpp
//  dokushu9-8
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.ネストした型名が依存名の時どうすれば良いか
 typename Vector::floのようにする
 */
/*
 Q2.エイリアステンプレートを使うことでtypenameが不要になることを確認せよ
 */
struct vector2d{
    using flo=float;
    float x;
    float y;
};
template <typename Vector>
typename Vector::flo
product(const Vector& lhs,const Vector& rhs){
    return lhs.x*rhs.x+lhs.y*rhs.y;
}
template <typename Vector>
using fl=typename Vector::flo;

template <typename Vector>
fl<Vector> add_x(const Vector& lhs,const Vector& rhs){
    return lhs.x+rhs.x;
}

int main() {
    vector2d a{10,20};
    vector2d b{20,30};
    std::cout<<product<vector2d>(a,b)<<std::endl;
    std::cout<<add_x<vector2d>(a,b)<<std::endl;
    
}
