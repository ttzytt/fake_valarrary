template <typename T>
class Op_node : public Exp_tree<T> {
   public:
    enum Ops { ADD, SUB, MUL, DIV, MOD };
    Exp_tree<T> &l_tr, &r_tr;
    Ops op;
    Op_node(Exp_tree<T> &_l_tr, Ops _op, Exp_tree<T> &_r_tr)
        : l_tr(_l_tr), r_tr(_r_tr), op(_op) {}

    T eval(size_t pos) {
        T l_val = l_tr.eval(pos);
        T r_val = r_tr.eval(pos);
        switch (op) {
            case ADD:
                return l_val + r_val;
            case SUB:
                return l_val - r_val;
            case MUL:
                return l_val * r_val;
            case DIV:
                return l_val / r_val;
            case MOD:
                return l_val % r_val;
            default:
                throw "unknown operation";
        }
    }
    void del() {
        l_tr.del();
        r_tr.del();
        delete this;
    }
};
