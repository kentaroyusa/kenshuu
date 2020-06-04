//
//  main.cpp
//  Qiitakakomon10
//
//  Created by Kentaro Yusa on 2020/06/04.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 【問題概要】
 シカの AtCoDeer くんは二次元平面上で旅行をしようとしています。AtCoDeer くんの旅行プランでは、時刻 0 に 点 (0,0) を出発し、1 以上 N 以下の各 i に対し、時刻 ti に 点 (xi,yi) を訪れる予定です。

 AtCoDeer くんが時刻 t に 点 (x,y)にいる時、 時刻 t+1 には 点 (x+1,y),(x−1,y),(x,y+1),(x,y−1) のうちいずれかに存在することができます。その場にとどまることは出来ないことに注意してください。AtCoDeer くんの旅行プランが実行可能かどうか判定してください。

 【制約】

 1≤N≤105
 0≤xi,yi≤105
 1≤ti≤ti+1≤105
 入力はすべて整数
 【数値例】
 1)
 　N=2
 　(t,x,y)=(3,1,2),(6,1,1)
 　答え: "Yes"

 例えば (0,0),(0,1),(1,1),(1,2),(1,1),(1,0),(1,1)(0,0),(0,1),(1,1),(1,2),(1,1),(1,0),(1,1) と移動すれば目的を果たせます。
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"INSETR N:"<<endl;
    cin>>N;
    int t[N+1],x[N+1],y[N+1];
    for(int i=0;i<N;i++){
        cout<<"INSETR t"<<i<<":"<<endl;
        cin>>t[i];
        cout<<"INSETR x"<<i<<":"<<endl;
        cin>>x[i];
        cout<<"INSETR y"<<i<<":"<<endl;
        cin>>y[i];
    }
    for(int i=0;i<N-1;i++){
        if((t[i+1]-t[i])%2==(x[i+1]-x[i]+y[i+1]-y[i])%2&&x[i+1]-x[i]+y[i+1]-y[i]<=t[i+1]-t[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
}
