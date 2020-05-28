//
//  main.cpp
//  dokushu9-10
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.ある特定の条件下で強制的にエラーにするにはどうしたらいいか
 static_assert()を用いる
 */
/*
 Q2.型特性のうち、述語テンプレートをひとつ説明せよ
 std::is_integral<T>::valueはTが整数ならTrue
 */
template <typename T>
class A{
    static_assert(std::is_integral<T>::value,"Not int");
};


int main() {
    A<int> a;
    //A<float> b;
}
