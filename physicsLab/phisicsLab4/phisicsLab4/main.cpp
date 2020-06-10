//
//  main.cpp
//  phisicsLab4
//
//  Created by Kentaro Yusa on 2020/06/10.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 行列の積
 配列を行列に見立てて、行列の積を計算する関数を作成して下さい。

 ヒント
 第一引数と第二引数に掛け算する行列を受け取る為の引数を指定し、 第三引数に結果を返す為の行列を渡す様にすると良いでしょう。

 行列式の計算
 配列を行列に見立てて、行列式を計算する関数を作成して下さい。

 全て一つの関数の中で実行するのではなくて、或る纏まった操作を別の関数に括り出して構成する様にして下さい。
 */

#include <iostream>
using namespace std;


void mul(double (&a)[2][3],double (&b)[3][4],double (&c)[2][4]){
    c[2][4]={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


void vec(double a[2][3]){
    cout<<a[1][2]<<endl;
}


int main() {
    int l=2,m=3,n=4;
    double ay[l],ax[ay[l]],b[m][n],c[l][n];
    cout<<"Insert a:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Insert a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Insert b:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Insert b["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
    }
    double* d[l];
    for(int i=0;i<l;i++){
        d[i]=(&a)[i][];
    }
    vec((*a)[3]);
    //mul<l,m,n>(*a,*b,*c);
}



