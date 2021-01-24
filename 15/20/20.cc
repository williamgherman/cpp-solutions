struct Base {};
struct Pub_Derv : public Base { void memfcn(Base &b) { b = *this; } };
struct Priv_Derv : private Base { void memfcn(Base &b) { b = *this; } };
struct Prot_Derv : protected Base { void memfcn(Base &b) { b = *this; } };
struct Derived_from_Public : public Pub_Derv {
    void memfcn(Base &b) { b = *this; }
};
struct Derived_from_Private : public Priv_Derv {
    void memfcn(Base &b) { b = *this; }
};
struct Derived_from_Protected : public Prot_Derv {
    void memfcn(Base &b) { b = *this; }
};

int main()
{
    Pub_Derv d1 = Pub_Derv();
    Priv_Derv d2 = Priv_Derv();
    Prot_Derv d3 = Prot_Derv();
    Derived_from_Public dd1 = Derived_from_Public();
    Derived_from_Private dd2 = Derived_from_Private();
    Derived_from_Protected dd3 = Derived_from_Protected();

    Base *p = &d1;
    p = &d2;
    p = &d3;
    p = &dd1;
    p = &dd2;
    p = &dd3;

    return 0;
}
