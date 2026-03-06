// 函数名称: ___acrt_execute_uninitializers
// 虚拟地址: 0x53772d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_execute_uninitializers(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t var_8_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg2
    
    if (arg1 != esi)
        int32_t edi
        int32_t var_10_1 = edi
        
        do
            int32_t edi_1 = *(esi - 4)
            
            if (edi_1 != 0)
                edi_1(0)
            
            esi -= 8
        while (esi != arg1)
    
    int32_t result
    result.b = 1
    @__security_check_cookie@4(var_8_1 ^ &__saved_ebp)
    return result
}
