//
//  main.cpp
//  dokushu13
//
//  Created by Kentaro Yusa on 2020/05/30.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


/*
 Q1.複数のstd::stringを結合して、長い文字列を作れ
 */
/*
 Q2.整数を文字列に変換し、再度それを整数に変換せよ
 */
/*
 Q3.生文字列リテラルは普通の文字列と比べてどのような点が異なるか
 生文字列リテラルは文字列リテラルの一種で、ソースコード上の見た目通りに文字列を作るために使われるリテラル
 \n
 で改行する
 */
/*
 Q4.正規表現を使って文字列の置換を行え
 */
#include <iostream>
#include <string>
#include <regex>
int main() {
    //Q1
    std::string strA="abc";
    std::string strB="def";
    std::string strC="ghi";
    std::string strD="jkl";
    std::cout<<strA+strB+strC+strD<<std::endl;
    
    //Q2
    int i=10;
    std::string in=std::to_string(i);
    int inte=std::stoi(in);
    std::cout<<inte<<std::endl;
    
    //Q4
    std::regex re{"にわ"};
    std::string str="うらにわにはにわにわとりがいる";
    std::string fmt="$1どて";
    std::string output;
    std::regex_replace(std::back_inserter(output),str.begin(),str.end(),re,fmt);
    std::cout<<output<<std::endl;
}
