//
//  main.cpp
//  phisicsLab2-3
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//
/*
 [3] ソート (並び替え)
 (1)
 x[0] から x[9] を与えられた時、それを大きさ順に並び替える関数を作って下さい。

 int sort10(int* x);
 効率などは考えなくても構いません。唯、出来るだけ簡潔になる様にコードを書きましょう。

 (2) ソートの計算量オーダー
 (1) で自分の考えたアルゴリズムの計算量オーダーを考えてみましょう。 (今回は要素数 n=10 ですが n を増やしていくとどうなるでしょう?) ソートの計算量のオーダーには、最速の場合 (最初から並んでいた場合など) のオーダーと、 最悪の場合のオーダーと、期待値としてのオーダーの三種類在ります。

 更に、最悪の場合のオーダーを考えてみます。 自分の考えたアルゴリズムの最悪オーダーが O(n logn) より大きい場合には、 最悪でも O(n logn) のオーダーのアルゴリズムについて調べてみて下さい。 「ソート」等で計算すると沢山出て来ると思います。その内の一つで構いません。

 */

#include <iostream>
using namespace std;
int* sort10(int* x){
    int *y=x,temp;
    
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(y[i]>y[j]){
                temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
        }
    }
    return y;
}
void show(int* x){
    for(int i=0;i<10;i++){
        cout<<x[i]<<endl;
    }
}

int main(int argc, const char * argv[]) {
    int x[10];
    for(int i=0;i<10;i++){
        cin>>x[i];
    }
    int* y=sort10(x);
    show(y);
}
