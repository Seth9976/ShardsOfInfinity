// 函数名称: sub_4e6a80
// 虚拟地址: 0x4e6a80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_4e6a80(void* arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t* edi = arg2
    int32_t* edi = arg2
    int32_t* result
    
    if (*(arg1 + 4) != 0)
        int32_t* ecx = *edi
        arg2 = nullptr
        char const* const var_24_1
        int32_t var_20_1
        char const* const var_1c_1
        char* ecx_1
        
        if (ecx[1] != 0x15)
            var_1c_1 = "SoundGetDef"
            var_20_1 = 0x330
            var_24_1 = "c:\ax2017\engine\sound.cpp"
            ecx_1 = "assetPtr->assetType == ASSET_TYPE_SOUND"
        label_4e6cac:
            sub_44e4d0(result, &data_5559b1, ecx_1, var_24_1, var_20_1, var_1c_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax
        int32_t mxcsr_1
        int16_t x87control_1
        eax, mxcsr_1, x87control_1 = sub_4459f0(ecx)
        int32_t eax_1 = *(eax + 0x20)
        
        if (eax_1 != 0)
            int32_t* ecx_2 = *(arg1 + 4)
            result = (*(*ecx_2 + 0x14))(ecx_2, eax_1, &arg2)
            
            if (result == 0)
                goto label_4e6b12
            
            var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
            var_20_1 = 0x18b
        label_4e6c9d:
            ecx_1 = "hr == S_OK"
            var_24_1 = "c:\ax2017\engine\windows\windowssound.cpp"
            goto label_4e6cac
        
        result, mxcsr_1, x87control_1 = sub_4e6730(edi, *(arg3 + 0xc))
        int32_t* result_1 = result
        arg2 = result_1
        
        if (result_1 != 0)
            if (*(edi + 0x59) == 0)
                *(eax + 0x20) = result_1
            label_4e6b12:
                result_1 = arg2
            
            edi[2] = result_1
            float xmm0_3 = _mm_cvtepi32_ps(zx.o(**(eax + 0x28))) f* edi[0x13]
            float xmm0_4
            
            if (0 f<= xmm0_3)
                xmm0_4 = xmm0_3 + 0.5f
            else
                xmm0_4 = xmm0_3 - 0.5f
            
            float xmm0_6 = edi[0x14] f* 20000f
            float xmm0_7
            
            if (0 f<= xmm0_6)
                xmm0_7 = xmm0_6 + 0.5f
            else
                xmm0_7 = xmm0_6 - 0.5f
            
            float xmm1_1 = edi[0x12]
            int32_t esi_2
            
            if (not(0f < xmm1_1))
                esi_2 = 0xffffd8f0
            else if (xmm1_1 < 1f)
                float xmm0_12 = fconvert.s(__libm_sse2_log10_precise(mxcsr_1, x87control_1, 
                    _mm_cvtps_pd(1f / xmm1_1))) * -2000f
                float xmm0_13
                
                if (0 f<= xmm0_12)
                    xmm0_13 = xmm0_12 + 0.5f
                else
                    xmm0_13 = xmm0_12 - 0.5f
                
                esi_2 = int.d(xmm0_13)
                
                if (esi_2 s< 0xffffd8f0)
                    esi_2 = 0xffffd8f0
                else if (esi_2 s> 0)
                    esi_2 = 0
            else
                esi_2 = 0
            
            char edx_2 = *(edi + 0x59)
            int32_t edi_1
            
            if (edi[0x16].b != 0 || edx_2 != 0)
                edi_1 = 1
            else
                edi_1 = 0
            
            int32_t eax_7 = 0
            
            if (edx_2 == 0)
                eax_7 = *(arg3 + 0xc)
            
            result = (*(*result_1 + 0x34))(result_1, eax_7)
            
            if (result == 0)
                int32_t* eax_8 = arg2
                result = (*(*eax_8 + 0x44))(eax_8, int.d(xmm0_4))
                
                if (result == 0)
                    int32_t* eax_9 = arg2
                    result = (*(*eax_9 + 0x40))(eax_9, int.d(xmm0_7) - 0x2710)
                    
                    if (result == 0)
                        int32_t* eax_10 = arg2
                        result = (*(*eax_10 + 0x3c))(eax_10, esi_2)
                        
                        if (result == 0)
                            int32_t* eax_11 = arg2
                            result = (*(*eax_11 + 0x30))(eax_11, 0, 0, edi_1)
                            
                            if (result == 0)
                                result.b = 1
                                return result
                            
                            var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                            var_20_1 = 0x1bf
                        else
                            var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                            var_20_1 = 0x1bc
                    else
                        var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                        var_20_1 = 0x1b9
                else
                    var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                    var_20_1 = 0x1b6
            else
                var_1c_1 = "WindowsSoundInterface::SoundInterfacePlay"
                var_20_1 = 0x1b3
            
            goto label_4e6c9d
    
    result.b = 0
    return result
}
