// 函数名称: sub_474df0
// 虚拟地址: 0x474df0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_474df0()
{
    // 第一条实际指令: __alloca_probe(0x242c)
    __alloca_probe(0x242c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t ecx = data_5cd9fc
    int32_t var_14 = data_5cea2c
    int32_t var_2418 = 0
    int32_t var_140c[0x400]
    int32_t* eax_3 = sub_46ab50(&var_2418, &var_140c, ecx, &var_2418, &data_5cda2c, var_14)
    int32_t ebx = var_2418
    int32_t esi = 0
    int32_t var_2410 = 0
    int32_t var_240c[0x400]
    
    if (ebx s> 0)
        do
            eax_3 = sub_474c20(&var_2410, &var_240c, var_140c[esi], &var_2410)
            esi += 1
        while (esi s< ebx)
    
    char const* const var_1c_2
    int32_t var_18_1
    char const* const var_14_2
    char* ecx_5
    
    if (ebx s<= 0 || ebx s<= 0)
        var_14_2 = "UI2HighestItem"
        var_18_1 = 0x2a34
        ecx_5 = "numItems > 0"
    else
        int32_t edx_2 = 0
        int32_t edi_1 = data_5c99a0
        void* var_2414_1 = nullptr
        
        while (true)
            int32_t ecx_2 = var_140c[edx_2]
            
            if (ecx_2 == 0)
            label_475186:
                var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                var_18_1 = 0x6c
                var_1c_2 = "c:\ax2017\engine\dataarray.h"
                ecx_5 = "id != DATAID_NULL"
                goto label_4751fb
            
            uint32_t esi_1 = zx.d(ecx_2.w)
            
            if (esi_1 u< data_5c99a4)
                eax_3 = esi_1 * 0x1008
                
                if (*(eax_3 + edi_1 + 0x1004) == ecx_2)
                    void* esi_2 = var_2414_1
                    void* ecx_4 = esi_1 * 0x1008 + edi_1
                    
                    if (esi_2 != 0)
                        eax_3 = *(esi_2 + 0x6a8)
                    
                    if (esi_2 == 0 || eax_3 s< *(ecx_4 + 0x6a8))
                        esi_2 = ecx_4
                        var_2414_1 = esi_2
                    
                    edx_2 += 1
                    
                    if (edx_2 s< var_2418)
                        continue
                    
                    if (esi_2 != 0)
                        int32_t* esi_3 = data_5cd9f8
                        
                        if (esi_3[1] == 0x22)
                            void** eax_5 = sub_4459f0(esi_3)
                            void* ebx_2 = var_2414_1
                            int32_t eax_6 = sub_474d20(eax_5, *(ebx_2 + 0x6a8))
                            int32_t var_14_3 = var_2410
                            int32_t eax_7 = eax_6 + *(ebx_2 + 0x6a8) + 1
                            int32_t* eax_8 = sub_48c3c0(data_e470e0, 0)
                            sub_4d2c20(eax_8, eax_8, eax_5, eax_7, var_14_3)
                            int32_t edx_5 = var_2410
                            void* eax_9 = nullptr
                            
                            while (true)
                                void* edi_3 = data_5c99a0
                                
                                while (true)
                                    if (eax_9 != 0)
                                        eax_9 += 0x1008
                                    else
                                        eax_9 = edi_3
                                    
                                    void* ecx_13 = data_5c99a4 * 0x1008 + edi_3
                                    
                                    if (eax_9 u>= ecx_13)
                                    label_474fd9:
                                        void* var_14_4 = 0x400
                                        data_5cea2c = 0
                                        uint32_t var_40c[0x3f][0x4]
                                        _memset(&var_40c, 0, var_14_4)
                                        int32_t edx_6 = 0
                                        int32_t i_1 = 0
                                        int32_t i_2 = 0
                                        int32_t var_242c_1 = 0
                                        
                                        if (var_2410 s> 0)
                                            eax_3 = eax_7 * 0xc
                                            int32_t* var_2428_1 = eax_3
                                            
                                            while (true)
                                                int32_t ecx_14 = var_240c[edx_6]
                                                
                                                if (ecx_14 == 0)
                                                    goto label_475186
                                                
                                                uint32_t edx_7 = zx.d(ecx_14.w)
                                                
                                                if (edx_7 u>= data_5c99a4)
                                                    goto label_475173
                                                
                                                eax_3 = edx_7 * 0x1008
                                                
                                                if (*(eax_3 + edi_3 + 0x1004) != ecx_14)
                                                    goto label_475173
                                                
                                                int32_t* eax_12 = sub_45d320(edx_7 * 0x1008 + edi_3)
                                                int32_t i = 0
                                                void* eax_15 = *eax_5 + var_2428_1
                                                void* var_2420_1 = eax_15
                                                *(eax_15 + 8) = eax_12[2]
                                                
                                                if (*eax_12 s> 0)
                                                    do
                                                        int32_t eax_16 = eax_12[1]
                                                        sub_4b8610(eax_16, eax_15, &data_5b1d6c, 
                                                            *(eax_16 + (i << 3)), 
                                                            *(eax_16 + (i << 3) + 4))
                                                        i += 1
                                                    while (i s< *eax_12)
                                                    
                                                    i_1 = i_2
                                                    eax_15 = var_2420_1
                                                
                                                sub_468e30(eax_15)
                                                int32_t eax_17 = data_5cea2c
                                                var_40c[0][i_1] -= 1
                                                (&data_5cda2c)[eax_17] = eax_7 + var_242c_1
                                                data_5cea2c += 1
                                                int32_t* ecx_21 = var_40c[0][i_1]
                                                eax_3 = *(var_2420_1 + 8)
                                                
                                                if (eax_3 != 0)
                                                    i_1 += 1
                                                    ecx_21 = eax_3
                                                    i_2 = i_1
                                                    var_40c[0][i_1] = eax_3
                                                
                                                if (ecx_21 == 0)
                                                    while (i_1 s> 0)
                                                        i_1 -= 1
                                                        
                                                        if (var_40c[0][i_1] != 0)
                                                            break
                                                    
                                                    i_2 = i_1
                                                
                                                var_2428_1 = &var_2428_1[3]
                                                edx_6 = var_242c_1 + 1
                                                var_242c_1 = edx_6
                                                
                                                if (edx_6 s>= var_2410)
                                                    ebx_2 = var_2414_1
                                                    break
                                                
                                                edi_3 = data_5c99a0
                                        
                                        void* eax_19 = sub_46a5b0(eax_5, *(ebx_2 + 0x6a8))
                                        
                                        if (eax_19 != 0)
                                            *(eax_19 + 8) += var_2418
                                        
                                        int32_t* result = sub_45e9a0(&data_5cd9fc)
                                        data_5cd9fc = 0
                                        int32_t entry_ebx
                                        @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
                                        return result
                                    
                                    while ((*(eax_9 + 0x1004) & 0xffff0000) == 0)
                                        eax_9 += 0x1008
                                        
                                        if (eax_9 u>= ecx_13)
                                            goto label_474fd9
                                    
                                    if (*(eax_9 + 0x6a4) == esi_3)
                                        int32_t ecx_22 = *(eax_9 + 0x6a8)
                                        
                                        if (ecx_22 s>= eax_7)
                                            *(eax_9 + 0x6a8) = ecx_22 + edx_5
                                            break
                        else
                            var_14_2 = "UI2DefGet"
                            var_18_1 = 0x623
                            ecx_5 = "ptr->assetType == ASSET_TYPE_UI2"
                    else
                        var_14_2 = "UI2HighestItem"
                        var_18_1 = 0x2a42
                        ecx_5 = "Halt"
                    
                    break
            
        label_475173:
            var_14_2 = "DataArray<struct UI2>::DataArrayGet"
            var_18_1 = 0x6d
            var_1c_2 = "c:\ax2017\engine\dataarray.h"
            ecx_5 = "DataArrayTryToGet(id) != NULL"
            goto label_4751fb
    
    var_1c_2 = "c:\ax2017\engine\ui2.cpp"
    label_4751fb:
    sub_44e4d0(eax_3, &data_5559b1, ecx_5, var_1c_2, var_18_1, var_14_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
