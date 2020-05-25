//
//  main.cpp
//  dokushu6-4
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

class Integer{
    int value;
public:
    Integer(int value):value(value){}

    Integer operator | (const Integer& rhs)const;
    Integer operator & (const Integer& rhs)const;
    Integer operator ^ (const Integer& rhs)const;
    Integer operator ~ ()const;
    
    void show() const{std::cout<<value<<std::endl;}
};
Integer Integer::operator | (const Integer& rhs)const{
    return Integer{value | rhs.value};
}
Integer Integer::operator & (const Integer& rhs)const{
    return Integer{value & rhs.value};
}
Integer Integer::operator ^ (const Integer& rhs)const{
    return Integer{value ^ rhs.value};
}
Integer Integer::operator ~ ()const{
    return Integer{~value};
}

int main() {
    Integer x=0b0011;
    Integer y=0b1100;
    Integer z=0b1001;
    auto a=x^z;
    a.show();
    auto b=x&z;
    b.show();
    auto c=x|z;
    c.show();
    auto d=~(x^y)|(z&x);
    d.show();
    
}
