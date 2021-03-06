#ifndef GUI_H
#define GUI_H

#include <QObject>
#include <QTableWidget>
#include <QHeaderView>
#include "map.h"

class GUI : public QObject
{
    Q_OBJECT
public:
    explicit GUI(Map *map, bool islist = false, int x = 0, int y = 0, QObject *parent = 0);
private:
    Map *map;
private slots:
    void cellDoubleClicked(int r, int c);
};

#endif // GUI_H
