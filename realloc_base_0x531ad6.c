// 函数名称: __realloc_base
// 虚拟地址: 0x531ad6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__realloc_base(int32_t arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    
    if (arg1 == 0)
        return __malloc_base(arg2)
    
    if (arg2 != 0)
        if (arg2 u<= 0xffffffe0)
            int32_t i
            
            do
                int32_t result = HeapReAlloc(data_65aa88, HEAP_NONE, arg1, arg2)
                
                if (result != 0)
                    return result
                
                if (sub_52f53e() == 0)
                    break
                
                i = __callnewh(arg2)
            while (i != 0)
        
        *__errno() = 0xc
    else
        __free_base(arg1)
    
    return 0
}
