//
//  main.cpp
//  dokushu1
//
//  Created by Kentaro Yusa on 2020/05/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.次のプログラムを動作するよう修正
 int main() {

     std::cout << "hello, message"<<std::endl;
 }

 */

/*
 Q2.浮動小数点数とは何か
 浮動小数点数は小数点をも考慮した広い範囲の数を取り扱える型で、floatで表される
 */

/*
 Q3.else ifを使うメリット
 どの条件の時どの処理をするのかが見やすい
 */
/*
 Q4.何かの文字列を格納し、ループを使って１行に１文字ずつ表示する
 */
int main() {
    //Q1
    std::cout << "hello, message"<<std::endl;
    
    //Q2
    char string[]="hello,world";
    for(int i=0;i < sizeof(string);i++){
        std::cout << string[i] <<std::endl;
    }
}
