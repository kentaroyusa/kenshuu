//
//  main.cpp
//  phisicsLab2
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 [1] Gauss の超幾何級数
 Gauss の超幾何級数を計算する関数を作って下さい。

 double gauss_hgf(double x,double a,double b,double c);
 但し、下の定義で計算して下さい。収束半径は |x|<1 である事に注意しましょう。(定義域の外に対しては適当に 0 でも何でも返して下さい。)

 F(a,b;c;x)=
 ∞
 Σ
 n=0
 an bn
 n! cn
 xn where.αn=α・(α＋1) ・…・(α＋n－1)
 (underbrace)
 n 個

 x=0.99999 等の場合には収束が悪いと考えられますが、その辺りは気にしなくて構いません。
 「小さい方の項から足した方が良い」等と言ったことがあるのですが、今回は何も考えずに大きい項 (n の小さい項) から足していって構いません。 大きい項から足していった場合の問題点については [5] にて再度扱います。
 ヒント
 第 n 項は、第 n-1 項から計算することが出来ます。
 実際には無限和を計算するわけには行きません。例えば、級数をループで求める場合、「或る条件」を満たした時にループを止める様に設計しましょう。 (「或る条件」については自分で考えてみましょう。初めは「項が 0.01 より小さくなったら」等の簡単な物で計算出来ることを確かめてから、もっと良い方法を考えると良いです。)

 */

#include <iostream>
#include <cmath>
using namespace std;

//[1]
double gauss_hgf(double x,double a,double b,double c){
    const double epsilon=1e-10;
    double t=1,r=1,n=1;
    while(t< -epsilon || epsilon<t){
        t*=(a++*b++*x)/(n++*c++);
        r+=t;
    }
    return r;
}

int main() {
    //[1] Gauss の超幾何級数
    cout<<"[1] Gauss の超幾何級数"<<endl;
    cout<<"enter x,a,b,c"<<endl;
    double x,a,b,c;
    cin>>x>>a>>b>>c;
    if(x>1||x<-1)cout<<"out of order"<<endl;
    else cout<<gauss_hgf(x,a,b,c)<<endl;
    cout<<endl;
}
