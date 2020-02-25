// Copyright (c) 2019 The OHONETWORK developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COLDSTAKINGWIDGET_H
#define COLDSTAKINGWIDGET_H

#include "qt/ohonetwork/pwidget.h"
#include "qt/ohonetwork/furabstractlistitemdelegate.h"
#include "qt/ohonetwork/txviewholder.h"
#include "qt/ohonetwork/tooltipmenu.h"
#include "qt/ohonetwork/sendmultirow.h"
#include "qt/ohonetwork/litenodestakingmodel.h"
#include "qt/ohonetwork/contactsdropdown.h"
#include "qt/ohonetwork/addressholder.h"
#include "transactiontablemodel.h"
#include "addresstablemodel.h"
#include "addressfilterproxymodel.h"
#include "coincontroldialog.h"

#include <QAction>
#include <QLabel>
#include <QWidget>
#include <QSpacerItem>
#include <atomic>

class OHONETWORKGUI;
class WalletModel;
class CSDelegationHolder;

namespace Ui {
class LiteNodeStakingWidget;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

class LiteNodeStakingWidget : public PWidget
{
    Q_OBJECT

public:
    explicit LiteNodeStakingWidget(OHONETWORKGUI* parent);
    ~LiteNodeStakingWidget();

    void loadWalletModel() override;
    void run(int type) override;
    void onError(QString error, int type) override;

public slots:
    void walletSynced(bool sync);

private slots:
    void changeTheme(bool isLightTheme, QString &theme) override;
    void handleAddressClicked(const QModelIndex &index);
    void handleMyColdAddressClicked(const QModelIndex &rIndex);
    void onCoinControlClicked();
    void onColdStakeClicked();
    void updateDisplayUnit();
    void showList(bool show);
    void onSendClicked();
    void onDelegateSelected(bool delegate);
    void onEditClicked();
    void onDeleteClicked();
    void onCopyClicked();
    void onCopyOwnerClicked();
    void onAddressCopyClicked();
    void onAddressEditClicked();
    void onTxArrived(const QString& hash, const bool& isCoinStake, const bool& isCSAnyType);
    void onContactsClicked(bool ownerAdd);
    void clearAll();
    void onLabelClicked();
    void onMyStakingAddressesClicked();
    void onDelegationsRefreshed();

private:
    Ui::LiteNodeStakingWidget *ui = nullptr;
    FurAbstractListItemDelegate *delegate = nullptr;
    FurAbstractListItemDelegate *addressDelegate = nullptr;
    TransactionTableModel* txModel = nullptr;
    AddressHolder* addressHolder = nullptr;
    AddressTableModel* addressTableModel = nullptr;
    AddressFilterProxyModel *addressesFilter = nullptr;
    LiteNodeStakingModel* csModel = nullptr;
    CSDelegationHolder *txHolder = nullptr;
    CoinControlDialog *coinControlDialog = nullptr;
    QAction *btnOwnerContact = nullptr;
    QSpacerItem *spacerDiv = nullptr;

    bool isInDelegation = true;

    ContactsDropdown *menuContacts = nullptr;
    TooltipMenu* menu = nullptr;
    TooltipMenu* menuAddresses = nullptr;
    SendMultiRow *sendMultiRow = nullptr;
    bool isShowingDialog = false;
    bool isChainSync = false;

    bool isContactOwnerSelected;
    int64_t lastRefreshTime = 0;
    std::atomic<bool> isLoading;

    // Cached index
    QModelIndex index;
    QModelIndex addressIndex;


    int nDisplayUnit;

    void showAddressGenerationDialog(bool isPaymentRequest);
    void onContactsClicked();
    void tryRefreshDelegations();
    bool refreshDelegations();
    void onLabelClicked(QString dialogTitle, const QModelIndex &index, const bool& isMyLiteNodeStakingAddresses);
    void updateStakingTotalLabel();
};

#endif // COLDSTAKINGWIDGET_H
