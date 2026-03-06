// 函数名称: ?to_abstract_control@@YA?AW4__acrt_fenv_abstract_control@@W4__acrt_fenv_machine_sse_control@@@Z
// 虚拟地址: 0x53a692
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?to_abstract_control@@YA?AW4__acrt_fenv_abstract_control@@W4__acrt_fenv_machine_sse_control@@@Z(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t edi
    int32_t var_10 = edi
    int16_t eax_1 = arg1.w & 0x8040
    int32_t ebx
    
    if (eax_1 == 0x8000)
        ebx = 0xc00
    else if (eax_1 != 0x40)
        ebx = 0x400
        
        if (eax_1 != 0x8040)
            ebx = 0
    else
        ebx = 0x800
    
    int32_t eax_3 = arg1 & 0x6000
    
    if (eax_3 != 0)
        if (eax_3 == 0x2000)
            esi = 0x100
        else if (eax_3 == 0x4000)
            esi = 0x200
        else if (eax_3 == 0x6000)
            esi = 0x300
    
    int32_t eax_17 = (arg1 u>> 0xa & 1) << 2 | (arg1 u>> 8 & 1) << 5 | (arg1 u>> 7 & 1) << 4
        | (arg1 u>> 9 & 1) << 3 | ((arg1 u>> 0xb & 1) * 2)
    return eax_17 | (arg1 u>> 0xc & 1) | esi | ebx
}
