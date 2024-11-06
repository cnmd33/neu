#include <iostream>
#include <cmath>

// 定义一个表示二维向量的类 Vector
class Vector 
{
private:
    double x, y; // 私有成员变量，表示向量的两个分量

public:
    // 构造函数，用于初始化向量的分量
    Vector(double x, double y) : x(x), y(y) {}

    // 公共方法 add，接受另一个 Vector 对象作为参数，并返回一个新的 Vector 对象，表示两个向量的和
    Vector add(const Vector& v) const 
    {
        return Vector(x + v.x, y + v.y);
    }

    // 公共方法 print，用于打印向量的分量
    void print() const
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    // 方法 dir，求取向量的模长并打印
    void dir() const 
    {
        double length = sqrt(x * x + y * y);
        std::cout << "Magnitude: " << length << std::endl;
    }
};

int main() 
{
    // 创建两个向量对象
    Vector v1(3.0, 4.0);
    Vector v2(12.0, 13.0);

    // 计算两个向量的和
    Vector sum = v1.add(v2);

    // 打印向量 v1
    std::cout << "Vector 1: ";
    v1.print();

    // 打印向量 v2
    std::cout << "Vector 2: ";
    v2.print();

    // 打印两个向量的和
    std::cout << "Sum : ";
    sum.print();

    // 打印和向量的模长
    sum.dir();

    return 0;
}