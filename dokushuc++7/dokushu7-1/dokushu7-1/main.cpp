//
//  main.cpp
//  dokushu7-1
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.基底クラスをprivateで継承すると、基底クラスの公開メンバーは派生クラスにおいてはどうなるか
 派生クラスのメンバーにはアクセスできないが、基底クラスのメンバーにはアクセスできる
 */
#include <iostream>

class base{
private:
    void private_member(){
        std::cout<<"Base private"<<std::endl;
    }
public:
    void public_member(){
        std::cout<<"Base public"<<std::endl;
    }
protected:
    void protected_member(){
        std::cout<<"Base protected"<<std::endl;
    }
};
class derived:public base{
public:
    void member_test();
};

void derived::member_test(){
    public_member();
    protected_member();
    
}

int main() {
    base b;
    derived d;
    d.member_test();
    b.public_member();
}
