#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
using namespace Eigen;

const double MY_PI = 3.1415926;

int main(){
    Vector3f p(2.0f,1.0f,1.0f);
    Matrix3f Mr;
    Matrix3f Mt;
    float r=45.0f/180.0f*MY_PI;
    Mr << cos(r),   -sin(r),  0,
        sin(r),     cos(r),   0,
        0,          0,        1;
    Mt<<    1,0,1,
            0,1,2,
            0,0,1;
    //Vector3f p1();
    std::cout<<Mr*Mt*p<<std::endl;
    return 0;
}