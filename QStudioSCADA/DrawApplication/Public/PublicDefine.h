﻿#ifndef PUBLICDEFINE_H
#define PUBLICDEFINE_H

#include <QDomDocument>
#include <QGraphicsItem>
#include <QString>


const int LineItemType = QGraphicsItem::UserType + 1;
const int RectItemType = QGraphicsItem::UserType + 2;
const int EllipseItemType = QGraphicsItem::UserType + 3;
const int ArrowItemType = QGraphicsItem::UserType + 4;
const int TextItemType = QGraphicsItem::UserType + 14;
const int GroupItemType = QGraphicsItem::UserType + 16;
const int PolygonItemType = QGraphicsItem::UserType + 17;


enum {
    EL_X = 0, //coord X
    EL_Y = 1, //coord Y
    EL_WIDTH = 2,
    EL_HEIGHT = 3,
    EL_TOOLTIP = 4,
    EL_ID = 5, //unique id
    EL_BLOCK = 6,//blocking element, not movable
    EL_BACKGROUND = 7,
    EL_SIGN_BACKGROUND = 8,
    EL_BORDER_COLOR = 9,
    EL_BORDER_WIDTH = 10,
    EL_BORDER_STYLE = 11,
    EL_ANGLE = 12,
    EL_Z_VALUE = 13,
    EL_LINE_WIDTH = 14,
    EL_TEXT = 15,
    EL_FONT_FAMILY = 16,
    EL_FONT_SIZE = 17,
    EL_FONT_COLOR = 18,
    EL_GRAPHPAGE_LINK = 19, //transition to screen
    EL_MESSAGE_TYPE = 20, //accociate message 001-016
    EL_PROPERTY_EMPTY = 21
};

enum {
    GRAPHPAGE_ID,
    GRAPHPAGE_PRIORITY,
    GRAPHPAGE_BACKGROUND,
    GRAPHPAGE_WIDTH,
    GRAPHPAGE_HEIGHT
};

enum ComponentType {
    NEW_PROJECT,
    NEW_GRAPHPAGE
};

enum SaveGraphPageType {
    SAVE_XML,
    SAVE_BINARY,
    SAVE_IMAGE
};



#endif // IELEMENT_H

