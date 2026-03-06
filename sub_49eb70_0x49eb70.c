// 函数名称: sub_49eb70
// 虚拟地址: 0x49eb70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_49eb70(int32_t arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: void* ecx
    void* ecx
    void* edx
    ecx, edx = __alloca_probe(0x20f8)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t result = data_ce26e4
    int32_t edx_1 = *(ecx + 0x2dc)
    
    if (result != **(ecx + 0x2e4))
    label_49ebe2:
        void var_2098
        sub_49cd70(sub_49a5f0(&var_2098, edx, ecx, &var_2098), &var_2098, ecx, arg2)
        int32_t* eax_5 = sub_4459f0(**(ecx + 0x2e4))
        
        if (*(*(ecx + 0x2dc) * 0x134 + *eax_5 + 0xe9) == 0)
            result = *sub_4459f0(**(ecx + 0x2e4))
        
        if (*(*(ecx + 0x2dc) * 0x134 + *eax_5 + 0xe9) != 0
                || *(*(ecx + 0x2dc) * 0x134 + result + 0xea) != 0)
            float eax_9 = data_65aec8
            int32_t edi_1 = 0
            float var_20a0_1 = eax_9
            void* esi_2 = nullptr
            int128_t var_20b8_1 = data_65aeb0
            int64_t xmm0_2 = data_65aec0
            char var_2010
            
            while (true)
                if (esi_2 != 0)
                    esi_2 = *(esi_2 + 0x2fc)
                else
                    esi_2 = *(ecx + 0x2d0)
                
                if (esi_2 == 0)
                    break
                
                int32_t* eax_11 = sub_4459f0(**(esi_2 + 0x2e4))
                void* eax_13 = esi_2 + 0x2a8
                void var_2030
                
                if (*(*(esi_2 + 0x2dc) * 0x134 + *eax_11 + 0xd9) == 0)
                    eax_13 = &var_2030
                int128_t var_20f8
                sub_4a0490(eax_13, esi_2 + 0x288, &var_20f8, eax_13)
                int128_t var_20d8_1 = var_20f8
                eax_9 = *sub_4459f0(**(ecx + 0x2e4))
                float xmm2_1
                int128_t var_20e8
                
                if (*(*(ecx + 0x2dc) * 0x134 i+ eax_9 + 0xea) == 0)
                    float xmm2_3 = xmm0_2.d f- var_20e8:4.d
                    float xmm0_9 = xmm0_2:4.d f- var_20e8:8.d
                    float xmm1_2 = var_20a0_1 f- var_20e8:0xc.d
                    xmm2_1 = xmm2_3 * xmm2_3 + xmm0_9 * xmm0_9 + xmm1_2 * xmm1_2
                else
                    xmm2_1 = sub_41b760(var_20e8:8.d f- xmm0_2:4.d)
                *(&var_2010 + (edi_1 << 3)) = esi_2
                int32_t var_200c[0x7fc]
                var_200c[edi_1 * 2] = xmm2_1
                edi_1 += 1
                
                if (edi_1 == 0x400)
                    eax_9 = sub_44e260("too many particle to sort")
                    break
            
            result = sub_445260(eax_9, &(&var_2010)[edi_1 << 3], &var_2010, edi_1, sub_49eb40)
            int32_t esi_3 = 0
            
            if (edi_1 s> 0)
                do
                    *(&var_2010 + (esi_3 << 3))
                    result = sub_49eb70(arg2)
                    esi_3 += 1
                while (esi_3 s< edi_1)
        else
            void* esi_1 = nullptr
            
            while (true)
                if (esi_1 != 0)
                    esi_1 = *(esi_1 + 0x2fc)
                else
                    esi_1 = *(ecx + 0x2d0)
                
                if (esi_1 == 0)
                    break
                
                result = sub_49eb70(arg2)
    else
        if (edx_1 u> 0xff)
            sub_44e4d0(result, &data_5559b1, "emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", 
                "c:\ax2017\engine\windows\editorwindow.cpp", 0x18cb, "EditorEmitterIsHidden")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*((edx_1 << 3) + &data_ce1cd8) == 0)
            goto label_49ebe2
    
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
