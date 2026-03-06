// 函数名称: sub_50f4c0
// 虚拟地址: 0x50f4c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50f4c0(int32_t arg1, uint32_t (* arg2)[0x4], int32_t* arg3, void* arg4, void* arg5, int32_t arg6, int32_t arg7, int16_t* arg8)
{
    // 第一条实际指令: if (arg3[0x11f0] s< 0x10)
    if (arg3[0x11f0] s< 0x10)
        sub_50f380(arg3)
        
        if (arg3[0x11f0] s< 0x10)
            sub_50f380(arg3)
    
    int32_t edi = arg3[0x11ef]
    uint32_t eax_4 = zx.d(*((edi u>> 0x17) + arg4))
    int32_t eax_6
    int32_t ebx_1
    
    if (eax_4 u>= 0xff)
        void* eax_7 = arg4 + 0x62c
        int32_t edx_1 = 0xa
        
        while (edi u>> 0x10 u>= *eax_7)
            eax_7 += 4
            edx_1 += 1
        
        ebx_1 = arg3[0x11f0]
        
        if (edx_1 == 0x11)
            arg3[0x11f0] = ebx_1 - 0x10
        else if (edx_1 s<= ebx_1)
            eax_6 = (edi u>> (0x20 - edx_1.b) & *((edx_1 << 2) + &data_5731a0))
                + *(arg4 + (edx_1 << 2) + 0x64c)
            arg3[0x11f0] = ebx_1 - edx_1
            arg3[0x11ef] = edi << edx_1.b
            eax_6.b = *(eax_6 + arg4 + 0x400)
            goto label_50f5b1
    else
        uint32_t ecx_1 = zx.d(*(eax_4 + arg4 + 0x500))
        int32_t eax_5 = arg3[0x11f0]
        
        if (ecx_1 s<= eax_5)
            arg3[0x11ef] = edi << ecx_1.b
            arg3[0x11f0] = eax_5 - ecx_1
            eax_6.b = *(eax_4 + arg4 + 0x400)
        label_50f5b1:
            uint32_t ebx_3 = zx.d(eax_6.b)
            _memset(arg2, 0, 0x80)
            int32_t ebx_6
            
            if (ebx_3 == 0)
                ebx_6 = 0
            else
                void* eax_11 = arg3[0x11f0]
                arg4 = eax_11
                
                if (eax_11 s< ebx_3)
                    sub_50f380(arg3)
                    arg4 = arg3[0x11f0]
                
                int32_t edx_2 = arg3[0x11ef]
                int32_t edi_4 = rol.d(edx_2, ebx_3.b)
                int32_t ecx_10 = *((ebx_3 << 2) + &data_5731a0)
                arg3[0x11ef] = not.d(ecx_10) & edi_4
                int32_t ebx_5 = *((ebx_3 << 2) + &data_573160) & not.d(edx_2 s>> 0x1f)
                arg3[0x11f0] = arg4 - ebx_3
                ebx_6 = ebx_5 + (ecx_10 & edi_4)
            
            void* edx_5 = 1
            arg4 = 1
            int32_t eax_19 = arg7 * 9
            int32_t ecx_13 = arg3[eax_19 * 2 + 0x11ad] + ebx_6
            arg3[eax_19 * 2 + 0x11ad] = ecx_13
            *arg2 = ecx_13.w * *arg8
            
            while (true)
                int32_t edi_5 = arg3[0x11f0]
                int32_t var_c_1 = edi_5
                
                if (edi_5 s< 0x10)
                    sub_50f380(arg3)
                    edi_5 = arg3[0x11f0]
                    edx_5 = arg4
                    var_c_1 = edi_5
                
                int32_t ebx_7 = arg3[0x11ef]
                int32_t var_10_1 = ebx_7
                int32_t ecx_18 = sx.d(*(arg6 + (ebx_7 u>> 0x17 << 1)))
                
                if (ecx_18 == 0)
                    int32_t edi_7 = ebx_7
                    
                    if (var_c_1 s< 0x10)
                        sub_50f380(arg3)
                        int32_t eax_33 = arg3[0x11ef]
                        edi_7 = eax_33
                        var_10_1 = eax_33
                    
                    uint32_t eax_36 = zx.d(*((edi_7 u>> 0x17) + arg5))
                    int32_t ebx_10
                    int32_t edi_8
                    
                    if (eax_36 u>= 0xff)
                        int32_t* eax_37 = arg5 + 0x62c
                        int32_t edx_9 = 0xa
                        
                        while (edi_7 u>> 0x10 u>= *eax_37)
                            eax_37 = &eax_37[1]
                            edx_9 += 1
                        
                        ebx_1 = arg3[0x11f0]
                        
                        if (edx_9 == 0x11)
                            break
                        
                        if (edx_9 s> ebx_1)
                            return 0
                        
                        ebx_10 = ebx_1 - edx_9
                        eax_36 = (var_10_1 u>> (0x20 - edx_9.b) & *((edx_9 << 2) + &data_5731a0))
                            + *(arg5 + (edx_9 << 2) + 0x64c)
                        edi_8 = var_10_1 << edx_9.b
                    else
                        uint32_t ecx_25 = zx.d(*(eax_36 + arg5 + 0x500))
                        int32_t ebx_9 = arg3[0x11f0]
                        
                        if (ecx_25 s> ebx_9)
                            return 0
                        
                        edi_8 = edi_7 << ecx_25.b
                        ebx_10 = ebx_9 - ecx_25
                    
                    arg3[0x11f0] = ebx_10
                    arg3[0x11ef] = edi_8
                    eax_36.b = *(eax_36 + arg5 + 0x400)
                    uint32_t ecx_30 = zx.d(eax_36.b)
                    int32_t edx_11 = ecx_30 & 0xf
                    
                    if (edx_11 != 0)
                        void* eax_42 = arg4 + (ecx_30 u>> 4)
                        uint32_t ecx_32 = zx.d(*(eax_42 + 0x573110))
                        arg4 = eax_42 + 1
                        
                        if (ebx_10 s< edx_11)
                            sub_50f380(arg3)
                            ebx_10 = arg3[0x11f0]
                            edi_8 = arg3[0x11ef]
                        
                        int32_t edx_14 = rol.d(edi_8, edx_11.b)
                        int32_t ecx_35 = *((edx_11 << 2) + &data_5731a0)
                        arg3[0x11ef] = not.d(ecx_35) & edx_14
                        arg3[0x11f0] = ebx_10 - edx_11
                        *(arg2 + (ecx_32 << 1)) = (((not.d(edi_8 s>> 0x1f)).w
                            & *((edx_11 << 2) + &data_573160)) + (edx_14.w & ecx_35.w)) * arg8[ecx_32]
                        goto label_50f82c
                    
                    if (ecx_30 == 0xf0)
                        edx_5 = arg4 + 0x10
                        arg4 = edx_5
                        goto label_50f82f
                else
                    int32_t ecx_19 = ecx_18 & 0xf
                    void* edx_6 = edx_5 + (ecx_18 s>> 4 & 0xf)
                    arg3[0x11ef] = ebx_7 << ecx_19.b
                    arg3[0x11f0] = edi_5 - ecx_19
                    arg4 = edx_6 + 1
                    int16_t* edx_8 = zx.d(*(edx_6 + 0x573110)) * 2
                    *(edx_8 + arg2) = *(edx_8 + arg8) * (ecx_18 s>> 8).w
                label_50f82c:
                    edx_5 = arg4
                label_50f82f:
                    
                    if (edx_5 s< 0x40)
                        continue
                
                return 1
            
            arg3[0x11f0] = ebx_1 - 0x10
    return 0
}
