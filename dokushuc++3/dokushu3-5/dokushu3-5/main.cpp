//
//  main.cpp
//  dokushu3-5
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>

/*
 Q1.継承するクラスとされるクラスをそれぞれ何というか
 継承せれるクラスは抽象クラス、継承するクラスは派生クラス
 Q2.以下のDerivedをさらに継承したMoreDerivedクラスを使って、name()をさらにオーバーライドせよ
 class Base{
 public:
     virtual std::string name() const;
 };
 std::string Base::name() const{return "Base";}

 class Derived : public Base{
 public:
     std::string name() const override;
 };
 std::string Derived::name() const {return "Derived" ;}

 int main() {
 }
 
 Q3.Q2のBaseクラスに純粋仮想関数としてstd::stringを返すmost_name()メンバー関数を追加せよ。それをMoreDerivedクラスでオーバーライドし、Derivedクラスのインスタンスを作成するとどうなるか。
 抽象クラスなのでインスタンスができない
 */

class Base{
public:
    virtual std::string name() const;
    std::string most_name() const;
};
std::string Base::name() const{ return "Base";}

class Derived : public Base{
public:
    std::string name() const override;
};
std::string Derived::name() const { return "Derived" ;}

class MoreDerived : public Base{
public:
    std::string name() const override;
    std::string most_name() const;
};
std::string MoreDerived::name() const {return "MoreDerived" ;}
std::string MoreDerived::most_name() const {return "a" ;}



int main() {
    Derived v;
    MoreDerived w;
    std::cout<< v.name() <<std::endl;
     std::cout<< w.most_name() <<std::endl;
    
}
