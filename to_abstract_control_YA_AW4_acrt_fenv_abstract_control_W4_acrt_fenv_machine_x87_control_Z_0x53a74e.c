// 函数名称: ?to_abstract_control@@YA?AW4__acrt_fenv_abstract_control@@W4__acrt_fenv_machine_x87_control@@@Z
// 虚拟地址: 0x53a74e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?to_abstract_control@@YA?AW4__acrt_fenv_abstract_control@@W4__acrt_fenv_machine_x87_control@@@Z(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    uint32_t eax = zx.d(arg1.w)
    int32_t var_8_1 = 0x1000
    int32_t esi = 0
    int32_t ecx_2 = eax & 0x300
    
    if (ecx_2 == 0)
        var_8_1 = 0x2000
    else if (ecx_2 != 0x200)
        var_8_1 = 0
    
    int32_t eax_1 = eax & 0xc00
    
    if (eax_1 != 0)
        if (eax_1 == 0x400)
            esi = 0x100
        else if (eax_1 == 0x800)
            esi = 0x200
        else if (eax_1 == 0xc00)
            esi = 0x300
    
    int32_t eax_15 = ((arg1 u>> 4 & 1) * 2) | (arg1 u>> 1 & 1) << 5 | (arg1 u>> 2 & 1) << 3
        | (arg1 u>> 3 & 1) << 2 | (arg1 u>> 5 & 1)
    return eax_15 | (zx.d(arg1.b) & 1) << 4 | (eax & 0x1000) << 2 | esi | var_8_1
}
