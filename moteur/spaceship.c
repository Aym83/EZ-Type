//#include <sauvegarde.h>

typedef struct {
	float x;
	float y;
	char skin[20];
	int shield;
	int life;
	int shotSpeed;
	int shotNb;
} Spaceship;

static int speedX = 20;
static int speedY = 20;

static Spaceship spaceship;

void initSpaceship() {
	spaceship.x = LargeurFenetre()*0.2;
	spaceship.y = HauteurFenetre()*0.5;
}

void moveUp(Spaceship *spaceship) {
	spaceship->y += speedY;
}

void moveDown(Spaceship *spaceship) {
	spaceship->y -= speedY;
}

void moveLeft(Spaceship *spaceship) {
	spaceship->x -= speedX;
}

void moveRight(Spaceship *spaceship) {
	spaceship->x += speedX;
}
