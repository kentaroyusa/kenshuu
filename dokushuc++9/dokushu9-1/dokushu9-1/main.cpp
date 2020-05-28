//
//  main.cpp
//  dokushu9-1
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.任意の型の引数をひとつ受け取りそれをそのまま返すテンプレート、id()関数を定義せよ
 */
/*
 Q2.Q1で定義したid()関数を様々な型で呼び出せ
 */
template <typename T>
T id(T n){
    return n;
}

int main() {
    std::cout<<id<int>(3)<<std::endl;
    std::cout<<id<double>(3.4)<<std::endl;
    std::cout<<id<char>('e')<<std::endl;

}
