#include "QMyCustLable.h"

QMyCustLabel::QMyCustLabel(QWidget *parent):QLabel(parent)
{

}
#pragma execution_character_set("utf-8")
void QMyCustLabel::setLive(bool bLive/* = false*/)
{
    m_bLive = bLive;
}

void QMyCustLabel::paintEvent(QPaintEvent * event)
{
    QLabel::paintEvent(event) ;
    QPainter painter(this) ;
    if(m_bLive)
        painter.drawText(QPoint(250,130),"未直播");
    else
        painter.drawText(QPoint(250,130),"直播中");
}
