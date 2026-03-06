// 函数名称: sub_50db00
// 虚拟地址: 0x50db00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_50db00(int32_t arg1, void** arg2, void* arg3, void* arg4, int32_t arg5, char* arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    char* result = sub_50d6d0(&var_8, arg8, arg7, arg4, arg5, arg6, &var_8)
    
    if (result == 0)
        return result
    
    void* esi = var_8
    char* eax_1 = sub_45cd70(esi)
    arg2[1] = eax_1
    *arg2 = esi
    sub_51d5b0(eax_1, result, esi)
    _free(result)
    return 1
}
