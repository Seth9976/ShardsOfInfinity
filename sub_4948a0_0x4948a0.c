// 函数名称: sub_4948a0
// 虚拟地址: 0x4948a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4948a0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    char* const ecx_3
    char i
    
    do
        char* eax_1 = *arg1
        char* const edi_1 = &data_5559b1
        
        if (eax_1 != 0)
            edi_1 = eax_1
        
        char eax_2
        
        if (*(arg2 + 4) == 3)
            eax_2 = sub_4e0be0(arg2)
        
        if ((*(arg2 + 4) != 3 || eax_2 != 0) && *(arg2 + 4) == 4
                && __strnicmp(edi_1, *(arg2 + 0xc), *(arg2 + 0x10)) == 0 && sub_4e0be0(arg2) != 0)
            return 1
        
        i = sub_494680(arg1, arg2)
        ecx_3 = &data_5559b1
    while (i != 0)
    char* eax_5 = *arg1
    
    if (eax_5 != 0)
        ecx_3 = eax_5
    
    char* const var_1c_2 = ecx_3
    sub_494620(arg2, "failed to read block '%s'")
    int32_t result
    result.b = 0
    return result
}
