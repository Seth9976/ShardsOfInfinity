// 函数名称: sub_4f7580
// 虚拟地址: 0x4f7580
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4f7580()
{
    // 第一条实际指令: __alloca_probe(0x1014)
    __alloca_probe(0x1014)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = data_ce37a4
    int32_t ebx = 0
    int32_t var_1010 = 0
    char var_100c[0xff0]
    
    if (eax_2 s> 0)
        while (true)
            int32_t* ecx_1 = data_ce27a0
            
            if (ecx_1[1] == 0x20)
                void* eax_3
                int32_t ecx_2
                eax_3, ecx_2 = sub_4459f0(ecx_1)
                int32_t edi_1 = *(eax_3 + 4)
                int32_t var_18_1 = ecx_2
                int32_t* eax_4 = sub_48c3c0(data_e47020, 0)
                sub_4d2b10(eax_4, eax_4, eax_3, edi_1)
                int32_t* ecx_5 = data_ce27a0
                eax_2 = ebx << 2
                void* edi_3 = edi_1 * 0xb8 + *eax_3
                
                if (ecx_5[1] == 0x20)
                    void* edx_3 = *(eax_2 + &data_ce27a4) * 0xb8 + *sub_4459f0(ecx_5)
                    int32_t eax_6 = *(edi_3 + 4)
                    __builtin_memcpy(edi_3, edx_3, 0xb8)
                    *(edi_3 + 4) = eax_6
                    sub_48b620(edi_3 + 4, *(edx_3 + 4))
                    ebx = var_1010 + 1
                    var_1010 = ebx
                    *(&var_100c + eax_2) = edi_1
                    eax_2 = data_ce37a4
                    
                    if (ebx s>= eax_2)
                        break
                    
                    continue
            
            sub_44e4d0(eax_2, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
                "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    sub_51d5b0(&data_ce27a4, &var_100c, eax_2 << 2)
    sub_4cf180(data_ce27a0)
    int32_t result = sub_4f4fa0()
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
