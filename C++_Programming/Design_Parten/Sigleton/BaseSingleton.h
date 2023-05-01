#pragma
#include <mutex>
template<typename T>
class BaseSingleton{
    protected:
    BaseSingleton()= default;
    BaseSingleton(const BaseSingleton &base) =  delete;
    BaseSingleton &operator=(const BaseSingleton &base) = delete;
    public:
    static T &getInstance(){
        static T instance;
        return instance;
    }
};