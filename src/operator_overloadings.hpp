
//---------------以下是和 mask_arra 的运算--------------------
template <typename T>
Exp_tree<T>& operator+(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::ADD,
                            sub_tr));
}

template <typename T>
Exp_tree<T>& operator+(Mask_array<T>& msk_array, T val) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::ADD,
                            *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator-(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::SUB,
                            sub_tr));
}

template <typename T>
Exp_tree<T>& operator-(Mask_array<T>& msk_array, T val) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::SUB,
                            *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator*(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::MUL,
                            sub_tr));
}

template <typename T>
Exp_tree<T>& operator*(Mask_array<T>& msk_array, T val) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::MUL,
                            *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator/(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::DIV,
                            sub_tr));
}

template <typename T>
Exp_tree<T>& operator/(Mask_array<T>& msk_array, T val) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::DIV,
                            *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator%(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::MOD,
                            sub_tr));
}

template <typename T>
Exp_tree<T>& operator%(Mask_array<T>& msk_array, T val) {
    return *(new Op_node<T>(*(new Unknow_node<T>(msk_array)), Op_node<T>::MOD,
                            *(new Const_node<T>(val))));
}

//----------------条件运算符----------------

template <typename T>
Cond_node<T>& operator==(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::EQ, sub_tr));
}

template <typename T>
Cond_node<T>& operator==(Mask_array<T>& msk_array, T val) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::EQ, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator!=(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::NE, sub_tr));
}

template <typename T>
Cond_node<T>& operator!=(Mask_array<T>& msk_array, T val) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::NE, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator<(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::LT, sub_tr));
}

template <typename T>
Cond_node<T>& operator<(Mask_array<T>& msk_array, T val) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::LT, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator>(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::GT, sub_tr));
}

template <typename T>
Cond_node<T>& operator>(Mask_array<T>& msk_array, T val) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::GT, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator<=(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::LE, sub_tr));
}

template <typename T>
Cond_node<T>& operator<=(Mask_array<T>& msk_array, T val) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::LE, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator>=(Mask_array<T>& msk_array, Exp_tree<T>& sub_tr) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::GE, sub_tr));
}

template <typename T>
Cond_node<T>& operator>=(Mask_array<T>& msk_array, T val) {
    return *(new Cond_node<T>(*(new Unknow_node<T>(msk_array)),
                              Cond_node<T>::GE, *(new Const_node<T>(val))));
}

//-----------------以下是 exp_tree 类的的运算 --------------

template <typename T>
Exp_tree<T>& operator+(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Op_node<T>(l_tr, Op_node<T>::ADD, r_tr));
}

template <typename T>
Exp_tree<T>& operator+(Exp_tree<T>& l_tr, T val) {
    return *(new Op_node<T>(l_tr, Op_node<T>::ADD, *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator-(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Op_node<T>(l_tr, Op_node<T>::SUB, r_tr));
}

template <typename T>
Exp_tree<T>& operator-(Exp_tree<T>& l_tr, T val) {
    return *(new Op_node<T>(l_tr, Op_node<T>::SUB, *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator*(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Op_node<T>(l_tr, Op_node<T>::MUL, r_tr));
}

template <typename T>
Exp_tree<T>& operator*(Exp_tree<T>& l_tr, T val) {
    return *(new Op_node<T>(l_tr, Op_node<T>::MUL, *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator/(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Op_node<T>(l_tr, Op_node<T>::DIV, r_tr));
}

template <typename T>
Exp_tree<T>& operator/(Exp_tree<T>& l_tr, T val) {
    return *(new Op_node<T>(l_tr, Op_node<T>::DIV, *(new Const_node<T>(val))));
}

template <typename T>
Exp_tree<T>& operator%(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Op_node<T>(l_tr, Op_node<T>::MOD, r_tr));
}

template <typename T>
Exp_tree<T>& operator%(Exp_tree<T>& l_tr, T val) {
    return *(new Op_node<T>(l_tr, Op_node<T>::MOD, *(new Const_node<T>(val))));
}

//-----------------以下是条件运算符----------------

template <typename T>
Cond_node<T>& operator==(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Cond_node<T>(l_tr, Cond_node<T>::EQ, r_tr));
}

template <typename T>
Cond_node<T>& operator==(Exp_tree<T>& l_tr, T val) {
    return *(
        new Cond_node<T>(l_tr, Cond_node<T>::EQ, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator!=(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Exp_tree<T>(l_tr, Cond_node<T>::NE, r_tr));
}

template <typename T>
Cond_node<T>& operator!=(Exp_tree<T>& l_tr, T val) {
    return *(
        new Cond_node<T>(l_tr, Cond_node<T>::NE, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator>(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Cond_node<T>(l_tr, Cond_node<T>::GT, r_tr));
}

template <typename T>
Cond_node<T>& operator>(Exp_tree<T>& l_tr, T val) {
    return *(
        new Cond_node<T>(l_tr, Cond_node<T>::GT, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator<(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Cond_node<T>(l_tr, Cond_node<T>::LT, r_tr));
}

template <typename T>
Cond_node<T>& operator<(Exp_tree<T>& l_tr, T val) {
    return *(
        new Cond_node<T>(l_tr, Cond_node<T>::LT, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator>=(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Cond_node<T>(l_tr, Cond_node<T>::GE, r_tr));
}

template <typename T>
Cond_node<T>& operator>=(Exp_tree<T>& l_tr, T val) {
    return *(
        new Cond_node<T>(l_tr, Cond_node<T>::GE, *(new Const_node<T>(val))));
}

template <typename T>
Cond_node<T>& operator<=(Exp_tree<T>& l_tr, Exp_tree<T>& r_tr) {
    return *(new Cond_node<T>(l_tr, Cond_node<T>::LE, r_tr));
}

template <typename T>
Cond_node<T>& operator<=(Exp_tree<T>& l_tr, T val) {
    return *(
        new Cond_node<T>(l_tr, Cond_node<T>::LE, *(new Const_node<T>(val))));
}

//-------------和 cond node 的运算----------------

// template <typename T>
// Cond_node<T>& operator==(Exp_tree<T>& cond, Exp_tree<T>& sub_tr) {
//     return *(new Cond_node<T>(cond, Cond_node<T>::EQ, sub_tr));
// }

// template <typename T>
// Cond_node<T>& operator!=(Exp_tree<T>& cond, Exp_tree<T>& sub_tr) {
//     return *(new Cond_node<T>(cond, Cond_node<T>::NE, sub_tr));
// }

// template <typename T>
// Cond_node<T>& operator>(Exp_tree<T>& cond, Exp_tree<T>& sub_tr) {
//     return *(new Cond_node<T>(cond, Cond_node<T>::GT, sub_tr));
// }

// template <typename T>
// Cond_node<T>& operator<(Exp_tree<T>& cond, Exp_tree<T>& sub_tr) {
//     return *(new Cond_node<T>(cond, Cond_node<T>::LT, sub_tr));
// }

// template <typename T>
// Cond_node<T>& operator>=(Exp_tree<T>& cond, Exp_tree<T>& sub_tr) {
//     return *(new Cond_node<T>(cond, Cond_node<T>::GE, sub_tr));
// }

// template <typename T>
// Cond_node<T>& operator<=(Cond_node<T>& cond, Exp_tree<T>& sub_tr) {
//     return *(new Cond_node<T>(cond, Cond_node<T>::LE, sub_tr));
// }