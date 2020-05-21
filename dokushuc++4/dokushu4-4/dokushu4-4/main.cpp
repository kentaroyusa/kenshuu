//
//  main.cpp
//  dokushu4-4
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.使っているコンパイラーが初期化構文付き条件分岐に対応しているか確認せよ
 対応している
 */
/*
 Q2.初期化構文付き条件分岐の利点
 戻り値を変数に格納する処理と条件分岐を一行にかける
 */
/*
 Q3.次のプログラムで何が表示されるか
 */
int main() {
    int i =42;
    if(int i  = 0 ; i>0 ){
        std::cout<<i<<std::endl;
    }
    else{
        std::cout<<i<<std::endl;
    }
}
