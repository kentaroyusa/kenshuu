//
//  main.cpp
//  dokushu12-5
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <set>
#include <map>
/*
 Q1.std::setやstd::mapは何を許さないコンテナか
 重複を許さないコンテナ
 */
/*
 Q2.Q1で説明したことをstd::setを使って確認せよ
 */
void show(std::set<int> s){
    for(auto e:s){
        std::cout<<e<<std::endl;
    }
}
int main() {
    std::set<int> s{1,2,3,4};
    auto iter=s.find(4);
    if(iter != s.end()){
        std::cout<<*iter<<std::endl;
    }
    else{
        std::cout<<"no match"<<std::endl;
    }
    //Q2
    std::cout<<"Q2"<<std::endl;
    s.insert(4);
    show(s);
    
    std::map<std::string,float> w;
    w["H"]=1.00f;
    w["O"]=15.99f;
    w.insert(std::pair<std::string, float>{"Cl",34.97f});
}
