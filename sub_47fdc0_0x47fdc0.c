// 函数名称: sub_47fdc0
// 虚拟地址: 0x47fdc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_47fdc0(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t var_8 = arg1
    char const* const var_28
    int32_t var_24
    char const* const var_20_1
    void* eax
    char* ecx
    
    if (edi s<= 0)
        var_20_1 = "GameUpdateSimulation"
        var_24 = 0x6d
        var_28 = "c:\ax2017\engine\game.cpp"
        ecx = "updateTicks > 0"
    label_480072:
        sub_44e4d0(eax, &data_5559b1, ecx, var_28, var_24, var_20_1)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    int32_t var_c_1 = 1
    sub_452180()
    void* eax_1 = data_cdf450
    
    if (*(eax_1 + 0x10) == 1)
        float xmm0_2 = data_5b0f3c f+ *(eax_1 + 0x14)
        *(eax_1 + 0x14) = xmm0_2
        
        if (not(xmm0_2 < 0.75f))
            *(eax_1 + 0x10) = 0
    
    int32_t* esi_1 = nullptr
    
    while (true)
        int32_t* eax_3
        
        if (esi_1 != 0)
            eax_3 = esi_1[8]
        else
            eax_3 = *data_cdf450
        
        if (eax_3 == 0)
            break
        
        while (true)
            esi_1 = eax_3
            eax_3 = eax_3[8]
            
            if (esi_1[7].b == 0)
                if (sub_48c940(esi_1) == 0)
                    break
                
                esi_1[7].b = 1
                break
            
            if (eax_3 == 0)
                goto label_47fe43
    
    label_47fe43:
    int32_t* ecx_1 = data_65ae00
    float xmm1_1 = data_5b1104
    int32_t esi_2
    
    if (*(ecx_1 + 0x25) == 0)
        esi_2 = 1
    else
        esi_2 = edi
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(edi))
        edi = 1
        var_c_1 = esi_2
        var_8 = 1
        data_5b0f3c = xmm0_4 * xmm1_1
    
    int32_t ebx_1 = 0
    
    if (edi s> 0)
        while (true)
            void* eax_5 = data_cdf428
            *(eax_5 + 0x28) = *(eax_5 + 0x28) f+ data_5b0f3c
            (*(*ecx_1 + 0x1c))()
            void* eax_7 = data_cdf428
            
            if (*(eax_7 + 0x21) == 0)
                int32_t* ecx_4 = data_65ae00
                *(eax_7 + 0x2c) = *(eax_7 + 0x2c) f+ data_5b0f3c
                eax = (*(*ecx_4 + 0x20))(esi_2)
                void* edi_1 = data_cdf428
                
                if (edi_1 == 0)
                label_48005c:
                    var_20_1 = "GetGameData"
                    var_24 = 0x45
                    ecx = "gpGameData"
                    var_28 = "c:\ax2017\engine\game.h"
                    goto label_480072
                
                int32_t* edi_2 = *(edi_1 + 0xc)
                void* esi_3 = nullptr
                
                while (true)
                    void* ecx_5
                    
                    if (esi_3 != 0)
                        ecx_5 = *edi_2
                        esi_3 += 0x94
                    else
                        esi_3 = *edi_2
                        ecx_5 = esi_3
                    
                    void* eax_10 = edi_2[1] * 0x94 + ecx_5
                    
                    if (esi_3 u>= eax_10)
                        break
                    
                    while (true)
                        if ((*(esi_3 + 0x90) & 0xffff0000) != 0)
                            if (*(esi_3 + 0x7c) == 0)
                                break
                            
                            sub_4c0fc0(esi_3)
                            break
                        
                        esi_3 += 0x94
                        
                        if (esi_3 u>= eax_10)
                            goto label_47ff46
                
            label_47ff46:
                eax = data_cdf428
                
                if (eax == 0)
                    goto label_48005c
                
                int32_t* edi_3 = *(eax + 0x10)
                void* esi_4 = nullptr
                
                while (true)
                    void* ecx_6
                    
                    if (esi_4 != 0)
                        ecx_6 = *edi_3
                        esi_4 += 0x7c
                    else
                        esi_4 = *edi_3
                        ecx_6 = esi_4
                    
                    void* eax_12 = edi_3[1] * 0x7c + ecx_6
                    
                    if (esi_4 u>= eax_12)
                        break
                    
                    while (true)
                        if ((*(esi_4 + 0x78) & 0xffff0000) != 0)
                            if (*(esi_4 + 0x76) == 0)
                                break
                            
                            sub_4954d0(esi_4)
                            break
                        
                        esi_4 += 0x7c
                        
                        if (esi_4 u>= eax_12)
                            goto label_47ff90
                
            label_47ff90:
                int32_t* ecx_8 = data_ce1aec
                
                if (ecx_8 != 0)
                    (*(*ecx_8 + 8))()
                
                int32_t* ecx_9 = data_65acf4
                
                if (ecx_9 != 0)
                    void* esi_5 = nullptr
                    
                    while (true)
                        void* edx_1
                        
                        if (esi_5 != 0)
                            edx_1 = *ecx_9
                            esi_5 += 0x4c
                        else
                            esi_5 = *ecx_9
                            edx_1 = esi_5
                        
                        void* eax_15 = ecx_9[1] * 0x4c + edx_1
                        
                        if (esi_5 u>= eax_15)
                            break
                        
                        while (true)
                            if ((*(esi_5 + 0x48) & 0xffff0000) != 0)
                                if (*(esi_5 + 0x24) != 4)
                                    break
                                
                                sub_451e00(esi_5)
                                ecx_9 = data_65acf4
                                break
                            
                            esi_5 += 0x4c
                            
                            if (esi_5 u>= eax_15)
                                goto label_47fff6
                
            label_47fff6:
                sub_48cf60(data_cdf450)
                edi = var_8
            else
                sub_48cf60(data_cdf450)
            
            ecx_1 = data_65ae00
            ebx_1 += 1
            
            if (ebx_1 s>= edi)
                xmm1_1 = data_5b1104
                break
            
            esi_2 = var_c_1
    
    if (*(ecx_1 + 0x25) != 0)
        data_5b0f3c = xmm1_1
    
    int32_t* result = sub_48cf60(data_cdf450)
    
    if (data_cdf444 == 0)
        return result
    
    return sub_482610()
}
