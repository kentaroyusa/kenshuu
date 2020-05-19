//
//  main.cpp
//  dokushu2-4
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.型推論して変数宣言するには何が必要だったでしょう
 原則として初期値が必要だが、範囲for文などは例外
 
 Q2.次のプログラムのeは何型に推論されるか
 int main() {
     int array[]={5,4,3,2,1};
     for (auto e : array){
         std::cout<< e << std::endl;
     }
 }
 
 int型
 */

int main() {
    int array[]={5,4,3,2,1};
    for (auto e : array){
        std::cout<< e << std::endl;
    }
}
/*
 Q3.decltypeを使うと何から型が推測できるか
 任意の式の型から推測できる
 */
