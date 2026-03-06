// 函数名称: __calloc_base
// 虚拟地址: 0x531b86
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__calloc_base(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0 || divu.dp.d(0:0xffffffe0, arg1) u>= arg2)
    if (arg1 == 0 || divu.dp.d(0:0xffffffe0, arg1) u>= arg2)
        uint32_t dwBytes = arg1 * arg2
        
        if (dwBytes == 0)
            dwBytes += 1
        
        int32_t i
        
        do
            int32_t result = HeapAlloc(data_65aa88, HEAP_ZERO_MEMORY, dwBytes)
            
            if (result != 0)
                return result
            
            if (sub_52f53e() == 0)
                break
            
            i = __callnewh(dwBytes)
        while (i != 0)
    
    *__errno() = 0xc
    return 0
}
