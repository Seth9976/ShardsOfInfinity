// 函数名称: sub_4a73c0
// 虚拟地址: 0x4a73c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_4a73c0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t eax = arg1
    uint32_t eax = arg1
    void* esi = data_ce189c
    int32_t ebx_1 = arg2 * 7
    int32_t edi_1 = eax * 7
    int32_t ecx_1 = *(esi + 0x5e20698)
    void* ecx_3
    void* edx_1
    
    if (ecx_1 != 0x28)
        void* ecx_6 = mods.dp.d(sx.q(*(esi + 0x5e01280) + ecx_1 + 1), 0x28) * 0x259a10 + esi
        edx_1 = (arg1 << 4) + 0x24a00c + ecx_6
        ecx_3 = ecx_6 + (arg2 << 4) + 0x24a00c
        eax = arg1
    else
        edx_1 = esi + 0x5e0128c + (edi_1 << 2)
        ecx_3 = esi + 0x5e0128c + (ebx_1 << 2)
    
    if (*(esi + 0x5e206b0) == 0)
    label_4a745a:
        eax = *(esi + 0x5e20690)
        int32_t eax_7
        int32_t xmm0_1
        int32_t xmm1_1
        
        if (eax != 1)
            if (eax == 4)
                xmm0_1 = *(edx_1 + 0xc)
                xmm1_1 = *(ecx_3 + 0xc)
                goto label_4a748e
            
            if (eax == 0)
                xmm0_1 = *(edx_1 + 4)
                xmm1_1 = *(ecx_3 + 4)
                goto label_4a748e
            
            if (eax != 2)
                if (eax != 3)
                    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\perfevent.cpp", 0x256, 
                        "ProfilerSortFunc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                eax = __stricmp(*(esi + (edi_1 << 2) + 0x5e01284), *(esi + (ebx_1 << 2) + 0x5e01284))
                
                if (eax s>= 0)
                    if (eax s> 0)
                        eax.b = 0
                        return eax
                    
                    eax =
                        __stricmp(*(esi + (edi_1 << 2) + 0x5e01288), *(esi + (ebx_1 << 2) + 0x5e01288))
                    
                    if (eax s>= 0)
                        if (eax s> 0)
                            eax.b = 0
                            return eax
                        
                        eax_7.b = arg1 s> arg2
                        return eax_7
            else
                eax = *(edx_1 + 8)
                int32_t ecx_7 = *(ecx_3 + 8)
                
                if (eax s<= ecx_7)
                    if (eax s< ecx_7)
                        eax.b = 0
                        return eax
                    
                    eax_7.b = arg1 s> arg2
                    return eax_7
        else
            xmm0_1 = *edx_1
            xmm1_1 = *ecx_3
        label_4a748e:
            
            if (not(xmm0_1 f> xmm1_1))
                if (xmm1_1 f<= xmm0_1)
                    eax_7.b = arg1 s> arg2
                    return eax_7
                
                eax.b = 0
                return eax
    else if (*(esi + 0x5e206b4) != eax)
        if (*(esi + 0x5e206b4) != arg2)
            goto label_4a745a
        
        eax.b = 0
        return eax
    
    eax.b = 1
    return eax
}
