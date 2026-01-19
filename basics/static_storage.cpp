#include <cstdio>

static thread_local int rate_things_power = 200;

void power_up(int isotopes) {
    rate_things_power += isotopes;
    printf("rate things powers: %d\n", rate_things_power);
}

int main() {
    power_up(300);
    power_up(400);
}
