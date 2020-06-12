//
//  main.cpp
//  phisicsLab6
//
//  Created by Kentaro Yusa on 2020/06/12.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//
/*
 [1] ライフゲーム
 今回は、Life-Game を作ってみます。 Life-Game は前の盤面の状態を元に次の盤面の状態を作るという形で時間発展していく物です。

 時間発展
 M×N の盤面があって、それぞれの升目が「生」か「死」の状態をとります。
 初期状態としては、乱数で出鱈目に決めるか、入力を求める様にすると良いです。
 時間発展の方法は次の様になります。
 先ず、前の状態で、周りの八升の内「生」の数を数えます。

 2 升が「生」の場合は、次の状態は前の状態と同じです。
 3 升が「生」の場合は、次の状態は「生」です。
 それ以外の場合は、次の状態は「死」です。
 ※ 次の状態が全て決定するまでは、前の状態が必要です。
 或る升の次の状態が分かったとしても、それを直ぐに前の状態のデータに書き込んでしまうと、 その升を参照する他の升目の時間発展が可笑しくなってしまいます。

 「前の状態の配列」と「次の状態の配列」の二種類の配列を用意して、 時間発展するのが楽でしょう。

 ※ 周期境界条件の方が面白いのではないかと思います。
 周期境界条件の場合は、「周りの八升」を参照する時、

 a[(i+M)%M][(j+N)%N]
 等とすると書くのが楽です。(実行は遅くなりますが大して気にならないでしょう。) i%M や j%N でなくて、余分な物が入っているのは、結果が正である事を保証する為です。 (-1%3 の結果が -1 になるか 2 に為るかというのは処理系依存です。)

 表示
 さて、時間発展が計算出来ても表示が出来なくてはつまらないと思います。 今回は、余り見た目は良くないかも知れないのですが、標準出力に表示する事にします。

 標準出力に出力する時は、例えば、配列 a[M][N] に対して、次の様にすればよいでしょう。
 for(int i=0;i<M;i++){
     for(int j=0;j<N;j++){
         std::cout<<(a[M][N]?"■":"□");
     }
     std::cout<<"\n";
 }
 std::cout<<std::flush;
 ※ 標準出力に出すので、盤面を 100×100 等の様に大きくしても、表示しきれずに右端で改行されてしまいます。30×30 位が限界です。

 アニメーションにするのは今の段階では難しいので、次の様に、文字を一文字入力する度に一回時間発展させる様にすると良いでしょう。
 char c;
 while(true){
     std::cin>>c;
  

 }
 上の状況では無限ループになってしまうので、終了させる時は Ctrl+C を押すか、 特定の文字が入力された時に break する様にしましょう。

 アニメーションにしたい場合は、取り敢えず次の様にすれば良いです。
 #include <ctime>
  

  
     int t=std::clock(); // clock はプログラムが開始してからの時間 (単位 CLOCKS) を返す
     while(true){
         t+=CLOCKS_PER_SECOND; // t に 1 sec 追加
         while(t>std::clock()); // 時刻が t に達するまで空ループ
          
     }
 マルチタスク環境で空ループをやるのは余り気分が良くないですが。
 */

#include <iostream>
#include <ctime>
#include <random>

bool set_b(int count,bool a){
    if (count==2)return a;
    else if(count==3)return true;
    else return false;
}

int main(int argc, const char * argv[]) {
    int M=4,N=5;
    int count=0;
    bool b[M][N],a[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(rand()%2==1)a[i][j]=true;
            else a[i][j]=false;
        }
    }
    
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            std::cout<<(a[i][j]?"■":"□");
        }
        std::cout<<"\n";
    }
    std::cout<<std::flush;

    char c;
    while(true){
        std::cin>>c;
        if(c=='f')break;

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                count=0;
                if(i-1>=0){
                    if(a[i-1][j])count++;
                    if(a[i-1][j+1])count++;
                    if(j-1>=0){
                        if(a[i-1][j-1])count++;
                    }
                }
                if(a[i][j+1])count++;
                if(a[i+1][j])count++;
                if(a[i+1][j+1])count++;
                if(j-1>=0){
                    if(a[i+1][j-1])count++;
                    if(a[i][j-1])count++;
                }
                b[i][j]=set_b(count,a[i][j]);
            }
        }
         for(int i=0;i<M;i++){
             for(int j=0;j<N;j++){
                 a[i][j]=b[i][j];
                 std::cout<<(a[i][j]?"■":"□");
             }
             std::cout<<"\n";
         }
         std::cout<<std::flush;
         
    }

}
