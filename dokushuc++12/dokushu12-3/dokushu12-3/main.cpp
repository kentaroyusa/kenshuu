//
//  main.cpp
//  dokushu12-3
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <list>
#include <iterator>
/*
 Q1.listのインテレーターの種類を説明せよ
 std::vectorの
 ・push_back();
 ・emplace_back();
 ・pop_back();
 に加え、
 ・push_front();
 ・emplace_front();
 ・pop_front();
 がある
 */
/*
 Q2.std::listのインテレーターを三つ勧めたいとき、どうすればいいか
  std::advance(iter,3);
 */
/*
 Q3.std::listをソートせよ
 */

void show_list(std::list<int> list){
    std::cout<<"show list:"<<std::endl;
    for (auto e:list){
        std::cout<<e<<std::endl;
    }
}

int main() {
    
    std::list<int> list0={1,2,3,4,5};
    std::list<int> list1={6,7,8,9};
    auto iter=list0.begin();
    //Q2
    std::advance(iter,3);
    show_list(list0);
    list0.splice(iter,list1,list1.begin());
    show_list(list0);
    //Q3
    list0.sort();
    show_list(list0);
}
