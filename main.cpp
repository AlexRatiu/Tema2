#include <iostream>
#include <string>
#include "Animale.h"
#include "Caine.h"
#include "Adapost.h"

#include "memory"

int main() {
    std::shared_ptr<Animale> Mihai = std::make_shared<Animale>("pisica","Mihai","mascul",8,420);
    std::shared_ptr<Caine> Alex = std::make_shared<Caine>("caine", "Alex", "mascul", 3, 10, "dobermann");
    std::shared_ptr<Animale> Victor = std::make_shared<Animale>("papagal","Victor","mascul",2,690);
    std::shared_ptr<Caine> Tudor = std::make_shared<Caine>("caine", "Tudor", "mascul", 12, 245, "chihuahua");
    std::shared_ptr<Animale> Simona = std::make_shared<Animale>("pisica","Simona","femela",6,142);
    std::shared_ptr<Caine> Cristina = std::make_shared<Caine>("caine", "Cristina", "femela", 8, 68, "bichon");
    std::unique_ptr<Adapost>ALEX4ALL= std::make_unique<Adapost>(0);
    ALEX4ALL->add_animal(Mihai);
    ALEX4ALL->add_animal(Alex);
    ALEX4ALL->add_animal(Victor);
    ALEX4ALL->add_animal(Tudor);
    ALEX4ALL->add_animal(Simona);


    int cheie=-1;

    while(cheie!=0)
    {
            std::cout << "Pentru a adauga un animal apasa tasta 1" << std::endl;
            std::cout << "Pentru a cauta un animal apasa tasta 2" << std::endl;
            std::cout << "Pentru a elimina un animal apasa tasta 3" << std::endl;
            std::cout << "Pentru a afisa toate animalele apasa tasta 4" << std::endl;
            std::cout << "Pentru a iesi din program apasa tasta 0" << std::endl;

        std::cin>>cheie;
        switch (cheie) {
            default :
                break;
            case 1 : {
                ALEX4ALL->add_animal(Cristina);
                break;
            }
            case 2 : {
                std::string _specie;
                std::cout << "Ce specie cautati?" << std::endl;
                std::cin >> _specie;
                ALEX4ALL->cauta_animal(_specie);
                break;
            }
            case 3 : {
                std::cout<<"Care este id-ul animalului?"<<std::endl;
                int i;
                std::cin>>i;
                ALEX4ALL->sterge_animal(i);
                break;
            }
            case 4 : {
                ALEX4ALL->afisare();
                break;
            }
            case 0 : {
                break;
            }

        }

    }
    return 0;
}
