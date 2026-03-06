// 函数名称: ?expand_if_necessary@?$argument_list@D@?A0xfd16de3c@@AAEHXZ
// 虚拟地址: 0x536cae
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?expand_if_necessary@?$argument_list@D@?A0xfd16de3c@@AAEHXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t edi_1 = arg1[2]
    
    if (arg1[1] == edi_1)
        if (*arg1 != 0)
            int32_t edi_3 = (edi_1 - *arg1) s>> 2
            
            if (edi_3 u> 0x7fffffff)
                return 0xc
            
            int32_t var_10_1 = 4
            int32_t ebx_1 = edi_3 * 2
            int32_t var_14_1 = ebx_1
            int32_t var_18_1 = *arg1
            int32_t eax_5 = sub_537617()
            int32_t result
            
            if (eax_5 != 0)
                *arg1 = eax_5
                arg1[1] = eax_5 + (edi_3 << 2)
                arg1[2] = eax_5 + (ebx_1 << 2)
                result = 0
            else
                result = 0xc
            
            __free_base(0)
            return result
        
        *arg1 = __calloc_base(4, 4)
        __free_base(0)
        int32_t eax_2 = *arg1
        
        if (eax_2 == 0)
            return 0xc
        
        arg1[1] = eax_2
        arg1[2] = eax_2 + 0x10
    
    return 0
}
