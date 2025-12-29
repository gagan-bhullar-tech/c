#include<stdio.h>

enum class Race {
    Ivyn,
    Moiran,
    Camite,
    Julian
};

int main() {
    Race race = Race::Ivyn;

    switch(race) {
        case Race::Ivyn: {
            printf("Ivyn");
            break;
        }
        case Race::Moiran: {
            printf("Moiran");
            break;
        }
        case Race::Camite: {
            printf("Camite");
            break;
        }
        case Race::Julian: {
            printf("Julian");
            break;
        }
    }
}
