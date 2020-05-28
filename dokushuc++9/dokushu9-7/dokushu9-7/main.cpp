//
//  main.cpp
//  dokushu9-7
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.常にconst参照で引数を受け取る関数テンプレートを定義せよ
 */
/*
 Q2.フォワーディング参照を使って左辺値と右辺値の両方を受け取れる関数テンプレートを定義せよ
 */
/*
 Q3.完全転送を行うために必要な関数を説明せよ
 std::move()
 */

template <typename T>
void show(const T& value){
    std::cout<<"左辺値："<<value<<std::endl;
}
template <typename T>
void show(const T&& value){
    std::cout<<"右辺値："<<value<<std::endl;
}
template <typename T>
void move(T&& value){
    show(std::move(value));
}

int main() {
    int i=20;
    show<int>(i);
    show<int>(0);
    move(i);
}
