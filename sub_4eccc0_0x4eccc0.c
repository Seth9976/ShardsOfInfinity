// 函数名称: sub_4eccc0
// 虚拟地址: 0x4eccc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4eccc0(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    int32_t* var_2c = ebx
    int32_t eax = sub_4dd620(*(arg4 + 0x30))
    int32_t edx = *(arg4 + 0x38)
    int32_t var_34 = edx
    void* eax_1 = arg3[1]
    void* var_3c = eax_1
    int32_t eax_2 = arg3[2]
    int32_t var_38 = eax_2
    int32_t var_30 = *(arg4 + 0x30)
    int32_t var_40 = ebx[1] * edx + *ebx * eax + *(arg4 + 0x3c)
    sub_4ddd60(arg3, &var_40)
    int32_t result_10 = *ebx
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(*(arg4 + 0x50))
    int32_t result_4 = (eax_7 - edx_2) s>> 1
    int32_t result_5 = result_4
    
    if (result_4 s>= result_10)
        result_5 = result_10
    
    int32_t* edi_1 = arg3
    int32_t result_9 = divs.dp.d(sx.q(*(arg4 + 0x38)), eax) - edi_1[1] - result_10
    int32_t result_7 = result_4
    
    if (result_7 s>= result_9)
        result_7 = result_9
    
    int32_t edx_6 = 0
    int32_t result_8 = result_7
    int32_t var_14 = 0
    int32_t eax_15
    
    if (result_5 s> 0)
        int32_t eax_13 = eax_2
        
        while (true)
            int32_t ecx_7 = 0
            int32_t var_1c_1 = 0
            
            if (eax_13 s> 0)
                while (true)
                    int32_t eax_14 = *ebx
                    int32_t edi_3 = ebx[1] + ecx_7
                    eax_15 = sub_4dd620(*(arg4 + 0x30))
                    
                    if (eax_15 == 4)
                        int32_t* eax_19 = *(arg4 + 0x38) * edi_3 + (eax_14 << 2) + *(arg4 + 0x3c)
                        eax_15 = sub_4dd620(*(arg4 + 0x30))
                        
                        if (eax_15 == 4)
                            *(*(arg4 + 0x38) * edi_3 + ((eax_14 - var_14) << 2) + *(arg4 + 0x3c) - 4) =
                                *eax_19
                            eax_13 = eax_2
                            ecx_7 = var_1c_1 + 1
                            var_1c_1 = ecx_7
                            
                            if (ecx_7 s< eax_13)
                                continue
                            
                            edx_6 = var_14
                            break
                    
                label_4ed005:
                    sub_44e4d0(eax_15, &data_5559b1, "atlasBytesPerPixel == 4", 
                        "c:\ax2017\engine\editor\atlasmaker.cpp", 0x1b5, "AtlasGetPixel")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            
            edx_6 += 1
            var_14 = edx_6
            
            if (edx_6 s>= result_5)
                break
        
        edi_1 = arg3
        result_7 = result_8
    
    int32_t edx_8 = 0
    int32_t var_14_1 = 0
    
    if (result_7 s> 0)
        int32_t eax_24 = eax_2
        
        while (true)
            int32_t ecx_15 = 0
            int32_t var_1c_2 = 0
            
            if (eax_24 s> 0)
                do
                    int32_t eax_26 = ebx[1] + ecx_15
                    int32_t edi_5 = edi_1[1] + *ebx
                    eax_15 = sub_4dd620(*(arg4 + 0x30))
                    
                    if (eax_15 != 4)
                        goto label_4ed005
                    
                    int32_t* eax_31 = *(arg4 + 0x3c) - 4 + *(arg4 + 0x38) * eax_26 + (edi_5 << 2)
                    eax_15 = sub_4dd620(*(arg4 + 0x30))
                    
                    if (eax_15 != 4)
                        goto label_4ed005
                    
                    edi_1 = arg3
                    *(*(arg4 + 0x38) * eax_26 + ((var_14_1 + edi_5) << 2) + *(arg4 + 0x3c)) = *eax_31
                    eax_24 = eax_2
                    ecx_15 = var_1c_2 + 1
                    var_1c_2 = ecx_15
                while (ecx_15 s< eax_24)
                
                edx_8 = var_14_1
            
            edx_8 += 1
            var_14_1 = edx_8
            
            if (edx_8 s>= result_8)
                break
            
            edi_1 = arg3
    
    int32_t result_11 = ebx[1]
    int32_t result_6 = result_4
    int32_t* edi_6 = arg3
    
    if (result_6 s>= result_11)
        result_6 = result_11
    
    void* edx_11 = eax_1
    int32_t result_3 = result_4
    int32_t result = divs.dp.d(sx.q(*(arg4 + 0x34)), *(arg4 + 0x38)) - result_11 - edi_6[2]
    
    if (result_3 s>= result)
        result_3 = result
    
    int32_t ecx_23 = 0
    int32_t var_14_2 = 0
    
    if (result_6 s> 0)
        do
            result = 0
            int32_t result_1 = 0
            
            if (edx_11 s> 0)
                do
                    int32_t edi_7 = ebx[1]
                    int32_t ecx_25 = *ebx + result
                    eax_15 = sub_4dd620(*(arg4 + 0x30))
                    
                    if (eax_15 != 4)
                        goto label_4ed005
                    
                    int32_t eax_41 = ecx_25 << 2
                    int32_t* ebx_4 = *(arg4 + 0x38) * edi_7 + eax_41 + *(arg4 + 0x3c)
                    eax_15 = sub_4dd620(*(arg4 + 0x30))
                    
                    if (eax_15 != 4)
                        goto label_4ed005
                    
                    ebx = var_2c
                    *((edi_7 - var_14_2 - 1) * *(arg4 + 0x38) + eax_41 + *(arg4 + 0x3c)) = *ebx_4
                    result = result_1 + 1
                    result_1 = result
                while (result s< eax_1)
                
                ecx_23 = var_14_2
                edx_11 = eax_1
            
            ecx_23 += 1
            var_14_2 = ecx_23
        while (ecx_23 s< result_6)
        
        edi_6 = arg3
    
    int32_t ecx_29 = 0
    int32_t var_14_3 = 0
    
    if (result_3 s> 0)
        while (true)
            result = 0
            int32_t result_2 = 0
            
            if (edx_11 s> 0)
                do
                    int32_t ecx_31 = *ebx + result
                    int32_t edi_13 = edi_6[2] + ebx[1]
                    eax_15 = sub_4dd620(*(arg4 + 0x30))
                    
                    if (eax_15 != 4)
                        goto label_4ed005
                    
                    int32_t eax_45 = ecx_31 << 2
                    int32_t* edi_17 = (edi_13 - 1) * *(arg4 + 0x38) + eax_45 + *(arg4 + 0x3c)
                    eax_15 = sub_4dd620(*(arg4 + 0x30))
                    
                    if (eax_15 != 4)
                        goto label_4ed005
                    
                    edi_6 = arg3
                    *((edi_13 + var_14_3) * *(arg4 + 0x38) + eax_45 + *(arg4 + 0x3c)) = *edi_17
                    result = result_2 + 1
                    result_2 = result
                while (result s< eax_1)
                
                ecx_29 = var_14_3
                edx_11 = eax_1
            
            ecx_29 += 1
            var_14_3 = ecx_29
            
            if (ecx_29 s>= result_3)
                break
            
            edi_6 = arg3
    
    return result
}
