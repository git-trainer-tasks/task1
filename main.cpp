#include <complex>
#include <iostream>
#include <string>

double getVersion() {
    std::complex<double> i = std::complex<double>(0, 1);
    std::complex<double> x = std::log(2.0) / M_PI + i;

    std::complex<double> version =
        std::pow(M_E, x * M_PI) * std::pow(M_E, M_PI * i);
    return version.real();
}

int main() {
    std::string name = "Aboba";
    double version = getVersion();

    std::cout << "Aboba v1.3" << std::endl;

    int a = 907;
    int b = 279;
    int c = 11037;
    int d = 0;
    int e = 116;
    int f = a + b + c / d + e * a;
    std::cout << f << std::endl;
}
