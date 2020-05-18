#ifndef RECT_H
#define RECT_H
#include "RectManager.h"

class Rect {    // Rect Ŭ���� ����
    int width, height;
public:
    Rect(int width, int height);
    friend bool RectManager::equals(Rect r, Rect s);
};

#endif // !1
