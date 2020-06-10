//
//  main.cpp
//  phisicsLab2-2
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 [2] 積分
 次の積分を台形公式で評価することを考えます。

 I = 4∫ 1    0
 dx
 1＋x2

 (1) 台形則
 切断数 32 及び 64 に於ける数値積分 I32,I64 を台形則で求めて下さい。

 ※
 double I32(){
     return 4*(::atan(1)-::atan(0));
 }
 等のずるは×です。I32 は近似値なのでそんなに良い精度は出ない筈で、足がついてしまいます。

 (2) シンプソン則
 次の物を計算してみて下さい。

 I(2)=
 4I64 － I32
 4－1

 */

#include <iostream>
using namespace std;

double f(double x){
    return 1/(1+(x*x));
}

double I32(){
    double sum=0;
    for(int i=0;i<32;i++){
        sum=sum+(f(double(i/32.0))+f(double((i+1)/32.0)))/16.0;
    }
    return sum;
}
double I64(){
    double sum=0;
    for(int i=0;i<64;i++){
        sum=sum+(f(double(i/64.0))+f(double((i+1)/64.0)))/32.0;
    }
    return sum;
}
int main() {
    cout<<I32()<<endl;
    cout<<I64()<<endl;
    cout<<(4*I64()-I32())/3<<endl;
}
