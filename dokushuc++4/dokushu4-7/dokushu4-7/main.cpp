//
//  main.cpp
//  dokushu4-7
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.module 名前空間を用意し、名前空間とグローバル空間のどちらにも同じ名前の関数を定義し、main関数から呼び分ける
 
 namespace module{
 void func(){
     std::cout<<"module func"<<std::endl;
 }
 }

 void func(){
     std::cout<<"globle func"<<std::endl;
 }

 int main(int argc, const char * argv[]) {
     ::func();
     module::func();
 }
 */
/*
 Q2.Q1のプログラムを修正し、main関数でusingを使って関数名だけでmodule名前空間の関数が呼ばれるようにせよ
 */
/*
 Q3.複数ソースファイルで、同じ名前空間の変数をそれぞれ別の用途で使用したいときどうすれば良いか
 無名名前空間で定義する
 */
namespace module{
void func(){
    std::cout<<"module func"<<std::endl;
}
}

int main(int argc, const char * argv[]) {
    using module::func;
    func();
}
