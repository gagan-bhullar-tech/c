#include <cstdio>

static int rat_things_power = 200;

void power_up(int isotopes) {
    rat_things_power += isotopes;
}

int main() {
    printf("initial value: %d\n", rat_things_power);
    power_up(300);
    printf("rat things powers: %d\n", rat_things_power);
    power_up(400);
    printf("rat things powers: %d", rat_things_power);
}
