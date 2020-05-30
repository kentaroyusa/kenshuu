//
//  main.cpp
//  dokushu13-3
//
//  Created by Kentaro Yusa on 2020/05/30.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>
/*
 Q1.好きな文字列で初期化したstd::stringから部分文字列を切り出し、中身を確認せよ
 */
/*
 Q2.std::stringのdata()メンバー関数がC文字列を返すことを確認せよ
 */
/*
 Q3.2つのstd::stringを比較し、辞書順になっていることを確認せよ
 */

int main() {
    //Q1
    std::string str="Hello, world";
    std::string sub=str.substr(0,5);
    std::cout<<sub<<std::endl;
    
    //Q2
    std::cout<<sub.data()<<std::endl;
    
    //Q3
    int ret=str.compare(sub);
    std::cout<<ret<<std::endl;
}
