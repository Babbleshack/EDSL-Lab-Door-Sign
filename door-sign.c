#include <stdio.h>
#include <stdlib.h>
struct member {
    char *name;
    char *specialisation;
};
struct member* initMember(char* name, char* speciality) {
    struct member* m = (struct member*)malloc(sizeof(struct member));
    m->name = name;
    m->specialisation = speciality;
    return m;
}
int main () {
    struct member** edslLab = malloc(5 * sizeof(struct member*));    
    edslLab[0] = initMember("Dominic Lindsay", "Orchestration Systems");
    edslLab[1] = initMember("Damian Borowiec", "Energy Aware Orchestration");
    edslLab[2] = initMember("GingFung \"Matthew\" Yeung", "Orchestration for ML/DL");
    edslLab[3] = initMember("James Bullman", "Distributed Game Engines");
    edslLab[4] = initMember("Petter  Terenis", "Fault Tolerance Interfaces");
    int s = 5;
    for(int i = 0; i < s; i++) {
        printf("%s -- %s\n", edslLab[i]->name, edslLab[i]->specialisation);
    }
    for(int i = 0; i < s; i++) {
        free(edslLab[i]);
    }
    free(edslLab);
    return 0;
}
