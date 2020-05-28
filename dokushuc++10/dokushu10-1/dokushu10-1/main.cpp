//
//  main.cpp
//  dokushu10-1
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.tryブロックを使わずに例外を投げて、プログラムが異常終了することを確かめろ
 */
/*
 Q2.Q1にtryブロックを追加せよ
 */

int main() {
    try {
        throw 1.2f;
    }
    catch(int e){
       std::cout<<"int"<<std::endl;
    }
    catch(float e){
        std::cout<<"float"<<std::endl;
    }
}
