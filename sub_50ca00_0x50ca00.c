// 函数名称: sub_50ca00
// 虚拟地址: 0x50ca00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50ca00(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: void* edx = *arg3
    void* edx = *arg3
    void* edi
    
    if (edx == 0)
        edi = 2
    else
        edi = (*(edx - 8) << 1) + 1
    
    int32_t var_10 = edi * arg4 + 8
    int32_t edx_1 = neg.d(edx)
    void* var_14 = sbb.d(edx_1, edx_1, edx != 0) & (edx - 8)
    void* eax_5 = sub_52383b()
    
    if (eax_5 != 0)
        if (*arg3 == 0)
            *(eax_5 + 4) = 0
        
        *arg3 = eax_5 + 8
        *eax_5 = edi
    
    return *arg3
}
