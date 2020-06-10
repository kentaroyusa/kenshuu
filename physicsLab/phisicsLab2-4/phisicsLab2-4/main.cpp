//
//  main.cpp
//  phisicsLab2-4
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//
/*
 [4] モンテカルロ法による求積
 円周率 π をモンテカルロ法によって計算します。

 一様乱数で、以下の正方形の中の一点を定めると円内に来る確率は π/4 になるので、 それを用いて実際に計算して下さい。 一様乱数については、それを発生させる関数が用意されているのでそれを利用します。 詳細は以下を参考にして下さい。

 一様乱数の扱い
 計算機で乱数を生成すると言っても、計算機である以上は何らかのアルゴリズムに従って算出するしかありません。 「何らかのアルゴリズムに従って」生成している以上は、そのアルゴリズムがその数列の規則になっている訳であり、 厳密には乱数ではないのです。 唯、「充分乱数と見做すことが出来る」様な数列を生成するに過ぎません。

 この様に、何らかのアルゴリズムに従って生成された、一見して乱数に見える数列のことを「擬似乱数」と呼びます。

 C 言語の標準ライブラリにも、擬似乱数を発生させる関数が定義されています。 ここでは、その扱い方について触れてみることにします。乱数を発生させる関数は以下の様な物です。

 int rand(void); // cstdlib の中
 この関数は 0 から RAND_MAX (cstdlib の中で定義されている) 迄の整数の何れかを出鱈目に返します。 実際に使う場合には、例えば次の様にします。

 #include <iostream>
 #include <cstdlib>
  
 int main(){
     std::cout<<"Random numbers in [0, "<<RAND_MAX<<"] :"<<std::endl;
     for(int i=0;i<10;i++)
         std::cout<<rand()<<std::endl;
      
     return 0;
 }
 Random numbers in [0, 32767] :
 41
 18467
 6334
 26500
 19169
 15724
 11478
 29358
 26962
 24464

 一見して出鱈目に見える十個の数字が得られました。 何れも区間 [0, RAND_MAX == 32767] の中にある一整数です。

 ※ この RAND_MAX の値は処理系・コンパイラによって異なる可能性がありますので注意して下さい。 (32767 である事を前提にしたプログラムを書かないで下さい。)

 上の例で作ったプログラムを何回か実行すると、毎回 41 で始まって 24464 で終わる十個の数字を出力します。 乱数の筈なのに、同じ結果を出してしまうのは変だと思うかも知れませんが、 これは「擬似乱数」でちゃんとした乱数列生成のアルゴリズムに従っているのでしょうがないことです。

 プログラムを実行する度、毎回異なる擬似乱数列を出したい時には、毎回異なる乱数の「種」を設定しなければなりません。 乱数の種を設定するには以下の関数を使用します。

 void srand(unsigned int seed); // 種を設定する為の関数
 time_t time(time_t*); // 毎回異なる「種」には、現在時刻を使うと良い
 // 使用例
 #include <iostream>
 #include <cstdlib>
 #include <ctime> // time(time_t*) は ctime で定義されている
  
 int main(){
     srand((unsigned)time(NULL)); // 種の設定
      
     ...
      
     return 0;
 }
 ※ time 関数の詳細について知りたければ自分で調べてみると良いでしょう。

 */

#include <iostream>
using namespace std;
double f(double x,double y){
    return x*x+y*y;
}
int main() {
    int N,count=0;
    cout<<"Input Number of Plot:"<<endl;
    cin>>N;
    
    for(int i=0;i<N;i++){
        double x=rand()/double(RAND_MAX);
        double y=rand()/double(RAND_MAX);
        if(f(x,y)<1){
            count++;
        }
    }
    cout<<4*count/double(N)<<endl;
}
