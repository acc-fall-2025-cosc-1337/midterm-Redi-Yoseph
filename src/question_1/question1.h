#ifndef QUESTION1_H
#define QUESTION1_H

#include <string>

bool test_config();

// Prints RNA to stdout
void transcribe_dna_into_rna(const std::string& dna);

// Returns RNA string (for testing)
std::string transcribe_dna_into_rna_1(const std::string& dna);

#endif // QUESTION1_H
