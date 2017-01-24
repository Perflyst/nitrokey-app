//
// Created by sz on 23.01.17.
//

#ifndef NITROKEYAPP_STORAGEACTIONS_H
#define NITROKEYAPP_STORAGEACTIONS_H
#include <QObject>
#include "src/GUI/Authentication.h"
#include "src/ui/nitrokey-applet.h"

class StorageActions: public QObject {
Q_OBJECT

private:
  Q_DISABLE_COPY(StorageActions);

  Authentication * auth_admin;
  Authentication * auth_user;
  bool CryptedVolumeActive;
  bool HiddenVolumeActive;
  bool NormalVolumeRWActive;
  bool HiddenVolumeAccessable;
  bool StickNotInitated;
  bool SdCardNotErased;
  bool SdCardNotErased_DontAsk;
  bool StickNotInitated_DontAsk;
  bool Stick20ScSdCardOnline;


public:
  StorageActions(QObject *parent, Authentication *auth_admin, Authentication *auth_user);

public slots:
  void startStick20DestroyCryptedVolume(int fillSDWithRandomChars);
  void startStick20FillSDCardWithRandomChars();
  void startStick20EnableCryptedVolume();
  void startStick20DisableCryptedVolume();
  void startStick20EnableHiddenVolume();
  void startStick20DisableHiddenVolume();
  void startLockDeviceAction();
  void startStick20SetReadOnlyUncryptedVolume();
  void startStick20SetReadWriteUncryptedVolume();
  void startStick20LockStickHardware();
  void startStick20EnableFirmwareUpdate();
  void startStick20ExportFirmwareToFile();
  void startStick20DebugAction();
  void startStick20ClearNewSdCardFound();
  void startStick20SetupHiddenVolume();
signals:
  void updateTray();

};


#endif //NITROKEYAPP_STORAGEACTIONS_H
