// 函数名称: sub_470da0
// 虚拟地址: 0x470da0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_470da0(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    void* eax = sub_46b120(arg2, 0x7f)
    sub_4b8610(eax, eax, &data_5b1d6c, 0x7f, zx.d(arg4.b))
    void* result = sub_46e560(arg2)
    int32_t i = 0
    
    if (*(arg2 + 0x7f4) s> 0)
        do
            result = sub_462970(arg2, i)
            
            if (*(result + 0x6a4) == arg3)
                result = sub_470da0(arg4)
            
            i += 1
        while (i s< *(arg2 + 0x7f4))
    
    return result
}
