//
//  main.cpp
//  dokushu12
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.ある位置を指すイテレーターから、そのイテレーターより前のイテレーターを取得できないイテレーターの種類を列挙せよ
 ・入力イテレーター
 1. !=（比較演算子）で比較できる（first != last）
 2. 間接演算子で要素を参照できる（*first）
 3. インクリメント演算子で次の要素を示す（++first）

 ・出力イテレーター
 1.3.に加え
 4. 間接演算子によって要素を書き換えられること

 ・順方向イテレーター
 1-4をすべて満たす

 */
/*
 Q2.std::vectorの先頭と末尾以外の要素をどれかひとつ削除せよ
 */
/*
 Q3.構造化束縛を使ってタプルを生成せよ
 C++１７に対応しておらず、実現不可能
 */
/*
 Q4.std::multisetはstd::setに比べてどのような違いがあるか
 要素の重複を許すか許さないか
 */
/*
 Q5.コンテナの先頭の要素と同じ値を持つ要素の個数を数えよ、なお先頭の要素は個数に含めない
 */
#include <iostream>
#include <vector>
#include <algorithm>

void show_v(std::vector<int> v){
    for(auto e:v){
        std::cout<<e;
    }
    std::cout<<std::endl;
}

int main() {
    //Q2
    std::vector<int> v{1,2,3,4,5};
    auto iter=v.begin()+2;
    advance(iter,1);
    v.erase(iter);
    show_v(v);
    
    //Q5
    std::vector<int> v5{1,2,3,4,5,1,1,2,3,6,5,2,1,2};
     auto iter5=v5.begin();
    std::cout<<std::count(v5.begin() , v5.end() , *iter5 )<<std::endl;
    
}
