// Copyright (c) 2017-2020 The OHONETWORK developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZOHOCONTROLDIALOG_H
#define ZOHOCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zoho/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZOhoControlDialog;
}

class CZOhoControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZOhoControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZOhoControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZOhoControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZOhoControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZOhoControlDialog(QWidget *parent);
    ~ZOhoControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZOhoControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZOhoControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZOHOCONTROLDIALOG_H
