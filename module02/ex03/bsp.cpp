//
// Created by Attack Cristina on 08.08.2022.
//

#include "Point.h"
#include <iostream>

int sign(Point x1, Point x2, Point x3) {
    Fixed result = (x1.getX() - x3.getX()) * (x2.getY() - x3.getY()) - (x2.getX() - x3.getX()) * (x1.getY() - x3.getY());

    if (result > 0) {
        return 1;
    } else if (result < 0) {
        return -1;
    } else {
        return 0;
    }
}

bool bsp(Point a, Point b, Point c, Point const point) {
    int s1, s2, s3;

    s1 = sign(point, a, b);
    s2 = sign(point, b, c);
    s3 = sign(point, c, a);

    return (s1 + s2 + s3 == 3) || (s1 + s2 + s3 == -3);
}

void show(Point a, Point b, Point c, Point point) {
    int scale = 20;

    for (int i = 0; i < scale; i++) {
        for (int j = 0; j < scale; j++) {
            Point current(i, j);
            if (current.getX() == point.getX() && current.getY() == point.getY()) {
                std::cout << "o";
            } else if (bsp(a, b, c, current)) {
                std::cout << " ";
            } else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}