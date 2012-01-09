//! \file    service_copy_dnoe_disk_to_data.h
//! \brief   Service pour copier les fichiers de la tablette tactile dans le répertoire de travail.
//! \author  Fabien Bradmetz
//! \version 1.00
//! \date    13 Décembre 2011 : création (Fabien Bradmetz)

#ifndef __SERVICE_COPY_DNOTEDISK_TO_DATA_H__
#define __SERVICE_COPY_DNOTEDISK_TO_DATA_H__

#include<QtGui>

#include "../../interface/serviceAbstractObject.h"
#include "../../interface/serviceAbstract.h"

//! \class CServiceCopyDNoteDiskToDataThread
//! \brief Le thread copie les fichiers périodiquement, il faudrait peut être le faire que quand c'est nécessaire. Voir QFileSystemWatcher.
class CServiceCopyDNoteDiskToDataThread : public QThread
{
    Q_OBJECT
   public :

    CServiceCopyDNoteDiskToDataThread();

    void setListDataService       (CListDataService *_list_data_service);

    void setTreeWidget (QTreeWidget *_tree_widget);

    void setStop (bool _stop);

    public slots :

    void slotFileChanged(const QString & _file);

   protected:

    void run();

   private :

   CListDataService *m_list_data_service;
   QTreeWidget *m_tree_widget;
   bool m_stop;
   QFileSystemWatcher m_file_system_watcher;
   bool m_refresh;
   QStringList m_list_file;
};


//! \class CServiceCopyDNoteDiskToData
//! \brief Service de copie des fichiers de la tablette tactile vers le répertoire de travail.
class CServiceCopyDNoteDiskToData : public CServiceAbstractObject , public CServiceAbstract
{
    Q_OBJECT
    Q_INTERFACES(CServiceAbstract)

public :

    CServiceCopyDNoteDiskToData();

    ~CServiceCopyDNoteDiskToData();

    virtual void init (CListDataService *_list_data_informations);

    virtual QObject *getObject();

    virtual QString getNameService();

    virtual QString getDescriptionService();

    virtual void createWidget();

    virtual void initWidget();

    void updateWidget();

    virtual QWidget * getWidget();

    void start ();

    void stop();

    void save (QDomDocument &_dom_document , QDomElement &_dom_element);

    void load (QDomDocument &_dom_document , QDomElement &_dom_element);

public slots :

    virtual void slotUpdate();


signals :

    void signalSendData();

private :


    QWidget *m_widget;

    QTreeWidget *m_tree_widget;



    QLineEdit *m_line_edit_dir_path;
    CServiceCopyDNoteDiskToDataThread *m_thread;




};



#endif
