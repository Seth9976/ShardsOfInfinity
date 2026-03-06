// 函数名称: sub_4fef00
// 虚拟地址: 0x4fef00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULTsub_4fef00()
{
    // 第一条实际指令: __alloca_probe(0x1014)
    __alloca_probe(0x1014)
    int32_t __saved_ebp
    int32_t i = __security_cookie ^ &__saved_ebp
    int32_t i_2 = i
    int32_t i_1 = 0
    char var_100c[0xff0]
    
    if (data_d77c6c s> 0)
        do
            int32_t* ecx_1 = data_d76c60
            
            if (ecx_1[1] != 0x1e)
                sub_44e4d0(i, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                    "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_1
            int32_t ecx_2
            eax_1, ecx_2 = sub_4459f0(ecx_1)
            int32_t esi_1 = *(eax_1 + 4)
            int32_t var_18_1 = ecx_2
            int32_t* eax_2 = sub_48c3c0(data_e46f4c, 0)
            sub_4d2b10(eax_2, eax_2, eax_1, esi_1)
            int32_t* ebx_1 = esi_1 * 0x118 + *eax_1
            void* eax_3 = sub_4fbab0((&data_d76c6c)[i_1], nullptr)
            int32_t ebx_2 = ebx_1[2]
            int32_t edx_2 = ebx_1[0x2c]
            int32_t eax_4 = ebx_1[0x37]
            __builtin_memcpy(ebx_1, eax_3, 0x118)
            ebx_1[2] = ebx_2
            ebx_1[0x2c] = edx_2
            ebx_1[0x37] = eax_4
            sub_48b620(&ebx_1[2], *(eax_3 + 8))
            sub_48b620(&ebx_1[0x37], *(eax_3 + 0xdc))
            sub_48b620(&ebx_1[0x2c], *(eax_3 + 0xb0))
            int32_t ecx_11 = data_d76c68
            data_d76c68 = ecx_11 + 1
            *ebx_1 = ecx_11
            *(&var_100c + (i_1 << 2)) = ecx_11
            i = i_1 + 1
            i_1 = i
        while (i s< data_d77c6c)
    
    int32_t eax_7 = sub_4fee60()
    sub_51d5b0(&data_d76c6c, &var_100c, data_d77c6c << 2)
    sub_5014a0(eax_7 + 1)
    sub_4cf4c0(data_d76c60)
    LRESULT result = sub_5012b0()
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
