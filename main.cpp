#include <iostream>
#include <vector>
#include <map>

class point3d{
    double x;
    double y;
    double z;
public:

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }

    void randomiz(){
        x= 200.*((double)rand())/RAND_MAX-100;
        y= 200.*((double)rand())/RAND_MAX-100;
        z= 200.*((double)rand())/RAND_MAX-100;
 }
};

int main() {
    point3d a;
    std::vector<point3d> b;
    int i = 0;
    while (i < 51) {
        a.randomiz();
        b.push_back(a);
        //std::cout << "b" << i << "=" << b[i].getX() << "|" << b[i].getY() << "|" << b[i].getZ() << '\n';
        i++;
    }
    i = 0;
    while (i < 51) {
    if (b.)
    }
    return 0;
}