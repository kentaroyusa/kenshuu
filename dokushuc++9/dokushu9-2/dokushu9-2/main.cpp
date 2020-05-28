//
//  main.cpp
//  dokushu9-2
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.クラステンプレートを１つ定義し、メンバー関数を定義せよ
 */
/*
 Q2.Q1で定義したテンプレートのメンバー関数の定義を外側に記述せよ
 */

template<typename T>
class A{
public:
    T x;
    T y;
    void show_x(){
        std::cout<<x<<std::endl;
    }
    void show_y();
    template<typename S>
    S devide(){
        S z=x/y;
        return z;
    }
};
template<typename T>
void A<T>::show_y(){
    std::cout<<y<<std::endl;
}
int main() {
    A<int> a{3,4};
    a.show_x();
    a.show_y();
    std::cout<<a.devide<float>()<<std::endl;
}
