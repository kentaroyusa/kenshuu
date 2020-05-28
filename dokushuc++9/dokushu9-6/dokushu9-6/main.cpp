//
//  main.cpp
//  dokushu9-6
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.関数テンプレートのテンプレートパラメーターで整数値を受け取って、受け取ったテンプレートでは受け取ったテンプレートパラメーターを表示せよ
 */
/*
 Q2.Q1で作った関数テンプレートを整数以外の値も受け取れるようにせよ
 */

//Q1
template <int i>
void show_int(){
    std::cout<<i<<std::endl;
}
//Q2
/*template <auto i>
void show(){
    std::cout<<i<<std::endl;
}
 */
int main() {
    show_int<20>();
    //show<5.6>();
}
