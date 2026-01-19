#include <cstdio>

void power_up(int isotopes) {
    static int rate_things_power = 200;
    rate_things_power += isotopes;
    printf("rate things powers: %d\n", rate_things_power);
}

int main() {
    power_up(300);
    power_up(400);
}
