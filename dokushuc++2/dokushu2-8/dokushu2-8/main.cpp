//
//  main.cpp
//  dokushu2-8
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.show_valueをラムダ式でかけ
 void show_value(int v){
     std::cout<< v << std::endl;
 }

 int main(int argc, const char * argv[]) {
     auto show_value [](){
         
     }
     show_value(42);
 }

 */
/*
 Q2.ラムダ式の戻り値の型を推論できない場合、ラムダ式本体をどのように変更すれば戻り値の型を省略できるか
 returnを用いる
 Q3.関数内部の変数を変更するキャプチャはどのようなキャプチャか
 lamuda[&a]()のように参照を使用する
 */
int main() {
    
    auto show_value = [](int v)->void
    {
        std::cout<< v << std::endl;
    };
    
    show_value(42);
}
