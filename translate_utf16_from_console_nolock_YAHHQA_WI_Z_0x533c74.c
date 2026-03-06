// 函数名称: ?translate_utf16_from_console_nolock@@YAHHQA_WI@Z
// 虚拟地址: 0x533c74
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?translate_utf16_from_console_nolock@@YAHHQA_WI@Z(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int16_t* ecx = arg2
    int16_t* esi = arg2
    void* edx = &arg2[arg3]
    
    if (arg2 u< edx)
        do
            uint32_t eax_1 = zx.d(*ecx)
            
            if (eax_1 == 0x1a)
                int32_t edx_1 = (arg1 & 0x3f) * 0x30
                int32_t ecx_3 = (&data_65a778)[arg1 s>> 6]
                *(ecx_3 + edx_1 + 0x28) |= 2
                break
            
            int32_t var_14_1
            int16_t eax_2
            
            if (eax_1 != 0xd || &ecx[1] u>= edx)
                eax_2 = eax_1.w
                var_14_1 = 2
            else if (ecx[1] != 0xa)
                eax_2 = *ecx
                var_14_1 = 2
            else
                eax_2 = 0xa
                var_14_1 = 4
            
            ecx += var_14_1
            *esi = eax_2
            esi = &esi[1]
        while (ecx u< edx)
    
    return (esi - arg2) & 0xfffffffe
}
