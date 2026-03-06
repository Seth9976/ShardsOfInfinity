// 函数名称: __CallSettingFrame@12
// 虚拟地址: 0x51f130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall__CallSettingFrame@12(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_14 = &var_4
    int32_t var_18 = arg4
    int32_t edx
    __NLG_Notify1(arg2, edx, arg4, arg3 + 0xc)
    int32_t esi
    int32_t var_18_1 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t result
    int32_t edx_1
    result, edx_1 = arg2()
    int32_t ecx_1 = arg1[4]
    
    if (ecx_1 == 0x100)
        ecx_1 = 2
    
    int32_t var_14_1 = ecx_1
    __NLG_Notify1(result, edx_1, ecx_1, arg3 + 0xc)
    *arg1
    return result
}
