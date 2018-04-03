#ifndef ARCS_H_INCLUDED
#define ARCS_H_INCLUDED

class Arcs
{
public:

        ///constructor & destructor
        arrete();
        ~arrete();

        ///getter
        gets1();
        gets2();
        getspoid();
        getactf();
        getselec();

        ///setter
        sets1();
        sets2();
        setpoid();
        setactf();
        setselec();

        ///fonction
        arreteactive(actif);
        arreteselectionner(selectionner);
        allocmeme();

    protected:

        ///sommets
        int * m_s1;
        int * m_s2;

        int m_poids;

        ///booléen
        bool actif;
        bool selectionner;

#endif // ARCS_H_INCLUDED
}
