//
//  main.cpp
//  dokushu12-6
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

/*
 Q1.コンテナの中から要素を検索するにはどのアルゴリズムを使えばよいか
 std::find()
 */
/*
 Q2.std::vectorを降順にソートせよ
 */
/*
 Q3.あるコンテナの要素全てを、別のコンテナの先頭位置に正順になるようにコピーせよ
 */
void show(std::vector<int> v){
    for (auto e:v){
        std::cout<<e<<std::endl;
    }
}
void show(std::list<int> v){
    for (auto e:v){
        std::cout<<e<<std::endl;
    }
}
int main() {
    
    //Q2
    std::vector<int> v{1,2,3,4,5};
    std::sort(v.begin(),v.end(),[](int x,int y){return x>y;});
    show(v);
    
    //Q3
    std::vector<int> w{2,1,3,4,5};
    std::vector<int> x;
    std::copy(w.begin(),w.end(),std::back_inserter(x));
    std::sort(x.begin(),x.end());
    show(x);
    
}
