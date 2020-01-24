#pragma once

#include <Plasma/ContainmentActions>

class QAction;

class RunCommand : public Plasma::ContainmentActions {
    Q_OBJECT

public:
    RunCommand(QObject* parent, const QVariantList& args);

    QList<QAction*> contextualActions() override;

private Q_SLOTS:
    void runCommand();

private:
    QAction* action;
};
