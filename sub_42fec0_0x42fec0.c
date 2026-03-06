// 函数名称: sub_42fec0
// 虚拟地址: 0x42fec0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_42fec0(int32_t arg1, int32_t* arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t edi_1 = data_65ac80 + 1
    int32_t edi_1 = data_65ac80 + 1
    data_65ac80 = edi_1
    int32_t esi = edi_1 << 2
    int32_t var_14 = esi
    int32_t var_18 = data_65ac98
    int32_t eax = sub_52383b()
    int32_t var_1c = esi
    int32_t var_20 = data_65ac9c
    data_65ac98 = eax
    int32_t eax_1 = sub_52383b()
    int32_t var_24 = esi
    int32_t var_28 = data_65ace8
    data_65ac9c = eax_1
    data_65ace8 = sub_52383b()
    *(data_65ace8 + (edi_1 << 2) - 4) = __strdup(arg4)
    *(data_65ac98 + (edi_1 << 2) - 4) = arg3
    int32_t* eax_5 = data_65aca0
    
    if (arg3 s>= 0)
        *(data_65ac9c + (edi_1 << 2) - 4) = eax_5[arg3]
        int32_t eax_7 = data_65aca0
        *(eax_7 + (arg3 << 2)) += 1
        int32_t eax_8 = data_65ac80
        *arg2 = eax_8
        return eax_8
    
    *(data_65ac9c + (edi_1 << 2) - 4) = *eax_5
    int32_t i = 0
    
    if (data_65ac90 s> 0)
        do
            int32_t ecx_3 = data_65aca0
            *(ecx_3 + (i << 2)) += 1
            i += 1
        while (i s< data_65ac90)
    
    int32_t eax_10 = data_65ac80
    *arg2 = eax_10
    return eax_10
}
