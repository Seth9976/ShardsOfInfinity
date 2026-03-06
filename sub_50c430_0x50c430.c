// 函数名称: sub_50c430
// 虚拟地址: 0x50c430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50c430(int32_t arg1, int32_t arg2, int32_t* arg3, long double arg4 @ st0, long double arg5 @ st3, long double arg6 @ st7, int32_t arg7, uint32_t (* arg8)[0x4], void* arg9)
{
    // 第一条实际指令: long double x87_r1
    long double x87_r1
    long double x87_r2
    int32_t eax = sub_50c100(arg3, arg4, x87_r1, x87_r2)
    int32_t ecx = arg3[0x10]
    int32_t edi_1 = arg3[1] * ecx
    int32_t ebx_1 = arg3[5] * ecx
    
    if (ecx u> 0x40 || arg3[0x14] u>= 6 || arg3[0x15] u>= 6 || ecx s<= 0xffffffff || arg8 == 0
            || arg9 u< eax)
        return 0
    
    _memset(arg8, 0, arg9)
    float xmm1 = arg3[0xe]
    int32_t ecx_2 = arg3[0x14]
    *arg3 = arg2
    arg3[3] = edi_1
    arg3[4] = arg7
    arg3[7] = ebx_1
    arg3[0x11] = 0xffffffff
    arg3[0x12] = 3
    arg3[0x13] = 0
    arg3[0x16] = 1
    arg3[0x17] = 1
    arg3[0x18] = 0
    int32_t eax_4 = sub_5082d0(ecx_2, xmm1, arg5)
    float xmm1_1 = arg3[0xf]
    int32_t ecx_3 = arg3[0x15]
    arg3[0x20] = eax_4
    long double x87_r4
    int32_t eax_5 = sub_5082d0(ecx_3, xmm1_1, x87_r4)
    float xmm1_2 = arg3[0xe]
    int32_t ecx_4 = arg3[0x14]
    arg3[0x21] = eax_5
    long double x87_r5
    int32_t eax_6 = sub_508250(ecx_4, xmm1_2, x87_r5)
    float xmm1_3 = arg3[0xf]
    int32_t ecx_5 = arg3[0x15]
    arg3[0x22] = eax_6
    int32_t eax_7
    int32_t ecx_6
    long double x87_r6
    eax_7, ecx_6 = sub_508250(ecx_5, xmm1_3, x87_r6)
    float xmm1_4 = arg3[0xe]
    arg3[0x23] = eax_7
    int32_t var_2c_1 = ecx_6
    int32_t var_8 = (&data_659a34)[arg3[0x14] * 2]
    int32_t eax_10
    eax_10.b = xmm1_4 > 1f
    long double x87_r7
    
    if (eax_10 == 0)
        var_8(xmm1_4)
        x87_r7 = arg6 * fconvert.t(2f) / fconvert.t(xmm1_4)
    else
        var_8(1f / xmm1_4)
        x87_r7 = arg6 * fconvert.t(2f)
    
    var_8 = fconvert.s(x87_r7)
    int32_t ecx_7
    float xmm0_3
    ecx_7, xmm0_3 = sub_4297a0(var_8)
    float xmm1_5 = arg3[0xf]
    int32_t var_2c_4 = ecx_7
    int32_t eax_12
    int32_t edx_1
    edx_1:eax_12 = sx.q(int.d(xmm0_3))
    arg3[0x24] = (eax_12 - edx_1) s>> 1
    var_8 = (&data_659a34)[arg3[0x15] * 2]
    int32_t eax_17
    eax_17.b = xmm1_5 > 1f
    long double x87_r0
    
    if (eax_17 == 0)
        var_8(xmm1_5)
        x87_r0 = arg4 * fconvert.t(2f) / fconvert.t(xmm1_5)
    else
        var_8(1f / xmm1_5)
        x87_r0 = arg4 * fconvert.t(2f)
    
    var_8 = fconvert.s(x87_r0)
    float xmm0_6 = sub_4297a0(var_8)
    int32_t ecx_8 = arg3[0x24]
    int32_t xmm0_7 = arg3[0xf]
    int32_t eax_19
    int32_t edx_2
    edx_2:eax_19 = sx.q(int.d(xmm0_6))
    arg3[0x25] = (eax_19 - edx_2) s>> 1
    arg3[0x28] = (arg3[5] * arg3[0x10]) << 2
    int32_t eax_26 = arg3[1] + (ecx_8 << 1)
    arg3[0x19] = arg8
    void* ecx_10 = arg8 + arg3[0x2f]
    arg3[0x1a] = ecx_10
    void* ecx_11 = ecx_10 + arg3[0x30]
    arg3[0x1d] = eax_26
    void* eax_27 = arg3[0x32]
    arg3[0x1b] = ecx_11
    void* ecx_12 = ecx_11 + arg3[0x31]
    void* eax_28 = eax_27 + ecx_12
    arg3[0x1c] = ecx_12
    void* ecx_14 = arg3[0x33] + eax_28
    arg3[0x1e] = eax_28
    int32_t eax_29
    eax_29.b = xmm0_7 f> 1f
    void* eax_31
    void* edx_3
    
    if (eax_29 == 0)
        eax_31 = nullptr
        edx_3 = arg3[0x34] + ecx_14
    else
        edx_3 = ecx_14
        eax_31 = arg3[0x35] + ecx_14
        ecx_14 = nullptr
    
    arg3[0x1f] = ecx_14
    arg3[0x2d] = edx_3
    arg3[0x2e] = eax_31
    void* var_2c_7 = arg3[5]
    float xmm0_8 = arg3[0xc]
    int32_t* var_30 = arg3[1]
    float xmm3 = arg3[0xe]
    int32_t edx_5 = arg3[0x1a]
    void* var_34_1 = ecx_14
    int32_t* ecx_15 = arg3[0x19]
    int32_t var_38 = arg3[0x14]
    arg3[0x2c] = 0xffffffff
    int32_t eax_32
    int32_t ecx_16
    eax_32, ecx_16 = sub_508ca0(eax_31, edx_5, ecx_15, xmm3, x87_r1, var_38, xmm0_8, var_30, var_2c_7)
    int32_t var_34_3 = ecx_16
    int32_t ecx_18 = sub_508ca0(eax_32, arg3[0x1c], arg3[0x1b], arg3[0xf], x87_r2, arg3[0x15], 
        arg3[0xd], arg3[2], arg3[6])
    float xmm1_6 = arg3[0xf]
    int32_t eax_33
    eax_33.b = xmm1_6 > 1f
    
    if (eax_33 == 0)
        sub_50bf40(arg3, arg5)
    else
        int32_t var_2c_9 = ecx_18
        (&data_659a34)[arg3[0x15] * 2](1f / xmm1_6)
        int32_t i = 0
        int32_t i_1 = 0
        float var_18_1 = fconvert.s(arg5 * fconvert.t(xmm1_6))
        
        if (arg3[6] s> 0)
            do
                float xmm3_2 = arg3[0xd]
                var_8 = 0
                int32_t j_1 = 0
                float var_1c
                sub_5083c0(&j_1, &var_8, i, var_18_1, xmm1_6, xmm3_2, &j_1, &var_1c)
                int32_t edx_8 = arg3[0x2c]
                int32_t edi_2 = var_8
                
                if (edx_8 s< 0)
                label_50c7bb:
                    sub_50a560(arg3, edi_2)
                else
                    int32_t ecx_20 = arg3[0x2a]
                    
                    if (edi_2 s> ecx_20)
                        int32_t ebx_2 = arg3[0x2b]
                        
                        do
                            if (ecx_20 == ebx_2)
                                arg3[0x2c] = 0xffffffff
                                arg3[0x2a] = 0
                                arg3[0x2b] = 0
                                goto label_50c7bb_1
                            
                            ecx_20 += 1
                            int32_t eax_38 = arg3[0x2c] + 1
                            arg3[0x2a] = ecx_20
                            arg3[0x29]
                            edx_8 = mods.dp.d(sx.q(eax_38), arg3[0x29])
                            arg3[0x2c] = edx_8
                        while (edi_2 s> ecx_20)
                    
                    if (edx_8 s< 0)
                    label_50c7bb_1:
                        sub_50a560(arg3, edi_2)
                
                int32_t j = j_1
                
                while (j s> arg3[0x2b])
                    sub_50a560(arg3, arg3[0x2b] + 1)
                
                sub_50b4f0(arg3, i_1)
                i = i_1 + 1
                i_1 = i
            while (i s< arg3[6])
    
    return 1
}
