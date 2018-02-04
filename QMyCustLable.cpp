#include "QMyCustLabel.h"

QMyCustLabel::QMyCustLabel(QWidget *parent):QLabel(parent)
{

}

void QMyCustLabel::paintEvent(QPaintEvent *)
{
    QLabel::paintEvent(event) ;
    QPainter painter(this) ;
    painter.drawText(QPoint(5,25),"直播中");
}
