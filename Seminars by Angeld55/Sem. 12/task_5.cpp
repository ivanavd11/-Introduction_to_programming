#include <iostream>

const int MAX_PLAYERS = 10;
const int MAX_NAME_LENGTH = 1024;

struct Player {
    char name[MAX_NAME_LENGTH];
    int points;
};

// Функция за копиране на низове
void copyString(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Функция за сравняване на низове
int compareStrings(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

void initializePlayers(Player players[], int& playerCount) {
    playerCount = 0;
}

void addPlayer(Player players[], int& playerCount, const char* name) {
    if (playerCount < MAX_PLAYERS) {
        copyString(players[playerCount].name, name);
        players[playerCount].points = 0;
        playerCount++;
    }
}

void addPoints(Player players[], int playerCount, const char* name, int points) {
    for (int i = 0; i < playerCount; ++i) {
        if (compareStrings(players[i].name, name) == 0) {
            players[i].points += points;
            return;
        }
    }
    std::cout << "Player not found!" << std::endl;
}

void sortPlayers(Player players[], int playerCount) {
    for (int i = 0; i < playerCount - 1; ++i) {
        for (int j = i + 1; j < playerCount; ++j) {
            if (players[j].points > players[i].points) {
                Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
}

void printScores(const Player players[], int playerCount) {
    std::cout << "Scores:" << std::endl;
    for (int i = 0; i < playerCount; ++i) {
        std::cout << players[i].name << " " << players[i].points << std::endl;
    }
}

int main() {
    Player players[MAX_PLAYERS];
    int playerCount;

    initializePlayers(players, playerCount);

    // Пример за добавяне на играчи
    addPlayer(players, playerCount, "Ivan Ivanov");
    addPlayer(players, playerCount, "Petur");
    addPlayer(players, playerCount, "Aleksandur Kadiev");

    printScores(players, playerCount);

    // Пример за добавяне на точки
    addPoints(players, playerCount, "Petur", 10);
    sortPlayers(players, playerCount);
    printScores(players, playerCount);

    addPoints(players, playerCount, "Petur", 3);
    sortPlayers(players, playerCount);
    printScores(players, playerCount);

    addPoints(players, playerCount, "Aleksandur Kadiev", 40);
    sortPlayers(players, playerCount);
    printScores(players, playerCount);

    return 0;
}