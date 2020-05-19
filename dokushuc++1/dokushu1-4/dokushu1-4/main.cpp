//
//  main.cpp
//  dokushu1-4
//
//  Created by Kentaro Yusa on 2020/05/15.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 
Q1.以下の真偽を入れ替え、出力も逆にすることで結果が変わらないことを示せ
 
void show_message(int value){
    if(10<=value&&value<20){
        std::cout << "10以上20未満です" <<std::endl;
    }
    else{
        std::cout << "10以上20未満ではありません" <<std::endl;
    }
}
 結果
 10以上20未満ではありません
 10以上20未満です
 10以上20未満ではありません
 */

void show_message(int value){
    if(!(10<=value&&value<20)){
        std::cout << "10以上20未満ではありません" <<std::endl;
    }
    else{
        std::cout << "10以上20未満です"<<std::endl;
    }
}
/*
 結果
 10以上20未満ではありません
 10以上20未満です
 10以上20未満ではありません
 */

int main(int argc, const char * argv[]) {
    // Q1
    show_message(9);
    show_message(15);
    show_message(20);
/*
 Q2.以下のdefaultラベルを削除して省略した場合に何も表示されなくなることを確認する
 Q3.以下のswitch文をif文で書き直す
     int a=2;
     switch(a+1)
     {
         case 1:
             std::cout << "a+1は1です"<<std::endl;
             break;
         case 2:
             std::cout << "a+1は2です"<<std::endl;
             break;
         default:
             std::cout << "a+1は1でも2でも3でもありません"<<std::endl;
             break;
     
     }
     */
    /*
     結果
     a+1は1でも2でも3でもありません
     */
    //Q2
    int a=2;
    switch(a+1)
    {
        case 1:
            std::cout << "a+1は1です"<<std::endl;
            break;
        case 2:
            std::cout << "a+1は2です"<<std::endl;
            break;

    }
    //Q3
    if(a+1==1){
        std::cout << "a+1は1です"<<std::endl;
    }
    else if(a+1==2){
        std::cout << "a+1は2です"<<std::endl;
    }
    else{
        std::cout << "a+1は1でも2でも3でもありません"<<std::endl;
    }
}
