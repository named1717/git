#include <bangtal.h>
#include <stdio.h>
#include <stdlib.h>

SceneID scene1;
ObjectID startbutton, keypad;
ObjectID p[16];

int pX[16] = { 300,450,600,750,300,450,600,750, 300,450,600,750, 300,450,600,750 };
int pY[16] = { 470,470,470,470,320,320,320,320,170,170,170,170,20,20,20,20 };
auto started = 0;
bool checkin(int x, int y, int cx, int cy, int r) {
	return (x >= cx - r && x <= cx + r && y >= cy - r && y <= cy + r);
}
int swap(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return true;
}
ObjectID makeobject(const char* image, SceneID scene, int x, int y, bool shown) {
	ObjectID object = createObject(image);
	locateObject(object, scene, x, y);
	if (shown) {
		showObject(object);
	}
	return object;
}
void Keyboard(KeyCode, KeyState)
{
	if (started == 0) {
		setSceneImage(scene1, "배경.png");
		int started = 2;
		hideObject(startbutton);
		setObjectImage(p[15], "blank.png");
		for (int i = 0; i < 500; i++) {
			int random = int(rand() % 15);
			locateObject(p[15], scene1, pX[random], pY[random]);
			locateObject(p[random], scene1, pX[15], pY[15]);
			swap(&pX[random], &pX[15]);
			swap(&pY[random], &pY[15]);
		}
	}
	else if (started != 1) {
		void();
	}
}
void objectrelocate(ObjectID object, int x, int y, MouseAction action) {

	if (object == p[0] && checkin(pX[0], pY[0], pX[15], pY[15], 150)) {
		locateObject(p[0], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[0], pY[0]);
		swap(&pX[0], &pX[15]);
		swap(&pY[0], &pY[15]);
	}
	else if (object == p[1] && checkin(pX[1], pY[1], pX[15], pY[15], 150)) {
		locateObject(p[1], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[1], pY[1]);
		swap(&pX[1], &pX[15]);
		swap(&pY[1], &pY[15]);
	}
	else if (object == p[2] && checkin(pX[2], pY[2], pX[15], pY[15], 150)) {
		locateObject(p[2], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[2], pY[2]);
		swap(&pX[2], &pX[15]);
		swap(&pY[2], &pY[15]);
	}
	else if (object == p[3] && checkin(pX[3], pY[3], pX[15], pY[15], 150)) {
		locateObject(p[3], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[3], pY[3]);
		swap(&pX[3], &pX[15]);
		swap(&pY[3], &pY[15]);
	}
	else if (object == p[4] && checkin(pX[4], pY[4], pX[15], pY[15], 150)) {
		locateObject(p[4], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[4], pY[4]);
		swap(&pX[4], &pX[15]);
		swap(&pY[4], &pY[15]);
	}
	else if (object == p[5] && checkin(pX[5], pY[5], pX[15], pY[15], 150)) {
		locateObject(p[5], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[5], pY[5]);
		swap(&pX[5], &pX[15]);
		swap(&pY[5], &pY[15]);
	}
	else if (object == p[6] && checkin(pX[6], pY[6], pX[15], pY[15], 150)) {
		locateObject(p[6], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[6], pY[6]);
		swap(&pX[6], &pX[15]);
		swap(&pY[6], &pY[15]);
	}
	else if (object == p[7] && checkin(pX[7], pY[7], pX[15], pY[15], 150)) {
		locateObject(p[7], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[7], pY[7]);
		swap(&pX[7], &pX[15]);
		swap(&pY[7], &pY[15]);
	}
	else if (object == p[8] && checkin(pX[8], pY[8], pX[15], pY[15], 150)) {
		locateObject(p[8], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[8], pY[8]);
		swap(&pX[8], &pX[15]);
		swap(&pY[8], &pY[15]);
	}
	else if (object == p[9] && checkin(pX[9], pY[9], pX[15], pY[15], 150)) {
		locateObject(p[9], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[9], pY[9]);
		swap(&pX[9], &pX[15]);
		swap(&pY[9], &pY[15]);
	}
	else if (object == p[10] && checkin(pX[10], pY[10], pX[15], pY[15], 150)) {
		locateObject(p[10], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[10], pY[10]);
		swap(&pX[10], &pX[15]);
		swap(&pY[10], &pY[15]);
	}
	else if (object == p[11] && checkin(pX[11], pY[11], pX[15], pY[15], 150)) {
		locateObject(p[11], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[11], pY[11]);
		swap(&pX[11], &pX[15]);
		swap(&pY[11], &pY[15]);
	}
	else if (object == p[12] && checkin(pX[12], pY[12], pX[15], pY[15], 150)) {
		locateObject(p[12], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[12], pY[12]);
		swap(&pX[12], &pX[15]);
		swap(&pY[12], &pY[15]);
	}
	else if (object == p[13] && checkin(pX[13], pY[13], pX[15], pY[15], 150)) {
		locateObject(p[13], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[13], pY[13]);
		swap(&pX[13], &pX[15]);
		swap(&pY[13], &pY[15]);
	}
	else if (object = p[14] && checkin(pX[14], pY[14], pX[15], pY[15], 150)) {
		locateObject(p[14], scene1, pX[15], pY[15]);
		locateObject(p[15], scene1, pX[14], pY[14]);
		swap(&pX[14], &pX[15]);
		swap(&pY[14], &pY[15]);
	}
	else {
		void();
	}
}

int main() {
	scene1 = createScene("퍼즐", "원본.png");
	p[0] = makeobject("1.png", scene1, pX[0], pY[0], true);
	p[1] = makeobject("2.png", scene1, pX[1], pY[1], true);
	p[2] = makeobject("3.png", scene1, pX[2], pY[2], true);
	p[3] = makeobject("4.png", scene1, pX[3], pY[3], true);
	p[4] = makeobject("5.png", scene1, pX[4], pY[4], true);
	p[5] = makeobject("6.png", scene1, pX[5], pY[5], true);
	p[6] = makeobject("7.png", scene1, pX[6], pY[6], true);
	p[7] = makeobject("8.png", scene1, pX[7], pY[7], true);
	p[8] = makeobject("9.png", scene1, pX[8], pY[8], true);
	p[9] = makeobject("10.png", scene1, pX[9], pY[9], true);
	p[10] = makeobject("11.png", scene1, pX[10], pY[10], true);
	p[11] = makeobject("12.png", scene1, pX[11], pY[11], true);
	p[12] = makeobject("13.png", scene1, pX[12], pY[12], true);
	p[13] = makeobject("14.png", scene1, pX[13], pY[13], true);
	p[14] = makeobject("15.png", scene1, pX[14], pY[14], true);
	p[15] = makeobject("16.png", scene1, pX[15], pY[15], true);
	showMessage("아무키나 눌러주세요");
	setKeyboardCallback(Keyboard);
	setMouseCallback(objectrelocate);
	startGame(scene1);
}
