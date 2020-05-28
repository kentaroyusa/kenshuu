//
//  main.cpp
//  dokushu9-4
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.関数テンプレートの明示的特殊化をして異なるメッセージが表示されるようにせよ
 */
/*
 Q2.テンプレートパラメーターの型のメンバー変数を持つクラステンプレートを明示的特殊化してvoid型に対応させろ
 */
/*
 Q3.部分特殊化と明示的特殊化の違いを説明せよ
 部分化は限定しなかったテンプレートパラメータを再度テンプレートパラメータを使って指定する
 */

#include <iostream>

// プライマリー・テンプレート
template<typename T>
void f(T)
{
    std::cout << "f<T>(T)\n";
}

// 明示的特殊化
template<>
void f<int>(int)
{
    std::cout << "F<int>(int)\n";
}

// オーバーロード
void f(int)
{
    std::cout << "f(int)\n";
}
void f()
{
    std::cout << "f()\n";
}

int main()
{
    f(1.1);     // f<T>(T)
    f(1);
    f();// f(int)
}
