//
//  main.cpp
//  dokushu9-5
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.関数の戻り値の型にautoを使うとどうなるか
暗黙変換規則に従った値の型になる
 */
/*
 Q2.関数テンプレートのテンプレートパラメータを指定せずに、型推論を使って関数テンプレートを呼び出せ
 */
/*
 Q3.クラステンプレートを関数の仮引数にせよ、この時クラステンプレートのテンプレートパラメータは関数呼び出しから型推論できるようにせよ
 */
//Q2
template <typename T>
T add(T a,T b){
    return a+b;
}

//Q3
template<typename A>
struct B{
    A value;
};

template <typename A>
A get_value(B<A> b){
    return b.value;
}

int main() {
    //Q2
    std::cout<<add(2.5,2.3)<<std::endl;
    
    //Q3
    B<int> b{42};
    std::cout<<get_value(b)<<std::endl;
}
