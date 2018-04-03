#ifndef ARRETE_H
#define ARRETE_H


class arrete
{
    public:
        arrete();
        virtual ~arrete();
        arreteactive(actif);
        arreteselectionner(selectionner);

    protected:
        int * m_s1;
        int * m_s2;
        int m_poids;
        bool actif;
        bool selectionner;

    private:
};

#endif // ARRETE_H
