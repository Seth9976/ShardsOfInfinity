// 函数名称: ?to_machine_sse_control@@YA?AW4__acrt_fenv_machine_sse_control@@W4__acrt_fenv_abstract_control@@@Z
// 虚拟地址: 0x53a80b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?to_machine_sse_control@@YA?AW4__acrt_fenv_machine_sse_control@@W4__acrt_fenv_abstract_control@@@Z(int32_t arg1)
{
    // 第一条实际指令: int32_t edx_1 = arg1 & 0xc00
    int32_t edx_1 = arg1 & 0xc00
    uint32_t ecx_4 = ((arg1 u>> 2 & 0xfc00000) | (arg1 & 0xc03fffff)) u>> 0x16
    int16_t esi = 0
    int32_t edi
    int32_t var_c = edi
    int16_t edi_1
    
    if (edx_1 == 0x400)
        edi_1 = -0x7fc0
    else if (edx_1 == 0x800)
        edi_1 = 0x40
    else if (edx_1 == 0xc00)
        edi_1 = -0x8000
    else
        edi_1 = 0
    
    int32_t eax_3 = ecx_4 & 0x300
    
    if (eax_3 != 0)
        if (eax_3 == 0x100)
            esi = 0x2000
        else if (eax_3 == 0x200)
            esi = 0x4000
        else if (eax_3 == 0x300)
            esi = 0x6000
    
    return translate_control_exception_mask<enum __acrt_fenv_machine_sse_control,enum __acrt_fenv_abstract_control>(
        ecx_4) | edi_1 | esi
}
