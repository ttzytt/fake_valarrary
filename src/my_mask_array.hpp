template <typename T>
class Mask_array {


   public:
    // friend class Exp_tree<T>;
    friend class Unknow_node<T>;
    //------------------重载方括号------------------
    Mask_array<T> &operator[](Cond_node<T> cond) {
        with_mask = true;
        for (size_t i = 0; i < data.size(); i++) {
            mask[i] = cond.eval(i);
        }
        cond.del();
        return *this;
    }

    inline T operator[](size_t pos){
        return data[pos];
    }

    Mask_array<T> &operator=(T replace_val) {
        for (size_t i = 0; i < data.size(); i++) {
            if (mask[i]) {
                data[i] = replace_val;
            }
        }
        std::fill(mask.begin(), mask.end(), false);
        return *this;
    }

    Mask_array<T>(std::initializer_list<T> init) {
        data.clear(); mask.clear();
        for (auto cur : init) {
            data.push_back(cur);
            mask.push_back(false);
        }
    }

    Mask_array<T> &operator=(std::vector<T> &vec) {
        if (!with_mask) {
            data = vec;
            mask = std::vector<bool>(vec.size(), false);
        } else {
            for (size_t i = 0; i < data.size() && i < vec.size(); i++) {
                if (mask[i]) data[i] = vec[i];
            }
        }
        return *this;
    }

    Mask_array<T> &operator=(Exp_tree<T> &tr){
        for(size_t i = 0; i < data.size(); i++){
            if(mask[i]) data[i] = tr.eval(i);
        }
    }

    operator Exp_tree<T>() { return *(new Unknow_node<T>(*this));}

   private:
    bool with_mask = false;
    std::vector<T>    data;
    std::vector<bool> mask;
};
