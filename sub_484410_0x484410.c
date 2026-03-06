// 函数名称: sub_484410
// 虚拟地址: 0x484410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_484410(int32_t arg1, int32_t* arg2, void** arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t** var_c4 = arg2
    int32_t edi = *(arg4 + 4)
    
    if (edi u> 0x22)
        sub_44e4d0(eax_1, &data_5559b1, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
            "c:\ax2017\engine\assettyperegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* edi_2 = *((edi << 5) + data_cdf880 + 0x1c)
    
    if (*(arg4 + 0x10) != 0)
        goto label_484512
    
    int32_t var_c0
    int32_t var_18
    int32_t var_10
    uint32_t eax_3
    int32_t var_bc
    
    if (sub_484390(arg2, &var_18).b != 0 && var_10 == 1
            && sub_482930(&var_c0, 0xa8, arg2, &var_c0).b != 0)
        if (var_bc == *(edi_2 + 0x18))
            void* eax_7 = sub_495000(var_c0)
            int32_t var_b8
            
            if ((*(eax_7 + 0x18) & 1) != 0 || var_b8 == *(eax_7 + 0x14))
                int32_t var_b4
                *(arg4 + 0x10) = var_b4
                int32_t var_b0
                *(arg4 + 0x14) = var_b0
                int32_t var_ac
                *(arg4 + 0x18) = var_ac
            label_484512:
                int32_t ebx_1 = *(arg4 + 0x18)
                
                if (ebx_1 == 0)
                    ebx_1 = *(arg4 + 0x14)
                
                int32_t* eax_12 = sub_45cd70(ebx_1 + 0x10)
                
                if (_fseek(*var_c4, *(arg4 + 0x10), 0) == 0)
                    eax_3 = _fread(&eax_12[4], ebx_1, 1, *var_c4)
                    
                    if (eax_3 == 1
                            && sub_483940(eax_3, &eax_12[4], &eax_12[4], edi_2, nullptr, ebx_1).b != 0)
                        *arg3 = eax_12
                        *eax_12 = &eax_12[4]
                        *(*arg3 + 8) = 1
                        *(*arg3 + 0xc) = edi_2
                        *(*arg3 + 4) = 0
                        void* eax_15
                        eax_15.b = 1
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_15
                
                if (eax_12 != 0)
                    _aligned_free_base(eax_12)
                    int32_t eax_16
                    eax_16.b = 0
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_16
            else
                char* eax_8 = *(arg4 + 0x20)
                char* const ecx_7 = &data_5559b1
                
                if (eax_8 != 0)
                    ecx_7 = eax_8
                
                char* const var_dc_3 = ecx_7
                sub_44e260("Can't load pack asset because hash doesn't match '%s'")
        else
            char* eax_6 = *(arg4 + 0x20)
            char* const ecx_2 = &data_5559b1
            
            if (eax_6 != 0)
                ecx_2 = eax_6
            
            char* const var_dc_2 = ecx_2
            sub_44e260("Can't load pack asset because version doesn't match '%s'")
    eax_3.b = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_3
}
