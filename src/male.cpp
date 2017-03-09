#include "male.h"

std::vector<std::string> names = {
    "Donald",
    "Bernie",
    "Harambe",
    "Gabe",
    "Matthew",
    "Harry",
    "Ron",
    "Oswald",
    "Bruce",
    "Wilhelm"
};
std::vector<std::string> textures = {
    "assets/caveman.png",
    "assets/caveman1.png",
    "assets/caveman2.png"
};

Male::Male(int maxAge, int minAge) : Caveman() {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> unid(minAge, maxAge);
    std::uniform_int_distribution<int> unbd(0, 1);
    std::uniform_int_distribution<int> N(0, names.size() - 1);
    std::uniform_int_distribution<int> stats(1, 5);
    std::uniform_int_distribution<int> T(0, textures.size() - 1);

    age = unid(rng);
    name = names[N(rng)];
    texturePath = textures[T(rng)];
    fitness = stats(rng);
    intelligence = stats(rng);

    button = new Button({ 100, 200 }, { 0, 0 }, texturePath,
        nullptr, std::bind(&ButtonFunctions::Tribe::displayInfo, std::ref(*this)));

    infobox = new Textbox({ 200, 200 }, { 450, 400 }, "assets/info.png", "TEST");

    counter += 1;
}