// Copyright (c) 2019 The OHONETWORK developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLOHOWIDGET_H
#define COINCONTROLOHOWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlOhoWidget;
}

class CoinControlOhoWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlOhoWidget(QWidget *parent = nullptr);
    ~CoinControlOhoWidget();

private:
    Ui::CoinControlOhoWidget *ui;
};

#endif // COINCONTROLOHOWIDGET_H
