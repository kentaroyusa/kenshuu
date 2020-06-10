//
//  main.cpp
//  physicsLab1
//
//  Created by Kentaro Yusa on 2020/06/08.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 [0] 取り敢えず Hello World!
 取り敢えず、[1. コンパイル] で紹介した Hello World! を作成してみて下さい。 表示する内容は "Hello World!" 以外の、 自分の好きな物で構いません。
 [1] 1 から 100 迄の和
 for ループを使って、1 から 100 迄の和を計算して出力して下さい。

 100*(1+100)/2 などと言ったずるは無しです。 これは、for ループの練習と思って取り組んで下さい。

 [2] 素数判定
 与えられた x が素数であるかどうかを判定する関数

 bool is_prime(int x);
 を作って下さい。
 [3] シェルピンスキー・ガスケット
 (1) 二項係数
 二項係数を計算する関数

 __int64 nCr(int n,int r);
 を作って下さい

 (2) パスカルの三角形
 (1) で作成した二項係数を用いて、パスカルの三角形を下の様な感じに出力してみて下さい

 1
 11
 121
 1331
 14641
 (3) シェルピンスキー・ガスケット
 (2) で、数字の代わりに、

 奇数の時→'*'
 偶数の時→' ' (半角空白)
 を出力する様にしてみて下さい。 16 行か 32 行ぐらい表示してみると模様が見えてくると思います。

 (4)
 nCr で掛け算や割り算を使っていると (3) の下の方が崩れて見えます。 何故でしょうか?

 [4] 小町算擬き
 四つの数字から 10 を作ることが出来るかどうかを判定する関数

 bool can_create10(int a,int b,int c, int d);
 を作成して下さい。但し、

 a b c d の順番は入れ替えられません。
 演算は + - * / を使用出来ます。
 括弧 () を何処に入れても構いません。 (つまり、演算の結合規則は考えなくて良いということ)
 というルールです。

 ※ 割り算を正しく処理する為に double を使用して下さい。 あと、「0 で割り算する時は気を付けて」等と言ってしまいましたが、 double で計算するので気を付けなくても大丈夫です。 結果が +∞ になるだけでエラーは起きません。

 ※ あと、double で計算している時 1.0/3.0*3.0==0.999… の様な理由で結果が合わない時があります。 (実は 1.0/3.0*3.0 はちゃんと 1.0 に戻るけれど、他の物で割り算した場合にはあり得る) でも、今回はそう言うことは気にしないでプログラムを書いて構いません。

 ヒント
 先ず、2 つから 10 を作ることが出来るかを判定する関数

 bool can_create10(double a,double b);
 を作成します。更に、これを使って 3 つから 10 を作ることが出来るかを判定する関数

 bool can_create10(double a,double b,double c);
 を作成すると簡単に出来ます。

 もっといいアプローチも存在するかも知れません。
 */

#include <iostream>
using namespace std;
//[2]
bool is_prime(int x){
    bool flg=true;
    if(x<=1)flg=false;
    for(int i=2;i<=x/2;i++){
        if(x%i==0)flg=false;
    }
    return flg;
}
//[3]
int nCr(int n,int r){
    int x=1;
    for(int i=1;i<=r;i++){
        x *= (n+1-i);
        x /= i;
    }
    return x;
}

//[4]
bool can_create10(double a,double b){
    return a+b==10||a-b==10||a*b==10||a/b==10;
}
bool can_create10(double a,double b,double c){
    return can_create10(a+b,c)||can_create10(a-b,c)||can_create10(a*b,c)||can_create10(a/b,c)||can_create10(a,b+c)||can_create10(a,b-c)||can_create10(a,b*c)||can_create10(a,b/c);
}
bool can_create10(double a,double b,double c,double d){
    return can_create10(a+b,c,d)||can_create10(a-b,c,d)||can_create10(a*b,c,d)||can_create10(a/b,c,d)||can_create10(a,b+c,d)||can_create10(a,b-c,d)||can_create10(a,b*c,d)||can_create10(a,b/c,d)||can_create10(a,b,c+d)||can_create10(a,b,c-d)||can_create10(a,b,c*d)||can_create10(a,b,c/d);
}
int main() {
    //[0]
    cout<<"[0]"<<endl;
    cout<<"Hello World!"<<endl;
    cout<<endl;
    
    //[1]
    cout<<"[1]"<<endl;
    int sum=0;
    for(int i=1;i<=100;i++){
        sum += i;
    }
    cout<<sum<<endl;
    cout<<endl;
    
    //[2]
    cout<<"[2]"<<endl;
    int x;
    cout<<"判定対象の整数を入力して下さい: ";
    cin>>x;
    cout<<(is_prime(x)?"素数です!":"素数ではありません!")<<endl;
    cout<<endl;
    
    //[3]
    cout<<"[3]"<<endl;
    int n=16;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(nCr(i,j)%2==1)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //[4]
    cout<<"[4]"<<endl;
    double a,b,c,d;
    cout<<"判定対象の整数を入力して下さい: "<<endl;
    cin>>a>>b>>c>>d;
    cout<<(can_create10(a,b,c,d)?"10が作れます!":"10が作れません!")<<endl;
    cout<<endl;
}
