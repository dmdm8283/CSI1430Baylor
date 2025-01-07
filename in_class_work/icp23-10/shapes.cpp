#include "shapes.h"
#include <vector>

double calculateAreaCircle(int radius){
    return 3.14 * radius * radius;
}
double calculateAreaCircle(double radius){
    return 3.14 * radius * radius;
}
std::vector<double> calculateAreaCircle(std::vector<double> radius){
    std::vector<double> area;
    for(int i = 0; i < radius.size(); i++){
        area.push_back(calculateAreaCircle(radius.at(i)));
    }
    return area;
}