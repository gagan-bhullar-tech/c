#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	const float TREE_HORIZONTAL_POSITION = 810;
	const float TREE_VERTICAL_POSITION = 0;

    VideoMode vm(1920, 1080);

	RenderWindow window(vm, "Timber", Style::Fullscreen);

	Texture textureBackground;

	textureBackground.loadFromFile("graphics/background.png");

	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);

	Texture textureTree;

	textureTree.loadFromFile("graphics/tree.png");
	Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(TREE_HORIZONTAL_POSITION, TREE_VERTICAL_POSITION);

	Texture textureBee;

	textureBee.loadFromFile("graphics/bee.png");
	Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 800);

	bool beeActive = false;
	
	float beeSpeed = 0.0f;

	Texture textureCloud;

	textureCloud.loadFromFile("graphics/cloud.png");

	Sprite spriteCloud1, spriteCloud2, spriteCloud3;
	spriteCloud1.setTexture(textureCloud);
	spriteCloud2.setTexture(textureCloud);
	spriteCloud3.setTexture(textureCloud);

	spriteCloud1.setPosition(0, 0);
	spriteCloud2.setPosition(0, 250);
	spriteCloud3.setPosition(0, 500);
	
	while (window.isOpen()) {

		window.clear();

		window.draw(spriteBackground);
		window.draw(spriteTree);
		window.draw(spriteBee);
		window.draw(spriteCloud1);
		window.draw(spriteCloud2);
		window.draw(spriteCloud3);

		window.display();

		if (Keyboard::isKeyPressed(Keyboard::Escape)) {
			window.close();
		}
	}
}