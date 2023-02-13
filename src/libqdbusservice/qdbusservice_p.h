#ifndef QDBUSSERVICE_P_H
#define QDBUSSERVICE_P_H

#include "service/serviceqtdbus.h"

#include <QObject>

class QDBusServicePrivate : public ServiceQtDBus
{
    Q_OBJECT
public:
    explicit QDBusServicePrivate(QObject *parent = nullptr);

    void InitPolicy(QDBusConnection::BusType busType, QString policyFile);

public Q_SLOTS:
    virtual void InitService();
};

#endif // QDBUSSERVICEPRIVATE_H
