#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Kingdom
{
public:
    string kingdom_name;
    int kd_characteristics;
    Kingdom(string kd):kingdom_name(kd){}
    Kingdom()
    {
        cout<<"Enter KINGDOM: "<<endl;
        cout<<"1. Monera\n2. Protista\n3. Fungi\n4. Plantae\n5. Animalia"<<endl;
        int kd;
        cin>>kd;
        kd_characteristics=kd;
        if(kd==1){kingdom_name="Monera";}
        if(kd==2){kingdom_name="Protista";}
        if(kd==3){kingdom_name="Fungi";}
        if(kd==4){kingdom_name="Plantae";}
        if(kd==5){kingdom_name="Animalia";}
    }

    void virtual show_details()
    {
        cout<<"----------------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
        if(kingdom_name=="Monera")//Monera
        {

            cout<<"Cellular Structure: Unicellular, Prokaryotic"<<endl;
            cout<<"Nutrition         : (MULTIPLE),Autotrophic"<<endl;
            cout<<"Movement          : NON-MOTILE(mostly),some can move using flagella or appendages"<<endl;
            cout<<"Reproduction      : Asexual, Binary fission"<<endl;

        }
        if(kingdom_name=="Protista")//Protista
        {

            cout<<"Cellular Structure: Unicellular, Eukaryotic(mostly)"<<endl;
            cout<<"Nutrition         : Autotrophic/Heterotrophic"<<endl;
            cout<<"Movement          : Locomotion through cilia,flagella,pseudopodia"<<endl;
            cout<<"Reproduction      : Sexual/Asexual"<<endl;

        }
        if(kingdom_name=="Fungi")//Fungi
        {

            cout<<"Cellular Structure: Multicellular, Eukaryotic, cell-walls made of chitin"<<endl;
            cout<<"Nutrition         : Heterotrophic, decomposers"<<endl;
            cout<<"Movement          : NON_MOTILE,grows by Mycelium extension"<<endl;
            cout<<"Reproduction      : Sexual/Asexual (spores production)"<<endl;
        }
        if(kingdom_name=="Plantae")//Plantae
        {

            cout<<"Cellular Structure: Multicellular, Eukaryotic, cell-walls made of cellulose"<<endl;
            cout<<"Nutrition         : Autotrophic, photosynthesis"<<endl;
            cout<<"Movement          : NON-MOTILE, stimuli based movement"<<endl;
            cout<<"Reproduction      : Sexual (seeds,spores) /Asexual (vegetative propagation)"<<endl;

        }
        if(kingdom_name=="Animalia")//Animalia
        {

            cout<<"Cellular Structure: Multicellular, Eukaryotic"<<endl;
            cout<<"Nutrition         : Heterotrophic"<<endl;
            cout<<"Movement          : MOTILE, locomotion"<<endl;
            cout<<"Reproduction      : Sexual"<<endl;

        }
    }
};

class Phylum: public Kingdom
{
public:
    string phylum_name;
    int ph_characteristics;
    Phylum(string kd,string ph):Kingdom(kd),phylum_name(ph){}
    Phylum()
    {
        cout<<"Enter PHYLUM:"<<endl;
        if(kingdom_name=="Plantae")
        {

            cout<<"1. Bryophyta\n2. Pteridophyta\n3. Anthocerotophyta\n4. Charophyta\n5. Chlorophyta\n6. Cycadophyta\n7. Ginkgophyta\n8. Glaucophyta\n9. Gnetophyta\n10. Lycophyta\n11. Magnoliophyta\n12. Marchantiaphyta\n13. Pinophyta"<<endl;
            int x;
            cin>>x;
            if(x==1){ph_characteristics=1;phylum_name="Bryophyta";}
        }
        if(kingdom_name=="Animalia")
        {
            cout<<"1. Porifera\n2. Cnidaria\n3. Platihelminthes\n4. Nematoda\n5. Mollusca\n6. Annelida\n7. Arthropoda\n8. Echinodermata\n9. Chordata\n10. Vertebrata\n11. Cephalopoda"<<endl;
            int x;
            cin>>x;
            if(x==9){ph_characteristics=2;phylum_name="Chordata";}
        }
    }
    void show_details()
    {
        cout<<endl;
        if(phylum_name=="Bryophyta")
        {
            cout<<"- Lack vascular tissue, small size, requires water for reproduction"<<endl;
        }
        if(phylum_name=="Chordata")
        {
            cout<<"- Notochord, Dorsal nerve cord, segmented muscles, bilateral symmetry, thyroid gland, closed circulatory system"<<endl;
        }
    }
};

class Class:public Phylum
{
public:
    string class_name;
    int class_characteristics;
    Class(string kd, string ph, string cl):Phylum(kd,ph),class_name(cl){}
    Class()
    {
        cout<<"Enter CLASS:"<<endl;
        {
            if(phylum_name=="Bryophyta")
            {
                cout<<"1. Bryopsida\n2. Marchantiopsida\n3. Anthocerotopsida"<<endl;
                int x;
                cin>>x;
                if(x==1){class_characteristics=1;class_name="Bryopsida";}
            }
            if(phylum_name=="Chordata")
            {
                cout<<"1. Agnatha\n2. Chondrichthyes\n3. Osteichthyes\n4. Amphibia\n5. Reptilia\n6. Aves\n7. Mammalia"<<endl;
                int x;
                cin>>x;
                if(x==7){class_characteristics=2;class_name="Mammalia";}
            }
        }
    }
    void show_details()
    {
        if(class_name=="Mammalia")
        {
            cout<<endl;
            cout<<"- Haircoat/furcoat, mammary glands, endothermy, four-chambered heart, diaphragm, live birth, complex nervous systems, specialized teeth, diverse locomotion, parental care, well developed senses"<<endl;
        }
        if(class_name=="Bryopsida")
        {
            cout<<endl;
            cout<<"- Gametophyte dominance, lack of vascular tissue, rhizoids, simple leaves, rhizome/stolon, asexual/sexual reproduction, found in wetlands and rocks"<<endl;
        }
    }
};

class Order: public Class
{
public:
    string order_name;
    int order_characteristics;
    Order(string kd, string ph, string cl, string od):Class(kd,ph,cl),order_name(od){}
    Order()
    {
        cout<<"Enter ORDER:"<<endl;
        {
            if(class_name=="Bryopsida")
            {
                cout<<"1. Bryales\n2. Hypnales\n3. Pottiales\n4. Funariales\n5. Dicranales\n6. Orthotrichales\n7. Polytrichales\n8. Splachnales"<<endl;
                int x;
                cin>>x;
                if(x==1){order_characteristics=1;order_name="Bryales";}
            }
            if(class_name=="Mammalia")
            {
                cout<<"1. Monotremata\n2. Marsupiala\n3. Soricomorpha\n4. Chiroptera\n5. Cetacea\n6. Carnivora\n7. Artiodactyla\n8. Rodentia\n9. Primates\n10. Lagomorpha\n11. Perissodactyla\n12. Proboscidea"<<endl;
                int x;
                cin>>x;
                if(x==9){order_characteristics=2;order_name="Primates";}
            }
        }
    }
    void show_details()
    {
        if(order_name=="Bryales")
        {
            cout<<endl;
            cout<<"- Gametophyte dominance, spirally arranged leaves, lack of vascular tissue, rhizoids, asexual/exual reproduction, capsules with peristome teeth, found in terrestrial habitats, forests, rock, soil"<<endl;
        }
        if(order_name=="Primates")
        {
            cout<<endl;
            cout<<"- Forward facing eyes, grasping hands and feet, nails instead of claws, relatively large brain, social behaviour, parental care, dietary adaptation, flexible limbs & limb mobility, "<<endl;
        }
    }
};

class Family: public Order
{
public:
    string family_name;
    int family_characteristics;
    Family(string kd, string ph, string cl, string od, string fm):Order(kd,ph,cl,od),family_name(fm){}
    Family()
    {
        cout<<"Enter FAMILY:"<<endl;
        {
            if(order_name=="Bryales")
            {
                cout<<"1. Bryaceae\n2. Mniaceae\n3. Bartramiaceae\n4. Brachytheciaceae\n5. Leptodontaceae\n6. Dicranaceae\n7. Ditrichaceae\n8. Grimmiaceae"<<endl;
                int x;
                cin>>x;
                if(x==1){family_characteristics=1;family_name="Bryaceae";}
            }
            if(order_name=="Primates")
            {
                cout<<"1. Hominidae\n2. Cercopithecidaea\n3. Cebidae\n4. Callitrichidae\n5. Atelidae\n6. Lemuridae\n7. Lorisidae \n8. Tarsiidae \n9. Hylobatidae"<<endl;
                int x;
                cin>>x;
                if(x==1){family_characteristics=2;family_name="Hominidae";}
            }
        }
    }
     void show_details()
    {
        if(family_name=="Bryaceae")
        {
            cout<<endl;
            cout<<"- One cell layer thick (Unistratose) leaves, leaves spirally arranged along the stem,  single, slender midrib or costa running along the length of each leaf,  have rhizoids, found in soils, logs"<<endl;
        }
        if(family_name=="Hominidae")
        {
            cout<<endl;
            cout<<"- Bipedalism, Large brain size, tail not present, complex social structures, tool use and manufacturing, varied diet"<<endl;
        }
    }
};

class Genus: public Family
{
public:
    string genus_name;
    int genus_characteristics;
    Genus(string kd, string ph, string cl, string od, string fm,string gn):Family(kd,ph,cl,od,fm),genus_name(gn){}
    Genus()
    {
        cout<<"Enter GENUS:"<<endl;
        {
            if(family_name=="Bryaceae")
            {
                cout<<"1. Bryum\n2. Aulacomnium\n3. Leptobryum\n4. Plagiobryum\n5. Mielichhoferia\n6. Trichostomum\n7. Rosulabryum\n8. Hypnodendron"<<endl;
                int x;
                cin>>x;
                if(x==1){genus_characteristics=1;genus_name="Bryum";}
            }
            if(family_name=="Hominidae")
            {
                cout<<"1. Homo\n2. Pan\n3. Gorilla\n4. Pongo"<<endl;
                int x;
                cin>>x;
                if(x==1){genus_characteristics=2;genus_name="Homo";}
            }
        }
    }
    void show_details()
    {
        if(genus_name=="Bryum")
        {
            cout<<endl;
            cout<<"- Unistratose leaves, lance shaped or narrowly elliptical,  single, slender midrib or costa running along the length of each leaf,  have rhizoids, found in soils, logs"<<endl;
        }
        if(genus_name=="Homo")
        {
            cout<<endl;
            cout<<"- Cognitive advancements through flexibility"<<endl;
        }
    }
};

class Species: public Genus
{
public:
    string species_name;
    int species_characteristics;
    Species(string kd, string ph, string cl, string od, string fm, string gn, string sp):Genus(kd,ph,cl,od,fm,gn),species_name(sp){}
    Species()
    {
        cout<<"Enter SPECIES:"<<endl;
        {
            if(genus_name=="Bryum")
            {
                cout<<"1. argenteum\n2. capillare\n3. caespiticium\n4. pallescens\n5. pseudotriquetrum\n6. radiculosum\n7. weigelii\n8. kunzeanum"<<endl;
                int x;
                cin>>x;
                if(x==1){species_characteristics=1;species_name="argenteum";}
            }
            if(genus_name=="Homo")
            {
                cout<<"1. sapiens\n2. neanderthalensis\n3. erectus\n4. habilis\n5. heidelbergensis\n6. floresiensis\n7. naledi\n8. rhodesiensis"<<endl;
                int x;
                cin>>x;
                if(x==1){species_characteristics=2;species_name="sapiens";}
            }
        }
    }
    void show_details()
    {
        if(species_name=="argenteum")
        {
            cout<<endl;
            cout<<"SCIENTIFIC NAME          :Bryum argenteum"<<endl;
            cout<<"TRADITIONAL NAME         :Silver moss"<<endl;
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
        }
        if(species_name=="sapiens")
        {
            cout<<endl;
            cout<<"SCIENTIFIC NAME          :Homo sapiens"<<endl;
            cout<<"TRADITIONAL NAME         :Human"<<endl;
            cout<<"----------------------------------------------------------------------------------------------"<<endl;
        }
    }
    void show_classification()
    {
        cout<<"----------------------------------------------------------------------------------------------"<<endl;
        cout<<"CLASSIFICATION OF "<<genus_name<<" "<<species_name<<endl;
        cout<<kingdom_name<<" - "<<phylum_name<<" - "<<class_name<<" - "<<order_name<<" - "<<family_name<<" - "<<genus_name<<" - "<<species_name<<endl;
    }
    friend int prompt();

    template <typename spc>
    void display(spc& sp)
    {
        sp.show_classification();
        sp.Kingdom::show_details();
        sp.Phylum::show_details();
        sp.Class::show_details();
        sp.Order::show_details();
        sp.Family::show_details();
        sp.Genus::show_details();
        sp.Species::show_details();
    }
};


int prompt()
{
    cout<<"========================================================================================================================"<<endl;
    cout<<"                                                     Welcome to Taxonomy.io"<<endl;
    cout<<"                                       1. START Detailing living being by classifications"<<endl;
    cout<<"                                       2. START Detailing living being by Scientific name"<<endl;
    cout<<"                                       3. START detailing living being by traditional name"<<endl;
    cout<<"                                                             0. EXIT"<<endl;
    cout<<"========================================================================================================================\n"<<endl;
    cout<<"1 / 2 / 3 / 0:           "<<endl;
    int x;
    cin>>x;
    if(x==1)
    {
        Species sp;
        sp.display(sp);
    }
    if(x==2)
    {
        cout<<"Enter name:"<<endl;
        cout<<"1. Homo Sapiens"<<endl;
        cout<<"2. Bryum argenteum"<<endl;
        int xx;
        cin>>xx;
        if(xx==1)
        {
            Species sp("Animalia","Chordata","Mammalia","Primates","Hominidae","Homo","sapiens");
            sp.display(sp);
        }
        if(xx==2)
        {
            Species sp("Plantae","Bryophyta","Bryopsida","Bryales","Bryaceae","Bryum","argenteum");
            sp.display(sp);
        }
    }
    if(x==3)
    {
        cout<<"Enter name:"<<endl;
        cout<<"1. Human"<<endl;
        cout<<"2. Silver moss"<<endl;
        int xx;
        cin>>xx;
        if(xx==1)
        {
            Species sp("Animalia","Chordata","Mammalia","Primates","Hominidae","Homo","sapiens");
            sp.display(sp);
        }
        if(xx==2)
        {
            Species sp("Plantae","Bryophyta","Bryopsida","Bryales","Bryaceae","Bryum","argenteum");
            sp.display(sp);
        }
    }
    if(x==0){exit(0);}
}


int main()
{
    while(1)
    {
        prompt();
    }
    return 0;
}
