// 函数名称: ___acrt_execute_initializers
// 虚拟地址: 0x5376aa
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___acrt_execute_initializers(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    void* var_8_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_c = edi
    void* result
    
    if (arg1 != arg2)
        int32_t* esi_1 = arg1
        
        do
            int32_t ebx_1 = *esi_1
            
            if (ebx_1 != 0 && ebx_1().b == 0)
                break
            
            esi_1 = &esi_1[2]
        while (esi_1 != arg2)
        
        if (esi_1 != arg2)
            if (esi_1 != arg1)
                void* esi_2 = &esi_1[-1]
                
                do
                    if (*(esi_2 - 4) != 0)
                        int32_t ebx_2 = *esi_2
                        
                        if (ebx_2 != 0)
                            ebx_2(0)
                    
                    esi_2 -= 8
                while (esi_2 + 4 != arg1)
            
            result.b = 0
        else
            result.b = 1
    else
        result.b = 1
    
    @__security_check_cookie@4(var_8_1 ^ &__saved_ebp)
    return result
}
