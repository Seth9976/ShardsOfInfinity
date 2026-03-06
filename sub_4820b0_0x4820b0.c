// 函数名称: sub_4820b0
// 虚拟地址: 0x4820b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4820b0(int32_t* arg1)
{
    // 第一条实际指令: void* eax = data_cdf428
    void* eax = data_cdf428
    float xmm0 = *(eax + 0x28)
    int32_t* ecx = arg1[4]
    char const* const var_30
    int32_t var_2c
    char const* const var_28_1
    char* ecx_1
    
    if (ecx[1] == 0x15)
        void* eax_1 = sub_4459f0(ecx)
        int32_t* esi_1 = data_cdf448
        int32_t edx_1 = 0
        void* ecx_2 = nullptr
        void* ebx_1
        int32_t edi_1
        
        while (true)
            void* eax_3
            
            if (ecx_2 != 0)
                eax_3 = *esi_1
                ecx_2 += 0x64
            else
                ecx_2 = *esi_1
                eax_3 = ecx_2
            
            ebx_1 = esi_1[1]
            edi_1 = ebx_1 * 0x64
            void* eax_4 = eax_3 + edi_1
            
            if (ecx_2 u>= eax_4)
                break
            
            while (true)
                if ((*(ecx_2 + 0x60) & 0xffff0000) != 0)
                    if (*(ecx_2 + 4) != arg1[4])
                        break
                    
                    if (*(ecx_2 + 0x5a) == 0)
                        break
                    
                    edx_1 += 1
                    break
                
                ecx_2 += 0x64
                
                if (ecx_2 u>= eax_4)
                    goto label_482135
        
    label_482135:
        int32_t eax_6 = *(eax_1 + 8)
        
        if (eax_6 s> 0 && edx_1 s>= eax_6)
            return 0
        
        void* ecx_3 = nullptr
        
        while (true)
            void* eax_7
            
            if (ecx_3 != 0)
                eax_7 = *esi_1
                ecx_3 += 0x64
            else
                ecx_3 = *esi_1
                eax_7 = ecx_3
            
            void* eax_9 = eax_7 + edi_1
            
            if (ecx_3 u>= eax_9)
                break
            
            while ((*(ecx_3 + 0x60) & 0xffff0000) == 0)
                ecx_3 += 0x64
                
                if (ecx_3 u>= eax_9)
                    goto label_482187
            
            if (*ecx_3 != *arg1 && *(ecx_3 + 4) != arg1[4])
                continue
            
            if (*(ecx_3 + 0x5a) != 0)
                float xmm1_1 = *(eax_1 + 0xc)
                
                if (not(xmm1_1 f<= 0))
                    if (not(xmm1_1 <= xmm0 f- *(ecx_3 + 0x10)))
                        return 0
        
    label_482187:
        eax = esi_1[4]
        int32_t temp0_1 = esi_1[2]
        
        if (eax == temp0_1)
            char* const ecx_4 = &data_5559b1
            char* eax_11 = *(*arg1 + 0x20)
            
            if (eax_11 != 0)
                ecx_4 = eax_11
            
            char* const var_28_2 = ecx_4
            sub_44e260("Too many sounds, not playing %s")
            return 0
        
        if (eax u< temp0_1)
            eax = esi_1[3]
            
            if (eax u<= ebx_1)
                int32_t ecx_5 = *esi_1
                void* eax_17
                
                if (eax != ebx_1)
                    ebx_1 = eax
                    eax_17 = *(eax * 0x64 + ecx_5 + 0x60)
                else
                    eax_17 = ebx_1 + 1
                    esi_1[1] = eax_17
                
                esi_1[3] = eax_17
                int32_t* edi_3 = ebx_1 * 0x64 + ecx_5
                _memset(edi_3, 0, 0x60)
                edi_3[0x18] = esi_1[5] << 0x10 | ebx_1
                esi_1[5] += 1
                
                if (esi_1[5] == 0x10000)
                    esi_1[5] = 1
                
                esi_1[4] += 1
                *edi_3 = *arg1
                edi_3[1] = arg1[4]
                edi_3[0x10] = arg1[1]
                edi_3[0x11] = arg1[2]
                int32_t eax_25
                eax_25.b = *(arg1 + 0x15)
                *(edi_3 + 0x5b) = eax_25.b
                eax_25.b = *(arg1 + 0x16)
                edi_3[0x17].b = eax_25.b
                eax_25.b = arg1[5].b
                edi_3[0x16].b = eax_25.b
                edi_3[8] = 0
                edi_3[0xf] = 0x3f800000
                eax_25.b = *(arg1 + 0x17)
                *(edi_3 + 0x5d) = eax_25.b
                void* eax_26
                int32_t xmm0_3
                eax_26, xmm0_3 = sub_481fd0(edi_3)
                edi_3[0x12] = xmm0_3
                edi_3[0x14] = 0x3f000000
                float xmm0_4 = arg1[1]
                xmm0_4 f- 0
                eax_26:1.b = (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2
                    | (xmm0_4 < 0f ? 1 : 0)
                bool p_1 = unimplemented  {test ah, 0x44}
                float xmm0_5
                
                if (not(p_1))
                    xmm0_5 = 1f
                else
                    xmm0_5 = fconvert.s(sub_414580(0x3f879c7d, xmm0_4))
                
                int32_t* ecx_7 = data_cdf444
                edi_3[0x13] = xmm0_5
                
                if ((*(*ecx_7 + 0xc))(edi_3, arg1) != 0)
                    int32_t result = edi_3[0x18]
                    edi_3[4] = xmm0
                    *(edi_3 + 0x5a) = 1
                    return result
                
                void* edx_3 = data_cdf448
                int32_t ecx_8 = *(edx_3 + 0xc)
                *(edx_3 + 0xc) = zx.d(edi_3[0x18].w)
                edi_3[0x18] = ecx_8
                *(edx_3 + 0x10) -= 1
                return 0
            
            var_28_1 = "DataArray<struct SoundInstance>::DataArrayAlloc"
            var_2c = 0xf5
            ecx_1 = "mFreeListHead <= mMaxUsedCount"
        else
            var_28_1 = "DataArray<struct SoundInstance>::DataArrayAlloc"
            var_2c = 0xf4
            ecx_1 = "mUsedCount < mMaxSize"
        
        var_30 = "c:\ax2017\engine\dataarray.h"
    else
        var_28_1 = "SoundGetDef"
        var_2c = 0x330
        var_30 = "c:\ax2017\engine\sound.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_30, var_2c, var_28_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
