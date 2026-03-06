// 函数名称: ?write_string@?$string_output_adapter@D@__crt_stdio_output@@QBEXQBDHQAHAAV__crt_deferred_errno_cache@@@Z
// 虚拟地址: 0x522bc1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __thiscall?write_string@?$string_output_adapter@D@__crt_stdio_output@@QBEXQBDHQAHAAV__crt_deferred_errno_cache@@@Z(int32_t* arg1, char* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    
    if (arg3 == 0)
        return 
    
    int32_t* eax_1 = *arg1
    int32_t esi_1 = eax_1[1]
    
    if (eax_1[2] != esi_1)
        void* esi_2 = esi_1 - eax_1[2]
        
        if (esi_2 u>= arg3)
            esi_2 = arg3
        
        sub_51d5b0(*eax_1, arg2, esi_2)
        int32_t* eax_2 = *arg1
        *eax_2 += esi_2
        void* eax_3 = *arg1
        *(eax_3 + 8) += esi_2
        
        if (*(*arg1 + 0xc) != 0)
            *arg4 += arg3
        else if (esi_2 == arg3)
            *arg4 += esi_2
        else
            *arg4 = 0xffffffff
    else if (eax_1[3].b == 0)
        *arg4 = 0xffffffff
    else
        *arg4 += arg3
}
