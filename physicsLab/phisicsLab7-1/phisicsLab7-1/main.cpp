//
//  main.cpp
//  phisicsLab7-1
//
//  Created by Kentaro Yusa on 2020/06/12.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 1) Newton 法
 以下の自己無撞着方程式を Newton 法によって解きます。

 m = tanh(βJzm)

 1
 βJz
  に対して m をプロットして下さい。

 御存知の通り、臨界温度よりしたでは解が三つありますが、その内の正の物をプロットして下さい。初期 m として正の物を設定すると良いでしょう。

 (2) 数値微分
  
 lim
 x→0
 sinx
 x
 = 1

 が成り立つ事を確認して下さい。(小さな x に対して
 sinx
 x
  の値をプロットすると分かり易い)

 更に 1 との誤差を見て最も 1 に近い値を与える x について考察すると尚良いと思います。

 (3) LU 分解
 大体の正方行列 A は

 A    =    L U        =         1        0        ⋱        *        1          *        *        ⋱        0        *

 の形に分解出来ます。A の一行目の第一要素から順に方程式を立てていくと容易に分解後の要素を求められる事が分かります。 結局、L 及び U の要素 lmn, umn は以下のようにして求められます。

 for(n=1～N){                    n>m なる m に就いて lnm    =
 1
 umm
  (anm－
 m－1
 Σ
 k=1
 lnk ukm)         m≧n なる m に就いて unm    =    anm－
 n－1
 Σ
 k=1
 lnk ukm.    }

 与えられた行列 A を LU 分解するプログラムを書いて下さい。

 ※ 実際には、途中で umm=0 となる可能性があり、その場合には pivot 選択を行う必要があります。 この問題を解く上では pivot に関して無視しても構いません。
 */

#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
    return sin(x)/x;
}
int main(int argc, const char * argv[]) {
    
    //(2)
    double x=0.01;
    cout<<f(x)<<endl;
}
