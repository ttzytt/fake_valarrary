template <typename T, size_t SZ>
class Mask_array {
   public:
    static UNKNOW_KEY_T nex_id;
    Mask_array() {
        id = ++nex_id;
        memset(data, 0, sizeof(data));
        memset(mask, 0, sizeof(mask));
    }
    Mask_array(std::initializer_list<T> init) {
        id = ++nex_id;
        memset(mask, 0, sizeof(mask));
        int idx = 0;
        for (auto cur : init) {
            data[idx++] = cur;
        }
    }
    //------------------重载方括号------------------
    Mask_array<T, SZ> &operator[](Cond_node<T> cond) {
        for (int i = 0; i < SZ; i++) {
            std::map<UNKNOW_KEY_T, T> temp;
            temp[id] = data[i];
            if (cond.eval(temp)) {
                mask[i] = true;
            }
        }
        cond.del();
        return *this;
    }
    Mask_array<T, SZ> &operator=(T replace_val) {
        for (int i = 0; i < SZ; i++) {
            if (mask[i]) {
                data[i] = replace_val;
            }
        }
        memset(mask, 0, sizeof(mask));
        return *this;
    }

    //    private:
    T data[SZ];
    UNKNOW_KEY_T id;
    bool mask[SZ];
};
template <typename T, size_t SZ>
UNKNOW_KEY_T Mask_array<T, SZ>::nex_id = 0;
