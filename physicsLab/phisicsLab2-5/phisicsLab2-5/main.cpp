//
//  main.cpp
//  phisicsLab2-5
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//
/*
 [5] 級数の数値的計算
 次の級数を計算するプログラムを書いて実行してみて下さい。但し、float で計算して下さい。

 S=
 ∞
 Σ
 n=1
 1
 n

 本来は、級数の値は発散します。然し、有限の値が計算されて返ってきたと思います。 何故か考えてみましょう。何故か考えたら、その理由が正しいかどうか確かめるコードを書いて検証してみて下さい。

 */

#include <iostream>
using namespace std;

double f(int x){
    return 1/double(x);
}

int main() {
    cout<<"級数："<<endl;
    const double epsilon=1e-10;
    double sum=0;
    int i=1;
    while(f(i)>epsilon){
        sum += f(i);
        i++;
    }
    cout<<sum<<endl;
}
