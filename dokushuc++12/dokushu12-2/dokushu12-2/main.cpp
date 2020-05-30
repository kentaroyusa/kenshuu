//
//  main.cpp
//  dokushu12-2
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//
#include <vector>
#include <iostream>
/*
 Q1.std::vectorのイテレーターの種類を説明せよ
 begin()/end()、cbegin()/cend()、rbegin()/rend()、crbegin()/crend()
 */
/*
 Q2.std::vectorの要素が１から５まで順番に並ぶように初期化せよ
 */
/*
 Q3.Q2の末尾に好きな値を追加せよ
 */

int main() {
    std::vector<int> v = {1,2,3,4,5};
    v.insert(v.end(),6);
    for (auto i:v){
        std::cout<<i<<std::endl;
    }
}
