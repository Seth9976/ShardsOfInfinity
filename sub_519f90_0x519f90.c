// 函数名称: sub_519f90
// 虚拟地址: 0x519f90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* constsub_519f90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ecx
    void* ecx
    uint32_t* edx
    ecx, edx = __alloca_probe(0x8864)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    uint32_t var_8864
    void* const result = sub_519a50(_memset(&var_8864, 0, 0x8858), &var_8864, ecx, arg2)
    
    if (result == ecx)
        result = nullptr
    else if (result != 0)
        *edx = var_8864
        int32_t var_8860
        *arg1 = var_8860
    
    int32_t var_8854
    _free(var_8854)
    int32_t var_8858
    _free(var_8858)
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
