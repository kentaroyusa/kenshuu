//
//  main.cpp
//  dokushu9-9
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.可変引数テンプレートが任意の個数の引数を受け取れることを、テンプレートパラメーターパックの要素数を使って確認せよ
 */
/*
 Q2.テンプレートパラメーターパックの展開を行って関数を呼び出した結果、適切なオーバーロードが呼び出されることを確認せよ
 */

template <typename ... T>
void count_parameter(T... args){
    std::cout<<sizeof...(T)<<std::endl;
    std::cout<<sizeof...(args)<<std::endl;
}

int main(int argc, const char * argv[]) {
    count_parameter(3);
    count_parameter(0,1,2,3);
}
