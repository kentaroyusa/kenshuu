//
//  main.cpp
//  dokushu6-5
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.関係演算子の小なり(<)と論理演算子を使って、他の５種類の関係演算子を表せ（==,!=,>,>=,<=）
 */


class Integer{
    int value;
public:
    Integer(int value):value(value){}
    bool operator == (const Integer& rhs)const;
    bool operator != (const Integer& rhs)const;
    bool operator < (const Integer& rhs)const;
    bool operator >(const Integer& rhs)const;
    bool operator >= (const Integer& rhs)const;
    bool operator <= (const Integer& rhs)const;
};
bool Integer::operator ==(const Integer& rhs)const{
    return value == rhs.value;
}
bool Integer::operator !=(const Integer& rhs)const{
    return !(*this == rhs);
}
bool Integer::operator < (const Integer& rhs)const{
    return value < rhs.value;
}
bool Integer::operator > (const Integer& rhs)const{
    return rhs < *this;
}
bool Integer::operator <=(const Integer& rhs)const{
    return ! (rhs < *this) ;
}
bool Integer::operator >=(const Integer& rhs)const{
    return rhs <= *this;
}
int main() {
    Integer x=10;
    Integer y=3;
    if(x!=y){
        std::cout<<"x!=y"<<std::endl;
    }
    if(x<=y){
        
    }
    else{
    std::cout<<"x<=y"<<std::endl;
    }
}
