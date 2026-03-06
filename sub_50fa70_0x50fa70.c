// 函数名称: sub_50fa70
// 虚拟地址: 0x50fa70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50fa70(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* i = arg3[0x11f4]
    void* i = arg3[0x11f4]
    
    if (i != 0)
        char ecx = (arg3[0x11f7]).b
        int32_t ebx_1 = arg3[0x11f8]
        int32_t ebx_6
        
        if (arg3[0x11f6] != 0)
            uint32_t edx_10 = zx.d(1 << ecx)
            uint32_t var_10_3 = edx_10
            
            if (ebx_1 != 0)
                arg3[0x11f8] = ebx_1 - 1
                
                if (i s> arg3[0x11f5])
                    return 1
                
                int32_t ecx_24 = arg2
                
                do
                    uint32_t eax_35 = zx.d(*(i + 0x573110))
                    int16_t* ebx_12 = ecx_24 + (eax_35 << 1)
                    
                    if (*(ecx_24 + (eax_35 << 1)) != 0)
                        if (arg3[0x11f0] s< 1)
                            sub_50f380(arg3)
                            edx_10 = var_10_3
                        
                        int32_t ecx_26 = arg3[0x11ef]
                        arg3[0x11f0] -= 1
                        arg3[0x11ef] = ecx_26 * 2
                        
                        if (ecx_26 s< 0)
                            int16_t ecx_27 = *ebx_12
                            
                            if ((ecx_27 & edx_10.w) == 0)
                                if (ecx_27 s<= 0)
                                    *ebx_12 = ecx_27 - edx_10.w
                                else
                                    *ebx_12 = ecx_27 + edx_10.w
                        
                        ecx_24 = arg2
                    
                    i += 1
                while (i s<= arg3[0x11f5])
                
                return 1
            
            while (true)
                if (arg3[0x11f0] s< 0x10)
                    sub_50f380(arg3)
                
                int32_t edx_11 = arg3[0x11ef]
                uint32_t eax_43 = zx.d(*((edx_11 u>> 0x17) + arg4))
                int32_t var_8_2
                int32_t ecx_31
                int32_t ebx_15
                
                if (eax_43 u>= 0xff)
                    void* eax_44 = arg4 + 0x62c
                    int32_t edx_13 = 0xa
                    
                    while (edx_11 u>> 0x10 u>= *eax_44)
                        eax_44 += 4
                        edx_13 += 1
                    
                    ebx_6 = arg3[0x11f0]
                    
                    if (edx_13 == 0x11)
                        break
                    
                    if (edx_13 s> ebx_6)
                        return 0
                    
                    ebx_15 = ebx_6 - edx_13
                    eax_43 = (edx_11 u>> (0x20 - edx_13.b) & *((edx_13 << 2) + &data_5731a0))
                        + *(arg4 + (edx_13 << 2) + 0x64c)
                    var_8_2 = edx_11 << edx_13.b
                    ecx_31 = var_8_2
                    arg3[0x11ef] = ecx_31
                else
                    uint32_t ecx_30 = zx.d(*(eax_43 + arg4 + 0x500))
                    int32_t ebx_14 = arg3[0x11f0]
                    
                    if (ecx_30 s> ebx_14)
                        return 0
                    
                    int32_t edx_12 = edx_11 << ecx_30.b
                    ebx_15 = ebx_14 - ecx_30
                    var_8_2 = edx_12
                    ecx_31 = edx_12
                    arg3[0x11ef] = edx_12
                
                arg3[0x11f0] = ebx_15
                eax_43.b = *(eax_43 + arg4 + 0x400)
                uint32_t edx_15 = zx.d(eax_43.b)
                uint32_t edx_16 = edx_15 u>> 4
                int32_t eax_49 = edx_15 & 0xf
                uint32_t var_14_2 = edx_16
                int16_t var_18_3 = eax_49.w
                
                if (eax_49 != 0)
                    if (eax_49 != 1)
                        return 0
                    
                    if (ebx_15 s< eax_49)
                        sub_50f380(arg3)
                        ebx_15 = arg3[0x11f0]
                        ecx_31 = arg3[0x11ef]
                        edx_16 = var_14_2
                    
                    arg3[0x11ef] = ecx_31 * 2
                    arg3[0x11f0] = ebx_15 - 1
                    int32_t eax_61 = sx.d(var_10_3.w)
                    var_18_3 = eax_61.w
                    
                    if (ecx_31 s>= 0)
                        var_18_3 = (neg.d(eax_61)).w
                else if (edx_16 u< 0xf)
                    int32_t var_1c_4 = (1 << edx_16.b) - 1
                    arg3[0x11f8] = (1 << edx_16.b) - 1
                    
                    if (edx_16 != 0)
                        int32_t eax_53
                        
                        if (ebx_15 s>= edx_16)
                            eax_53 = var_8_2
                        else
                            sub_50f380(arg3)
                            ebx_15 = arg3[0x11f0]
                            edx_16 = var_14_2
                            var_1c_4 = arg3[0x11f8]
                            eax_53 = arg3[0x11ef]
                        
                        int32_t eax_54 = rol.d(eax_53, edx_16.b)
                        int32_t ecx_41 = *((edx_16 << 2) + &data_5731a0)
                        arg3[0x11ef] = not.d(ecx_41) & eax_54
                        arg3[0x11f0] = ebx_15 - edx_16
                        arg3[0x11f8] = (ecx_41 & eax_54) + var_1c_4
                    
                    edx_16 = 0x40
                    var_14_2 = 0x40
                
                if (i s> arg3[0x11f5])
                    return 1
                
                int32_t ecx_45 = arg2
                int32_t eax_70
                
                do
                    uint32_t eax_64 = zx.d(*(i + 0x573110))
                    i += 1
                    int16_t* ebx_17 = ecx_45 + (eax_64 << 1)
                    
                    if (*(ecx_45 + (eax_64 << 1)) == 0)
                        if (edx_16 == 0)
                            *ebx_17 = var_18_3
                            eax_70 = arg3[0x11f5]
                            break
                        
                        edx_16 -= 1
                        var_14_2 = edx_16
                    else
                        if (arg3[0x11f0] s< 1)
                            sub_50f380(arg3)
                            edx_16 = var_14_2
                        
                        int32_t ecx_47 = arg3[0x11ef]
                        arg3[0x11f0] -= 1
                        arg3[0x11ef] = ecx_47 * 2
                        
                        if (ecx_47 s< 0)
                            int16_t ecx_48 = *ebx_17
                            
                            if ((ecx_48 & var_10_3.w) == 0)
                                if (ecx_48 s<= 0)
                                    *ebx_17 = ecx_48 - var_10_3.w
                                else
                                    *ebx_17 = var_10_3.w + ecx_48
                        
                        ecx_45 = arg2
                    
                    eax_70 = arg3[0x11f5]
                while (i s<= eax_70)
                
                if (i s> eax_70)
                    return 1
        else
            if (ebx_1 != 0)
                arg3[0x11f8] = ebx_1 - 1
                return 1
            
            while (true)
                int32_t edx = arg3[0x11f0]
                
                if (edx s< 0x10)
                    sub_50f380(arg3)
                    edx = arg3[0x11f0]
                
                int32_t ebx_2 = arg3[0x11ef]
                int32_t var_10_1 = ebx_2
                int32_t ecx_3 = sx.d(*(arg5 + (ebx_2 u>> 0x17 << 1)))
                
                if (ecx_3 == 0)
                    if (edx s< 0x10)
                        sub_50f380(arg3)
                        int32_t eax_8 = arg3[0x11ef]
                        ebx_2 = eax_8
                        var_10_1 = eax_8
                    
                    uint32_t eax_11 = zx.d(*((ebx_2 u>> 0x17) + arg4))
                    int32_t var_14_1
                    int32_t edx_5
                    int32_t ebx_4
                    
                    if (eax_11 u>= 0xff)
                        int32_t* eax_12 = arg4 + 0x62c
                        int32_t edx_6 = 0xa
                        
                        while (ebx_2 u>> 0x10 u>= *eax_12)
                            eax_12 = &eax_12[1]
                            edx_6 += 1
                        
                        ebx_6 = arg3[0x11f0]
                        
                        if (edx_6 == 0x11)
                            break
                        
                        if (edx_6 s> ebx_6)
                            return 0
                        
                        int32_t ebx_7 = ebx_6 - edx_6
                        var_14_1 = ebx_7
                        eax_11 = (var_10_1 u>> (0x20 - edx_6.b) & *((edx_6 << 2) + &data_5731a0))
                            + *(arg4 + (edx_6 << 2) + 0x64c)
                        edx_5 = var_14_1
                        arg3[0x11f0] = ebx_7
                        ebx_4 = var_10_1 << edx_6.b
                    else
                        uint32_t ecx_9 = zx.d(*(eax_11 + arg4 + 0x500))
                        int32_t edx_4 = arg3[0x11f0]
                        
                        if (ecx_9 s> edx_4)
                            return 0
                        
                        ebx_4 = ebx_2 << ecx_9.b
                        edx_5 = edx_4 - ecx_9
                        var_14_1 = edx_5
                        arg3[0x11f0] = edx_5
                    
                    arg3[0x11ef] = ebx_4
                    eax_11.b = *(eax_11 + arg4 + 0x400)
                    uint32_t ecx_14 = zx.d(eax_11.b)
                    uint32_t ecx_15 = ecx_14 u>> 4
                    int32_t eax_17 = ecx_14 & 0xf
                    int32_t var_10_2 = eax_17
                    
                    if (eax_17 != 0)
                        void* edi_1 = i + ecx_15
                        uint32_t ecx_16 = zx.d(*(edi_1 + 0x573110))
                        i = edi_1 + 1
                        
                        if (edx_5 s< eax_17)
                            sub_50f380(arg3)
                            ebx_4 = arg3[0x11ef]
                            var_14_1 = arg3[0x11f0]
                            eax_17 = var_10_2
                        
                        int32_t edx_8 = rol.d(ebx_4, eax_17.b)
                        int32_t ecx_19 = *((eax_17 << 2) + &data_5731a0)
                        arg3[0x11ef] = not.d(ecx_19) & edx_8
                        arg3[0x11f0] = var_14_1 - var_10_2
                        *(arg2 + (ecx_16 << 1)) = (((not.d(ebx_4 s>> 0x1f)).w
                            & *((var_10_2 << 2) + &data_573160)) + (ecx_19.w & edx_8.w)) << ecx
                    else
                        if (ecx_15 u< 0xf)
                            int32_t edi_2 = 1 << ecx_15.b
                            arg3[0x11f8] = edi_2
                            
                            if (ecx_15 != 0)
                                int32_t var_18_2 = edi_2
                                
                                if (edx_5 s< ecx_15)
                                    sub_50f380(arg3)
                                    edx_5 = arg3[0x11f0]
                                    ebx_4 = arg3[0x11ef]
                                    var_18_2 = arg3[0x11f8]
                                
                                int32_t edi_3 = *((ecx_15 << 2) + &data_5731a0)
                                int32_t ebx_11 = rol.d(ebx_4, ecx_15.b)
                                arg3[0x11f0] = edx_5 - ecx_15
                                edi_2 = (edi_3 & ebx_11) + var_18_2
                                arg3[0x11ef] = not.d(edi_3) & ebx_11
                            
                            arg3[0x11f8] = edi_2 - 1
                            return 1
                        
                        i += 0x10
                else
                    int32_t ecx_4 = ecx_3 & 0xf
                    arg3[0x11f0] = edx - ecx_4
                    void* edi = i + (ecx_3 s>> 4 & 0xf)
                    uint32_t eax_7 = zx.d(*(edi + 0x573110))
                    i = edi + 1
                    arg3[0x11ef] = ebx_2 << ecx_4.b
                    *(arg2 + (eax_7 << 1)) = (ecx_3 s>> 8).w << ecx
                
                if (i s> arg3[0x11f5])
                    return 1
        
        arg3[0x11f0] = ebx_6 - 0x10
    
    return 0
}
