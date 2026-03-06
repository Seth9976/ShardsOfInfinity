// 函数名称: sub_4d4a60
// 虚拟地址: 0x4d4a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4d4a60()
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_10
    char const* const var_c
    uint32_t (* eax)[0x4]
    char* ecx_1
    
    if (data_ce24d4 == 0)
        int32_t* eax_1 = sub_45cfa0(0x88)
        eax_1[3] += 1
        int32_t* edi_1 = *eax_1
        
        if (edi_1 == 0)
            sub_45ce30(eax_1)
            edi_1 = *eax_1
        
        *eax_1 = *edi_1
        eax = _memset(edi_1, 0, 0x88)
        edi_1[4] = 0
        edi_1[5] = 0
        edi_1[0xd] = 0
        edi_1[0xe] = 0
        edi_1[0xf] = 0
        bool cond:1_1 = *edi_1 != 0
        data_ce24d4 = edi_1
        
        if (not(cond:1_1))
            uint32_t eax_3 = sub_41b670(0x400)
            *edi_1 = sub_45cff0(eax_3 << 2)
            edi_1[1] = eax_3 - 1
            *(data_ce24d4 + 0x84) = 1
            return sub_4f47e0() __tailcall
        
        var_c = "XMap<enum StructureID,struct EditModeStructure>::SetNumBuckets"
        var_10 = 0x72
        var_14 = "c:\ax2017\engine\xmap.h"
        ecx_1 = "mNodeBuckets == NULL"
    else
        var_c = "EditModeInitForGame"
        var_10 = 0xc5
        var_14 = "c:\ax2017\engine\editor\editmode.cpp"
        ecx_1 = "!gpEditModeData"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
