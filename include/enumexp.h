#ifndef ENUMEXP_H
#define ENUMEXP_H

//extern int hey;

//typedef  enum color{red, blue, green};

class EumExperiment{
    enum color{red, blue, green};
public:
    color expColor0 = red;
    color expColor1 = blue;
    color expColor2 = green;

    void displayTheEnum();
    void calculateEnumVal(int _val);

};

#endif // ENUMEXP_H
