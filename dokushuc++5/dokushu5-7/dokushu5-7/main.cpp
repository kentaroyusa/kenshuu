//
//  main.cpp
//  dokushu5-7
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.以下のプログラムの問題は何か
 int& function(){
     int value=0;
     return value;
 }

 int main() {
     int& value = function();
     value=10;
 }
 
 function()内にvalueの宣言をしている
 int value=0;
 int& function(){
     
     return value;
 }

 int main() {
     int& value = function();
     value=10;
 }
 */
/*
 Q2.メンバー変数への参照を直接返すメンバー変数を定義し、constメンバー関数でもオーバーロードせよ。
 */
class A{
    int id=10;
public:
    A(int id);
    const int& get_id()const;
};
A::A(int id):id(id){}

const int& A::get_id()const{
    return id;
}

int main() {
    A me(20);
    const int& my_id=me.get_id();
    std::cout<<my_id<<std::endl;
}
