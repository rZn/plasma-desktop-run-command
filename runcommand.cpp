#include "runcommand.hpp"

#include <QAction>

RunCommand::RunCommand(QObject* parent, const QVariantList& args)
        : Plasma::ContainmentActions(parent, args) {
    action = new QAction(this);
    QObject::connect(action, &QAction::triggered, this, &RunCommand::runCommand);
}

QList<QAction*> RunCommand::contextualActions() {
    QList<QAction*> actions;
    actions << action;
    return actions;
}

void RunCommand::runCommand() {
}

K_EXPORT_PLASMA_CONTAINMENTACTIONS_WITH_JSON(runcommand, RunCommand, "plasma-containmentactions-runcommand.json")

#include "runcommand.moc"
