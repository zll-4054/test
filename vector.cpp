typedef int Rank;  //秩
#define DEFAULT_CAPACITY 3  //默认的初始容量

template <typename T> class Vector{  //向量模板类
private:
    Rank _size; int _capacity; T* _elem;  //规模，容量，数据区
protected:
    void copyForm(T* const A, Rank lo, Rank hi);  //复制数组区间A[lo, hi)
    void expand();   //空间不足时扩容
    void shrink();   //装填因子过小时压缩
    void bubble(Rank lo, rank hi);   //扫描交换
    void bubbleSort(Rank lo, Rank hi);   //起泡排序算法
    void Vector<T>::exchange(Rank i,Rank j);   //元素交换
    Rank selectMax(Rank lo, Rank hi);   //选取最大元素
    void selectionSort(Rank lo, Rank hi);   //选择排序算法
    void merge(Rank lo, Rank mi, Rank hi);   //归并算法
    void mergeSort(Rank lo, Rank hi);   //归并排序算法
    Rank partition(Rank lo, Rank hi);   //轴点构造算法
    void quickSort(Rank lo, Rank hi);   //快速排序算法
    void heapSort(Rank lo, Rank hi);   //堆排序
public:
    Vector(intc=DEFAULT_CAPACITY){ _elem = new T[_capacity = c]; _size = 0; };  //默认
    Vector(T* A, Rank lo, Rank hi){ copyForm(A, lo, hi); };
    
};