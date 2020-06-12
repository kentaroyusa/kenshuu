//
//  main.cpp
//  phisicsLab7-2
//
//  Created by Kentaro Yusa on 2020/06/12.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 [2] Householder 変換 2
 (1)
 四つの成分を持つベクトル

 →
 b
 =      a1    a2    a3    a4

 に対して、

 A
 →
 b
 =:
 →
 c
 =      a1    γ    0    0     ;γ2 = a22＋a32＋a42

 とする様な行列 A

 A := I －
 2(
 →
 c
 －
 →
 b
 )・T(
 →
 c
 －
 →
 b
 )
 |
 →
 c
 －
 →
 b
 |2

 を作成する関数を実装して下さい。

 (2)
 対称行列

 B :=      a1    a2    a3    a4    a2                a3    (対称)    a4

 に対して、

 ABA =      x    y    0    0    y    b1    b2    b3    0    b2    *    *    0    b3    *    *

 の形になっている事を確認して下さい。更に、

 →
 b
 =      b1    b2    b3

 に対して、

 T
 →
 b
 =      b    b1    0     ;b2 = b22＋b32

 とする様な行列 T を以て

 H :=      1    T
 →
 0
 →
 0
 T

 とした時に、HABAH が三重対角行列になっている事を確認して下さい。
 */

#include <iostream>
#include <cmath>
#include <cfloat>
 
/// <summary>
/// 指定したベクトルの成分を一つに纏める様な Householder 変換の行列を求めます。
/// <summary>
/// <param name="vec">householder 変換の対象となるベクトルを指定します。</param>
/// <param name="H">Householder 変換の行列を格納する先を指定します。</param>
/// <param name="offset">指定したベクトルの成分の内、変更しない成分の数を指定します。
/// 例えば 3 と指定した時、第三成分までは変換の対象と為らず、
/// 第四成分以降に対して Householder 変換が適用されます。</param>
template<int N>
void Householder(const double (&vec)[N],double (&H)[N][N],int offset){
    // 長さを求める
    double sum=0;
    for(int i=offset;i<N;i++)sum+=vec[i]*vec[i];
    double r=::sqrt(sum);
 
    double d[N]; // b-c
    ::memcpy(d+offset,vec+offset,(N-offset)*sizeof(double));
    d[offset]-=r;
 
    double normal=2*r*(r-vec[offset]); // |b-c|^2
 
    for(int m=0;m<offset;m++){
        for(int n=offset;n<N;n++)H[m][n]=H[n][m]=0;
        for(int n=0;n<offset;n++)
            H[m][n]=int(m==n);
    }
    for(int m=offset;m<N;m++){
        for(int n=offset;n<N;n++){
            H[m][n]=(m==n)-2*d[m]*d[n]/normal;
        }
    }
}
 
/// <summary>
/// 行列の積演算を行います。
/// </summary>
template<int N>
void mat_prod(double (&dest)[N][N],const double (&a)[N][N],const double (&b)[N][N]){
    for(int x=0;x<N;x++)for(int y=0;y<N;y++){
        dest[x][y]=0;
        for(int m=0;m<N;m++)
            dest[x][y]+=a[x][m]*b[m][y];
    }
}
 
/// <summary>
/// 行列の内容を表示します。
/// </summary>
template<int N>
void mat_print(const double (&a)[N][N]){
    for(int x=0;x<N;x++){
        for(int y=0;y<N;y++){
            double v=a[x][y];
            if(::abs(v)<=DBL_EPSILON*10)v=0; // 0 に近い値は無視
            std::cout<<v<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<std::flush;
}
 
int main(){
    const int N=4;
    double B[N][N]={
        {3,4,1,2},
        {4,5,2,3},
        {1,2,4,2},
        {2,3,2,7},
    };
 
    std::cout<<"-- B --"<<std::endl;
    mat_print(B);
 
    double ABA[N][N];
    {
        double A[N][N];
        Householder(B[0],A,1);
 
        double AB[N][N];
        mat_prod(AB,A,B);
 
        mat_prod(ABA,AB,A);
    }
 
    std::cout<<"-- ABA --"<<std::endl;
    mat_print(ABA);
 
    double HABAH[N][N];
    {
        double H[N][N];
        Householder(ABA[1],H,2);
 
        double HABA[N][N];
        mat_prod(HABA,H,ABA);
 
        mat_prod(HABAH,HABA,H); 
    }
 
    std::cout<<"-- HABAH --"<<std::endl;
    mat_print(HABAH);
 
    return EXIT_SUCCESS;
}
