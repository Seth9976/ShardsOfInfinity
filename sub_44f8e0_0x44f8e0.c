// 函数名称: sub_44f8e0
// 虚拟地址: 0x44f8e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_44f8e0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = ___stdio_common_vsprintf(data_65aaa8 | 2, data_65aaac, nullptr, 0, arg2, nullptr, arg3)
    int32_t edi =
        ___stdio_common_vsprintf(data_65aaa8 | 2, data_65aaac, nullptr, 0, arg2, nullptr, arg3)
    
    if (edi s< 0)
        edi = 0xffffffff
    
    if (edi s> 0)
        Mod1::CheckFCreateWriter(sub_44f100(0xffffffff, edi, arg1, 0), edi + 1, *arg1, arg2, arg3)
        return arg1
    
    if (data_cdf414 != 0)
        char* eax_1 = *arg1
        
        if (eax_1 != 0 && *eax_1 != 0)
            char* eax_2 = sub_44f000(arg1)
            int32_t temp1_1 = *(eax_2 + 4)
            *(eax_2 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_2, *(eax_2 + 0xc) + 0x10)
    
    *arg1 = &data_5559b1
    return arg1
}
