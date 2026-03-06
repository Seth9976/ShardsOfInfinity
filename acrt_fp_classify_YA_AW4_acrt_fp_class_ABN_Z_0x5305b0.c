// 函数名称: ?__acrt_fp_classify@@YA?AW4__acrt_fp_class@@ABN@Z
// 虚拟地址: 0x5305b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?__acrt_fp_classify@@YA?AW4__acrt_fp_class@@ABN@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t edi_1 = *arg1
    int32_t edx = arg1[1]
    
    if ((edx u>> 0x14 & 0x7ff) != 0x7ff)
        return 0
    
    int32_t esi_2 = edx & 0xfffff
    int32_t eax_5 = edi_1 | esi_2
    
    if (eax_5 == 0)
        return eax_5 + 1
    
    if (edx s<= 0 && (edx s< 0 || edi_1 u< 0) && edi_1 == 0 && esi_2 == 0x80000)
        return 4
    
    if ((edx & 0x80000) == 0)
        return 3
    
    return 2
}
