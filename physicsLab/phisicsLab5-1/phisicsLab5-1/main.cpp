//
//  main.cpp
//  phisicsLab5-1
//
//  Created by Kentaro Yusa on 2020/06/10.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*

 [1] クラスの宣言

 [2] メンバ変数
 複素数には、実部と虚部があります。それぞれを double で表現する事が可能ですので、 Complex クラスの中に real というメンバ変数と imag というメンバ変数を定義してみます。

 書き換えて、実際にコンパイルして出力を確認して下さい。

 [3] コンストラクタ
 コンストラクタは、インスタンスの初期化を行う為の物です。[2] のコードを下の様に書き換えて、実行結果を見て下さい。

 #include <iostream>
  
 class Complex{
 public:
     double real;
     double imag;
      
     Complex(double real,double imag){
         this->real=real;
         this->imag=imag;
          
         // コンストラクタが呼び出された事を確かめる
         std::cout<<"Ctor: "<<real<<"+"<<imag<<"i"<<std::endl;
     }
 };
 int main(){
     Complex a(1,2);
     std::cout
         <<a.real<<" + ";
         <<a.imag<<"i"<<std::endl;
      
     a=Complex(3,4);
     std::cout
         <<a.real<<" + ";
         <<a.imag<<"i"<<std::endl;
      
     return 0;
 }
 どの出力がどの行に対応しているかをよく見てみましょう。

 [4] デストラクタ
 デストラクタは、インスタンスの寿命が切れる時に呼び出される物です。
 (2)
 上の print 関数では、虚部が負の時や、虚部が 0 または実部が 0 の場合に分かりにくい表示になってしまいます。 どんな場合でも正しく・分かり易く表示できるように print() 内の処理を書き換えて下さい。 if 等の条件分岐で出力する内容を替える必要があります。

 (3)
 絶対値を計算するメンバ関数 abs を作成して下さい。 絶対値を計算する際に平方根が必要になりますが、 それには
 [6] 演算子
 (1)
 いよいよ演算子を定義します。例えば、足し算の場合には以下の様に定義します。 コードを下の様に書き換えて、コンパイル・実行して正しく加算が行われている事を確認して下さい。

 */

#include <iostream>
 #include <cmath>
class Complex{
public:
    double real;
    double imag;
    Complex(){}
    Complex(double real,double imag){
        this->real=real;
        this->imag=imag;
        // コンストラクタが呼び出された事を確かめる
        std::cout<<"Ctor: "<<real<<"+"<<imag<<"i"<<std::endl;
    }
    
    ~Complex(){
        std::cout<<"Dtor: "<<real<<"+"<<imag<<"i"<<std::endl;
    }
    void print() const{
        if(imag==0) std::cout<<this->real<<std::endl;
        else if(real==0)std::cout<<this->imag<<"i"<<std::endl;
        else std::cout<<this->real<<" + "<<this->imag<<"i"<<std::endl;
    }
    double abs() const{
        return sqrt(this->real*this->real+this->imag*this->imag);
    }
    Complex operator+(const Complex& r){
        return Complex(this->real+r.real,this->imag+r.imag);
    }
    Complex operator-(const Complex& r) const{
        return Complex(this->real-r.real,this->imag-r.imag);
    }
    Complex operator*(const Complex& r) const{
        return Complex(this->real*r.real-this->imag*r.imag,this->real*r.imag+this->imag*r.real);
    }
    Complex operator/(const Complex& r) const{
        double m=pow(r.real,2)+pow(r.imag,2);
        return Complex((this->real*r.real+this->imag*r.imag)/m,(this->imag*r.real-this->real*r.imag)/m);
    }
};
 
int main(){
    Complex a(4,3);
    a.real=4;
    a.imag=3;
     
    Complex b;
    b.real=1;
    b.imag=2;
    
    Complex c(4,5);
    Complex d=a/b;
    
    std::cout<<a.real<<" + "<<a.imag<<"i"<<std::endl;
    std::cout<<b.real<<" + "<<b.imag<<"i"<<std::endl;
    std::cout<<c.real<<" + "<<c.imag<<"i"<<std::endl;
    a.print();
    d.print();
    return EXIT_SUCCESS;
}
