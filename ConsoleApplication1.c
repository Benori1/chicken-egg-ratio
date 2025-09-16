#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int eggs_per_year = 253;
    int egg_weight_g = 58;
    float chicken_weight_kg = 1.9;

    float total_egg_mass_kg = (eggs_per_year * egg_weight_g) / 1000.0;

    float ratio = total_egg_mass_kg / chicken_weight_kg;

    printf("УСЛОВИЕ ЗАДАЧИ:\n");
    printf("На птицефермах продукцию от кур-несушек получают в течении одного года.\n");
    printf("За год от каждой несушки получают по %d яйца, масса яиц – %d г.\n", eggs_per_year, egg_weight_g);
    printf("Живая масса курицы около %.1f кг.\n", chicken_weight_kg);
    printf("Во сколько раз продукция несушки превосходит ее массу?\n\n");

    printf("РЕШЕНИЕ:\n");
    printf("1. Находим общую массу яиц за год:\n");
    printf("   %d шт. * %d г = %d г\n", eggs_per_year, egg_weight_g, eggs_per_year * egg_weight_g);
    printf("   %d г / 1000 = %.2f кг\n\n", eggs_per_year * egg_weight_g, total_egg_mass_kg);

    printf("2. Находим искомое отношение:\n");
    printf("   %.2f кг / %.1f кг = %.2f\n\n", total_egg_mass_kg, chicken_weight_kg, ratio);

    printf("ОТВЕТ:\n");
    printf("Продукция несушки превосходит ее живую массу в %.2f раз.\n", ratio);

    return 0;
}