//
//  main.cpp
//  dokushu5-9
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.関数ポインターを用いて、関数を呼び出せ
 */
/*
 Q2.高階関数とは何か
 関数ポインターや関数リファレンスを引数、戻り値としてもつ関数
 */
int identity(int v){
    return v;
}

int square(int v){
    return v*v;
}

int main() {
    int (*func)(int)=&identity;
    std::cout<<func(4)<<std::endl;
    func=&square;
    std::cout<<func(4)<<std::endl;
}
