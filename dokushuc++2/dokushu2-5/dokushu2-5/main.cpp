//
//  main.cpp
//  dokushu2-5
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>


/*
 Q1.出来るだけ長いクラスを作り、そのクラスに短い別名を与えよ
 Q2.ネストした型名を持つクラスを作り、その型を持つメンバー変数を、getter/setterを定義せよ
 */

class dokushu2020konamikadai{
    int value;
public:
    int get_value();
};

using data = dokushu2020konamikadai;

int data::get_value(){
    return value;
}

int main() {

}
