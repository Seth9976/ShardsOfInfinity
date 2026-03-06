// 函数名称: sub_461500
// 虚拟地址: 0x461500
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_461500(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result_1 = 0
    int32_t var_10 = 1
    int32_t var_c = 2
    int32_t eax_2 = 3
    int32_t esi = 0
    int32_t __saved_ebx
    
    do
        if ((&result_1)[esi] == arg1)
            int32_t ecx = (&__saved_ebx)[eax_2]
            eax_2 -= 1
            (&result_1)[esi] = ecx
            esi -= 1
        
        esi += 1
    while (esi s< eax_2)
    
    int32_t edx = 0
    
    if (eax_2 s> 0)
        do
            if ((&result_1)[edx] == arg2)
                int32_t ecx_1 = (&__saved_ebx)[eax_2]
                eax_2 -= 1
                (&result_1)[edx] = ecx_1
                edx -= 1
            
            edx += 1
        while (edx s< eax_2)
    
    int32_t result = result_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
