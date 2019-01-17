#ifndef SAMPLE_APP_H
#define SAMPLE_APP_H

#include <string>
#include <vector>

class RomanNumberRepresentation
{
   public:
      int ArabicNumber;
      std::string RomanRepresentation;
};


class RomanNumerals
{
public:
    std::string Convert(int arabicNumber);

private:
   std::vector<RomanNumberRepresentation> RomanNumberMapping;
};

#endif //SAMPLE_APP_H
