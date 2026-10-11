#include <iostream>
#include <string>
#include <print>


enum class Aliment {
    BURGER,
    SUSHI,
    SALADE,
    PIZZA,
};

std::string nom (Aliment alim) {
    switch (alim) {
        case Aliment::BURGER:
            return"Burger";
            break;
        case Aliment::SUSHI:
            return"Sushi";
            break;
        case Aliment::SALADE:
            return"Salade";
            break;
        case Aliment::PIZZA:
            return"Pizza";
            break;
        default:
            return "";
    }
}
int prix (Aliment prix_alim) {
    switch (prix_alim) {
        case Aliment::BURGER:
            return 12;
            break;
        case Aliment::SUSHI:
            return 18;
            break;
        case Aliment::SALADE:
            return 9;
            break;
        case Aliment::PIZZA:
            return 15;
            break;
        default:
           return 0;
    }
}


int main() {

int choice;
int addition = 0;
    do {
        std::println("Veuillez choisir un aliment dans notre menu:");
        std::println("1.Burger 2.Sushi 3.Salade 4.Pizza 0.L'addition");
        std::cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            Aliment choice_alim = static_cast<Aliment>(choice - 1);
            std::println("Votre choix: {}",choice);
            std::println(" ");
            std::println("{} ajoute: {}CHF", nom(choice_alim), prix(choice_alim));
            std::println(" ");
            addition += prix(choice_alim);
        }
        else if (choice == 0)
        {
            std::println("Total a payer: {}CHF", addition);
        }
        else
        {
            std::println("Nous n'avons pas ce plat desole!");

        }

    }while (choice != 0);















    return 0;
}