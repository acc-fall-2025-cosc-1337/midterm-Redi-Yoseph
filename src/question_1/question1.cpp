#include "question1.h"
#include <iostream>

bool test_config()
{
    return true;
}
void transcribe_dna_into_rna(const std::string& dna)
{
    std::string rna = dna;
    for (char &ch : rna) {
        if (ch == 'T') ch = 'U';
    }
    std::cout << rna << "\n";
}

std::string transcribe_dna_into_rna_1(const std::string& dna)
{
    std::string rna = dna;
    for (char &ch : rna) {
        if (ch == 'T') ch = 'U';
    }
    return rna;
}
