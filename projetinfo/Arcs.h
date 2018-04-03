#ifndef ARCS_H_INCLUDED
#define ARCS_H_INCLUDED

class arcs
{
    public:
        arcs();
        ~arcs();
        arcActive(actif);
        arcSelectionner(selectionner);

    protected:
        int * m_s1;
        int * m_s2;
        int m_poids;
        bool actif;
        bool selectionner;

    private:
};


#endif // ARCS_H_INCLUDED
