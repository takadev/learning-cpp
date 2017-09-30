class Buffer
{
private:
    unsigned int  size;    // バッファ サイズ
    void* pointer;  // バッファ ポインタ

public:
    Buffer()
    {
         size = 0;
         pointer = NULL;
    }

    Buffer(unsigned int sz)
    {
        size = sz;
        pointer = MemoryAllocate(sz);
    }

    Void* GetPointer()
    {
        return pointer;
    }

    ~Buffer() // デストラクタ
    {
        if (pointer != NULL)
            MemoryFree(pointer);
    }
};

int main()
{
    Buffer buf(256);                // 256 バイトのバッファを確保
    void* p = buf.GetPointer();   // バッファ

    return 0;
    // 関数が終了するときに Buffer オブジェクトが破棄され、
    // Buffer のデストラクタが呼び出される。
}

