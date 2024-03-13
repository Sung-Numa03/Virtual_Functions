#include <iostream>

class Entity
{
public:
	virtual std::string GetName() { return "Entity"; };

};
class Player : public Entity
{
private:
	std::string m_Name;

public:
	Player(const std::string& name) : m_Name(name) {};
	std::string GetName() override { return m_Name; };
};
int main()
{
	Entity* Bee = new Entity;
	std::cout << Bee->GetName() << std::endl;

	Player* Cute = new Player("Sung");
	std::cout << Cute->GetName() << std::endl;

	std::cin.get();
}