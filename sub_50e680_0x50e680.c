// 函数名称: sub_50e680
// 虚拟地址: 0x50e680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50e680(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_cc
    int32_t* var_cc
    int32_t eax_1 = __security_cookie ^ &var_cc
    var_cc = arg3
    void var_c8
    void* eax_3
    int32_t* ecx_1
    eax_3, ecx_1 = sub_50db60(arg3, arg2, &var_c8, arg3)
    int32_t var_e0 = arg5
    int32_t result = sub_50e510(eax_3, arg2, ecx_1, arg4)
    int32_t var_20
    int32_t var_1c
    
    if (result != 0)
        _fseek(var_cc, var_20 - var_1c, 1)
    @__security_check_cookie@4(eax_1 ^ &var_cc)
    return result
}
