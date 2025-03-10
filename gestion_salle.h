#ifndef GESTION_SALLE_H
#define GESTION_SALLE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Gestion_salle
{
public:
    Gestion_salle();
    Gestion_salle(int,QString,QString,int);

    int getid(){return id;}
    int getprix(){return prix;}
    QString getnom(){return nom;}
    QString getadresse(){return adresse;}

    void setid(int id){this->id=id;}
    void setprix(int prix){this->prix=prix;}
    void setnom(QString nom){this->nom=nom;}
    void setadresse(QString adresse){this->adresse=adresse;}
    bool ajouter();
    QSqlQueryModel* afficher();
      bool supprimer(int);
    bool rechercheid(int);
    bool recherchenom(QString);
    bool modifier(int);
    bool rechercheprix(int);
    QSqlQueryModel* afficherid(int);
    QSqlQueryModel* affichernom(QString);
    QSqlQueryModel* afficherprix(int);


 private:
    int id,prix;
    QString nom,adresse;

    };

#endif // GESTION_SALLE_H
