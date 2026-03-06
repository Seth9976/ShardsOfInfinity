// 函数名称: ?to_machine_x87_control@@YA?AW4__acrt_fenv_machine_x87_control@@W4__acrt_fenv_abstract_control@@@Z
// 虚拟地址: 0x53a89f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint16_t?to_machine_x87_control@@YA?AW4__acrt_fenv_machine_x87_control@@W4__acrt_fenv_abstract_control@@@Z(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    uint32_t ebx_4 = ((arg1 u>> 2 & 0xfc000) | (arg1 & 0xc00000)) u>> 0xe
    int16_t esi = 0
    int32_t ecx_2 = arg1 & 0x3000
    int16_t edi_1
    
    if (ecx_2 == 0)
        edi_1 = 0x300
    else if (ecx_2 == 0x1000)
        edi_1 = 0x200
    else
        edi_1 = 0
    
    int32_t eax_6 = ebx_4 & 0x300
    
    if (eax_6 != 0)
        if (eax_6 == 0x100)
            esi = 0x400
        else if (eax_6 == 0x200)
            esi = 0x800
        else if (eax_6 == 0x300)
            esi = 0xc00
    
    uint16_t edx = (zx.w((ebx_4 u>> 1).b) & 1) << 4 | (zx.w((ebx_4 u>> 2).b) & 1) << 3
        | ((zx.w((ebx_4 u>> 5).b) & 1) * 2) | (zx.w((ebx_4 u>> 3).b) & 1) << 2
    uint8_t eax_19 = (ebx_4 u>> 4).b
    ebx_4.b &= 1
    return (zx.w(eax_19) & 1) | edx | zx.w(ebx_4.b) << 5 | ((arg1 u>> 2).w & 0x1000) | edi_1 | esi
}
