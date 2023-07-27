#include <iostream>
#include <string>

class Tree {
public:
    virtual void draw() const = 0;
};

class TreePlus : public Tree {
public:
    void draw() const override {
        std::cout << "/ \\\n"
            "// \\\\\n";
    }
};

class TreeAsterisk : public Tree {
public:
    void draw() const override {
        std::cout << "/ \\\n"
            "/ ** \\\n";
    }
};

class TreeSlash : public Tree {
public:
    void draw() const override {
        std::cout << "/ \\\n"
            "/ ++ \\\\\n";
    }
};

int main() {
    TreePlus plusTree;
    TreeAsterisk asteriskTree;
    TreeSlash slashTree;

    Tree* trees[3] = { &plusTree, &asteriskTree, &slashTree };

    for (int i = 0; i < 3; i++) {
        trees[i]->draw();
        std::cout << "Малюнок " << i + 1 << ":\n";
    }

    return 0;
}
