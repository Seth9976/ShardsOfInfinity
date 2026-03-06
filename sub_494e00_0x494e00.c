// 函数名称: sub_494e00
// 虚拟地址: 0x494e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_494e00())[0x4]
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543948
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t (* esi)[0x4] = sub_45cd70(0x460)
    uint32_t (* result)[0x4] = _memset(esi, 0, 0x460)
    data_cdf880 = esi
    int32_t var_14 = 0
    
    if (data_cdf884 s> 0)
        void* edi_1 = &data_cdf88c
        
        while (true)
            int32_t eax_4 = *(edi_1 - 4)
            
            if (eax_4 s< 0 || eax_4 s>= 0x23)
                sub_44e4d0(eax_4, &data_5559b1, 
                    "pAssetTableItem->assetType >=0 && pAssetTableItem->assetType < ASSET_TYPE_COUNT", 
                    "c:\ax2017\engine\assettyperegistry.cpp", 0x9c, "AssetRegistryInitForApp")
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            if (*(edi_1 + 0x14) == 0)
                sub_44e4d0(eax_4, &data_5559b1, "pAssetTableItem->pDefMap != NULL", 
                    "c:\ax2017\engine\assettyperegistry.cpp", 0x9f, "AssetRegistryInitForApp")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* ebx_3 = &esi[eax_4 * 2]
            *ebx_3 = eax_4
            *(ebx_3 + 0x1c) = *(edi_1 + 0x14)
            *(ebx_3 + 4) = *edi_1
            *(ebx_3 + 8) = *(edi_1 + 4)
            *(ebx_3 + 0xc) = *(edi_1 + 8)
            *(ebx_3 + 0x10) = *(edi_1 + 0xc)
            int32_t* i_1 = nullptr
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            int32_t var_8_1 = 0
            void* eax_11 = sub_48c040(&i_1, nullptr, *(edi_1 + 0x14), &i_1, 0)
            int32_t var_8_2 = 1
            int32_t* i = i_1
            
            while (i != 0)
                int32_t* i_2 = i
                i = i[1]
                sub_45d050(i_2, 0xc)
            
            int32_t var_8_3 = 0xffffffff
            int32_t var_1c_2 = 0
            i_1 = nullptr
            int32_t var_20_2 = 0
            *(ebx_3 + 0x14) = eax_11
            *(ebx_3 + 0x18) = *(edi_1 + 0x10)
            result = *(*(edi_1 + 0x14) + 0x1c)
            
            if (result != *(edi_1 - 4))
                sub_44e4d0(result, &data_5559b1, 
                    "pAssetTableItem->pDefMap->assetType == pAssetTableItem->assetType", 
                    "c:\ax2017\engine\assettyperegistry.cpp", 0xab, "AssetRegistryInitForApp")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            edi_1 += 0x1c
            int32_t ecx_3 = var_14 + 1
            var_14 = ecx_3
            
            if (ecx_3 s>= data_cdf884)
                break
            
            esi = data_cdf880
            continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
