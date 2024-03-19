//main.cc
#include "templatec.h"

int main(){
    TemplateC<int> container1;
    TemplateC<double> container2;

    container1.add(1);
    container2.add(3.4);

    container1.display();
    container2.display();
}