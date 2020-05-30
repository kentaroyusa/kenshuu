//
//  main.cpp
//  dokushu12-4
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <utility>
#include <string>
/*
 Q1.２つ組を作るクラスについて説明せよ
 std::pair<>で作られ、最初の要素はfirstで取得し、最後の要素はsecondで取得できる
 */
/*
 Q2.std::tupleを使って3つ組を表し、好きな要素を変更せよ
 */
/*
 Q3.構造化束縛とは何か
 タプルを展開して個別の変数として扱うもの
 */
void show(std::tuple<int,std::string,double> t){
    std::cout<<std::get<0>(t)<<","<<std::get<1>(t)<<","<<std::get<2>(t)<<std::endl;
}
int main() {
    std::tuple<int,std::string,double> t{4,"tuple",3.14};
    std::get<0>(t)=5;
    show(t);
}
