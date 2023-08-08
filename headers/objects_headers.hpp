#include "../headers/headers.hpp"

class Object {
private:
    string name;
public:
    string GetName();
    void SetName(string new_name);

    Object(string name);
};