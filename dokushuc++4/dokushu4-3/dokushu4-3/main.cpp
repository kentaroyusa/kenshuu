//
//  main.cpp
//  dokushu4-3
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.スコープから抜けるとスコープないの変数はどうなるか
 デストラクターによって破棄される
 */
/*
 Q2.プログラムのカウンターが0,,1,2...と増えるようにしなさい
 */

int get_counter(){
    static int counter=0;
    return counter++;
}
int main(int argc, const char * argv[]) {
    std::cout<<get_counter()<<std::endl;
    std::cout<<get_counter()<<std::endl;
    std::cout<<get_counter()<<std::endl;
}
