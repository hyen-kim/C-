#include "RectManager.h"
#include "Rect.h"

bool RectManager::equals(Rect r, Rect s) {   // �ܺ� �Լ�
    if (r.width == s.width && r.height == s.height) {
        return true;
    }
    else {
        return false;
    }
}