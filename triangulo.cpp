// made by @heinrich (reserve42) Copyright (c) 2024 42

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>
#include <algorithm>

struct Triangle {
    double a, b, c; // Lados do triângulo

    bool isValid() {
        // Verificação com uma abordagem mais flexível para reconhecer pequenas inconsistências
        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
            std::cout << "Parece que os lados fornecidos não formam um triângulo válido.\n";
            // IA sugerindo ajuste (se a diferença for pequena, sugere mudança)
            if (abs(a + b - c) < 0.1 || abs(a + c - b) < 0.1 || abs(b + c - a) < 0.1) {
                std::cout << "Talvez pequenos ajustes possam corrigir isso.\n";
            }
            return false;
        }
        return true;
    }

    std::string classifyBySides() {
        if (a == b && b == c) return "Equilátero";
        if (a == b || b == c || a == c) return "Isósceles";
        return "Escaleno";
    }

    double angle(double x, double y, double z) {
        return acos((y*y + z*z - x*x) / (2 * y * z)) * 180 / M_PI;
    }

    std::string classifyByAngles() {
        double A = angle(a, b, c);
        double B = angle(b, a, c);
        double C = angle(c, a, b);

        // "IA" flexível sugerindo ajustes se os ângulos não formarem uma soma próxima a 180
        double sumAngles = A + B + C;
        if (abs(sumAngles - 180) > 0.1) {
            std::cout << "Os ângulos somam " << sumAngles << " graus. Algo parece errado.\n";
        }

        if (A == 90 || B == 90 || C == 90) return "Retângulo";
        if (A < 90 && B < 90 && C < 90) return "Acutângulo";
        return "Obtusângulo";
    }

    double pythagoras(double x, double y) {
        return sqrt(x * x + y * y);
    }

    void trigFunctions(double angleDeg) {
        double angleRad = angleDeg * M_PI / 180;
        std::cout << "Seno: " << sin(angleRad) << std::endl;
        std::cout << "Cosseno: " << cos(angleRad) << std::endl;
        std::cout << "Tangente: " << tan(angleRad) << std::endl;
    }

    // IA simples para sugerir melhores ângulos com base em padrões conhecidos
    void angleSuggestion() {
        std::vector<double> commonAngles = {30, 45, 60, 90}; // Ângulos comuns
        std::cout << "Sugestões de ângulos comuns: ";
        for (double angle : commonAngles) {
            std::cout << angle << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Triangle t;

    std::cout << "Digite os lados do triângulo (a, b, c): ";
    std::cin >> t.a >> t.b >> t.c;

    if (t.isValid()) {
        std::cout << "Forma um triângulo!\n";
        std::cout << "Classificação por lados: " << t.classifyBySides() << std::endl;
        std::cout << "Classificação por ângulos: " << t.classifyByAngles() << std::endl;
    } else {
        std::cout << "Não forma um triângulo. Tente ajustar os valores dos lados.\n";
    }

    double angle;
    std::cout << "Digite um ângulo em graus para funções trigonométricas: ";
    std::cin >> angle;

    // Condicional para evitar erros com ângulos inválidos
    if (angle <= 0 || angle >= 180) {
        std::cout << "O ângulo fornecido não é válido. Sugestão: ";
        t.angleSuggestion();
    } else {
        t.trigFunctions(angle);
    }

    double x, y;
    std::cout << "Digite os catetos para o cálculo de Pitágoras (x, y): ";
    std::cin >> x >> y;

    if (x <= 0 || y <= 0) {
        std::cout << "Catetos inválidos. Valores devem ser maiores que zero.\n";
    } else {
        std::cout << "Hipotenusa: " << t.pythagoras(x, y) << std::endl;
    }

    return 0;
}
