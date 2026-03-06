// 函数名称: __malloc_base
// 虚拟地址: 0x52fd0c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__malloc_base(uint32_t arg1)
{
    // 第一条实际指令: uint32_t dwBytes = arg1
    uint32_t dwBytes = arg1
    
    if (dwBytes u<= 0xffffffe0)
        if (dwBytes == 0)
            dwBytes += 1
        
        int32_t i
        
        do
            int32_t result = HeapAlloc(data_65aa88, HEAP_NONE, dwBytes)
            
            if (result != 0)
                return result
            
            if (sub_52f53e() == 0)
                break
            
            i = __callnewh(dwBytes)
        while (i != 0)
    
    *__errno() = 0xc
    return 0
}
