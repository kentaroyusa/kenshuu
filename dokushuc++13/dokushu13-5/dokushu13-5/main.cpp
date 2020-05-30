//
//  main.cpp
//  dokushu13-5
//
//  Created by Kentaro Yusa on 2020/05/30.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <regex>
#include <string>
/*
 Q1.コンソールから文字列と正規表現をそれぞれ入力し、文字列が正規表現に完全マッチするか調べよ
 */
/*
 Q2.生文字列リテラルを使って改行を含んだ文字列をコンソールに出力せよ
 */
/*
 Q3.コンソールから文字列と正規表現をそれぞれ入力し、文字列が正規表現に部分マッチするか調べよ
 その際、マッチした部分のサブマッチを出力せよ
 */
int main() {
    //Q1
    std::string input;
    std::cout<<"入力input:"<<std::endl;
    std::cin>>input;
    
    std::string rex;
    std::cout<<"入力re:"<<std::endl;
    std::cin>>rex;
    
    std::regex re{rex};
    if(std::regex_match(input, re)){
        std::cout<<input<<" matches "<<rex<<std::endl;
    }
    
    //Q2
    std::cout<<"祇園精舎の鐘の声、\n諸行無常の響あり"<<std::endl;
    
    //Q3
    std::string input3;
    std::cout<<"入力input:"<<std::endl;
    std::cin>>input3;
    std::string rex3;
    std::cout<<"入力re:"<<std::endl;
    std::cin>>rex3;
    std::regex re3{rex3};
    std::smatch match;
    if(std::regex_search(input3, match, re3)){
        std::cout<<match.str()<<" "<<match.position()<<" "<<match.length()<<std::endl;
    }
}
