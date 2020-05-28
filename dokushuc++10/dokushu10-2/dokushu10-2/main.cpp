//
//  main.cpp
//  dokushu10-2
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.全ての例外を捕まえるcatch説について説明せよ
 具体的な例外の型は分からないが、全ての例外をとらえる
 */
/*
 Q2.以下のプログラムを実行したらどうなるか
 libc++abi.dylib: terminating with uncaught exception of type int
 (lldb)
 noexceptなのに例外処理を返しているため
 */
void foo()noexcept{
    throw 0;
}
int main() {
    try{
        foo();
    }
    catch(int e){
        std::cout<<"catch:"<<e<<std::endl;
    }
}
