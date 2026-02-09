#include <iostream>

#include "color.h"

int main() {
    int height = 256;
    int width = 256;

    std::cout << "P3\n" << width << " " << height << "\n255\n";

    for (int j = 0; j < height; j++) {
        std::clog << "\rScanlines remaining: " << (height - j) << ' '
                  << std::flush;

        for (int i = 0; i < width; i++) {
            color clr =
                color(double(i) / (width - 1), double(i) / (height - 1), 0.0);
            write_color(std::cout, clr);
        }
    }
    std::clog << "\rDone.                 \n";
}