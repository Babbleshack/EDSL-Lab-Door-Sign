#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char *name;
    char *specialisation;
} member;

static void initMember(member *m, char* name, char* speciality) {
    m->name = name;
    m->specialisation = speciality;
}

int main () {
    int memberCount = 5;
    member* edslLab = malloc(memberCount * sizeof(member));

    initMember(&edslLab[0], "GingFung \"Matthew\" Yeung", "Orchestration for ML/DL");
    initMember(&edslLab[1], "Dominic Lindsay",            "Orchestration Systems");
    initMember(&edslLab[2], "Damian Borowiec",            "Energy Aware Orchestration");
    initMember(&edslLab[3], "Petter Terenis",             "Fault Tolerance Interfaces");
    initMember(&edslLab[4], "James Bulman",               "Distributed Game Engines");

    for(int i = 0; i < memberCount; i++) {
        printf("%s -- %s\n", edslLab[i].name, edslLab[i].specialisation);
    }

    free(edslLab);
    return 0;
}
