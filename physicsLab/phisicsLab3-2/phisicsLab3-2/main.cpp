//
//  main.cpp
//  phisicsLab3-2
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 2] 参照・ポインタ
 (1) 約分する関数
 第一引数を分子、第二引数を分母と見立てて約分を行う関数

 void yaku(int& num,int& den);
 を作成して下さい。約分の結果は、num 及び den を書き換えることで返します。

 約分は、最大公約数 GCM をユークリッドの互除法に依って求めて、 それで両数を割ることによって行って下さい。

 (2) 動的配列の確保
 入力された数字だけ要素を持つ配列を動的に確保する方法を示して下さい。 (コンパイルはしなくて構いません。)
 */

#include <iostream>
using namespace std;

//(1)
void yaku(int& num,int& den){
    int n,d,a=1;
    if(num>den){
        n=num;
        d=den;
    }
    else{
        n=den;
        d=num;
    }
    
    while(n%d!=0){
        a=n%d;
        n=d;
        d=a;
    }
    num /= a;
    den /= a;
}

int main() {
    //(1)
    int num,den;
    cout<<"Insert num/den:"<<endl;
    cin>>num>>den;
    yaku(num,den);
    cout<<num<<" "<<den<<endl;
    
    //(2)
    int n;
    std::cin>>n;
        int* arr=new int[n];
        delete[] arr; // ←これが重要

}
