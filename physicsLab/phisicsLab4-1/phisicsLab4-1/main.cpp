//
//  main.cpp
//  phisicsLab4-1
//
//  Created by Kentaro Yusa on 2020/06/10.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
 
template<int N>
double matrix_det(const double (&a)[N][N]){
    class util{
        double a[N][N];
        double pivot;
    public:
        util(const double (&a)[N][N]){
            ::memcpy(&this->a,&a,sizeof(double[N][N]));
        }
    private:
        /// <summary>指定した列の中で絶対値最大の要素をピボットとして選択します。</summary>
        /// <param name="px">ピボットを検索する列の番号を指定します。</param>
        /// <returns>絶対値最大の要素の行番号を返します。</returns>
        int select_pivot(int px){
            double pivot=0;
            int py=0;
            for(int y=px;y<N;y++){
                double val=a[y][px];
                if((val<0?-val:val)<=pivot)continue;
 
                py=y;
                pivot=val;
            }
            this->pivot=pivot;
            return py;
        }
        /// <summary>[r1,N)×[r1,N) 部分行列での行交換を実行します。</summary>
        /// <param name="r1">交換する行の番号を指定します。</param>
        /// <param name="r2">交換する行の番号を指定します。
        /// r1 とは異なる数を指定する必要があります。
        /// </param>
        void replace_row(int r1,int r2){
            for(int i=r1;i<N;i++){
                double c=a[r2][i];
                a[r2][i]=a[r1][i];
                a[r1][i]=c;
            }
        }
        /// <summary>
        /// a[n][n] 成分で a[n+1～N-1][n] を掃き出します。
        /// 但し、以降で使う (n,N)×(n,N) の部分だけしか計算しません。
        /// </summary>
        /// <param name="n">掃き出しの基準になる点を指定します。</param>
        void sweep(int n){
            for(int y=n+1;y<N;y++){
                double fac=a[y][n]/a[n][n];
                for(int x=n+1;x<N;x++){
                    a[y][x]-=a[n][x]*fac;
                }
            }
        }
    public:
        double det(){
            double det=1;
 
            for(int px=0;px<N-1;px++){
                int py=select_pivot(px);
                if(pivot==0)return 0;
 
                det*=pivot;
                if(px!=py){
                    det*=-1;
                    replace_row(px,py);
                }
                sweep(px);
            }
 
            return det*a[N-1][N-1];
        }
    } calculator(a);
 
    return calculator.det();
}
 
int main(){
    double a[2][2]={
        {1,2},
        {3,4},
    };
    double b[3][3]={
        {1,2,3},
        {3,5,7},
        {1,2,1}
    };
    std::cout<<matrix_det(a)<<std::endl;
    std::cout<<matrix_det(b)<<std::endl;
    return EXIT_SUCCESS;
} 
