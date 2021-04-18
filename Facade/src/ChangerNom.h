#include <string>
#include <iostream>
// class changer nom permettant 
class ChangerNom{
    
    public:
    ~ChangerNom()=default;
    //methode rename prennat un string et retournant un string.xml
    std::string rename(std::string nom){
        std::cout<<"Le nom est maintenant "<< nom <<".XML\n";
        return nom+".XML";
    }
};