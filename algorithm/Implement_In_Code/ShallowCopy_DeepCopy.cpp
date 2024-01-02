#include <iostream>

class GameObject {
public:
    int* health;

    GameObject(int h) {
        health = new int(h);
    }

    /* Shallow copy constructor*/
    GameObject(const GameObject& source) {
        health = source.health;
    }

    /* Deep copy constructor */
    //GameObject(const GameObject& source)
    //{
    //    health = new int(*source.health);
    //}

    ~GameObject() {
        delete health;
    }
};

int main() {
    GameObject enemy(100); // Enemy with 100 health
    GameObject copiedEnemy = enemy; // Shallow copy


    //GameObject DeepCopiedEnemy(enemy);  // Deep copy
    
    
    // Modifying the original object's health
    *enemy.health = 50;

    std::cout << "Enemy Health: " << *enemy.health << std::endl; 
    std::cout << "Copied Enemy Health: " << *copiedEnemy.health << std::endl; // This will show 50, not 100
    //std::cout << "DeepCopied Enemy Health: " << *DeepCopiedEnemy.health << std::endl; // This will show 100

    return 0;
}
