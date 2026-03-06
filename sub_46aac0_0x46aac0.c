// 函数名称: sub_46aac0
// 虚拟地址: 0x46aac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_46aac0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t* result = arg4
    int32_t edx = *result
    int32_t edi = *(arg3 + 0x1004)
    
    if (arg5 == 0)
        result = nullptr
        
        if (edx s> 0)
            do
                if (*(arg2 + (result << 2)) == edi)
                    arg5 = 1
                    break
                
                result += 1
            while (result s< edx)
    else
        int32_t ecx = 0
        
        if (edx s> 0)
            do
                if (*(arg2 + (ecx << 2)) == edi)
                    *arg4 = edx - 1
                    result = *(arg2 + ((edx - 1) << 2))
                    *(arg2 + (ecx << 2)) = result
                    break
                
                ecx += 1
            while (ecx s< edx)
    
    int32_t i = 0
    
    if (*(arg3 + 0x7f4) s> 0)
        do
            sub_4627e0(arg3, i)
            result = sub_46aac0(arg4, arg5.d)
            i += 1
        while (i s< *(arg3 + 0x7f4))
    
    return result
}
