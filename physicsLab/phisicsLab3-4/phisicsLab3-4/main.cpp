//
//  main.cpp
//  phisicsLab3-4
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 [4] Householder 変換
 任意の

 →
 a
 :=     x    y    z

 →
 b
 :=     |
 →
 a
 |    0    0     ;

 に対して、対称行列 H が存在して、

 H
 →
 a
 =
 →
 b

 が成立します。具体的には、

 H = I －
 2 (
 →
 a
 －
 →
 b
 )(
 →
 a
 －
 →
 b
 )T
 |
 →
 a
 －
 →
 b
 |2

 と書けます。

 (1)
 実際に与えられたベクトル
 →
 a
  に対して、
 →
 x
  を生成する様な行列 H を返す関数を作成して下さい。

 void CalcH(const double (&a)[3], double (&h)[3][3]);
  
 // ↑ は配列の参照渡しです。普通の配列と同じように使えます。
 */

#include <iostream>
#include <cmath>
using namespace std;



double SpaceCalc(double x,double y,double z){
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}
void CalcH(const double (&a)[3], double (&h)[3][3]){
    double ab[3]={0};
    double b[3]={0};
    double aB;
    b[0]=SpaceCalc(a[0],a[1],a[2]);
    ab[0]=a[0]-b[0];
    ab[1]=a[1];
    ab[2]=a[2];
    aB=pow(ab[0],2) + pow(ab[1],2) + pow(ab[2],2);
    
    
    h[0][0]=1-2*ab[0]*ab[0]/aB;
    h[0][1]=-2*ab[0]*ab[1]/aB;
    h[0][2]=-2*ab[0]*ab[2]/aB;
    h[1][0]=-2*ab[1]*ab[0]/aB;
    h[1][1]=1-2*ab[1]*ab[1]/aB;
    h[1][2]=-2*ab[1]*ab[2]/aB;
    h[2][0]=-2*ab[2]*ab[0]/aB;
    h[2][1]=-2*ab[2]*ab[1]/aB;
    h[2][2]=1-2*ab[2]*ab[2]/aB;
}
void show(double h[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<h[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    double a[3],h[3][3];
    cout<<"Insert a:"<<endl;
    cin>>a[0]>>a[1]>>a[2];
    CalcH(a,h);
    show(h);
}
