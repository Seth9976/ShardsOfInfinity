// 函数名称: sub_4c17e0
// 虚拟地址: 0x4c17e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t __convention("regparm")sub_4c17e0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_a0
    uint8_t result = sub_4c31d0(&var_a0, arg2, arg3, &var_a0)
    int32_t* var_58
    int32_t* ecx = var_58
    
    if (ecx != 0)
        void* esi_3 = arg2 * 0x60 + arg3[0x1a]
        int32_t* eax_3 = *(esi_3 + 0x50)
        
        if (eax_3 != 0)
            ecx = eax_3
        
        char var_60
        int32_t eax_5
        int32_t edx
        edx:eax_5 = mulu.dp.d(0x80808081, zx.d(var_60) * zx.d(arg3[0x18].b) + 0x80)
        char var_5f
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x61)) * zx.d(var_5f) + 0x80)
        char var_5e
        int32_t eax_11
        int32_t edx_2
        edx_2:eax_11 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x62)) * zx.d(var_5e) + 0x80)
        char var_5d
        int32_t eax_15
        int32_t edx_3
        edx_3:eax_15 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x63)) * zx.d(var_5d) + 0x80)
        int32_t eax_19
        int32_t edx_4
        edx_4:eax_19 = mulu.dp.d(0x80808081, zx.d((edx u>> 7).b) * zx.d(*(esi_3 + 0x58)) + 0x80)
        int32_t eax_22
        int32_t edx_6
        edx_6:eax_22 = mulu.dp.d(0x80808081, zx.d(*(esi_3 + 0x59)) * zx.d((edx_1 u>> 7).b) + 0x80)
        uint8_t var_a3_1 = (edx_6 u>> 7).b
        int32_t eax_25
        int32_t edx_8
        edx_8:eax_25 = mulu.dp.d(0x80808081, zx.d(*(esi_3 + 0x5a)) * zx.d((edx_2 u>> 7).b) + 0x80)
        uint8_t var_a2_1 = (edx_8 u>> 7).b
        uint32_t ecx_24 = zx.d(arg3[0x19].b)
        int32_t eax_26
        int32_t edx_13
        edx_13:eax_26 = mulu.dp.d(0x80808081, zx.d(*(esi_3 + 0x5b)) * zx.d((edx_3 u>> 7).b) + 0x80)
        uint8_t var_a1_1 = (edx_13 u>> 7).b
        int32_t eax_27 = (edx_4 u>> 7).b.d
        int32_t var_ac = eax_27
        char var_5c
        uint32_t edx_16 = zx.d(var_5c) + ecx_24
        char ebx_3 = -1
        
        if (edx_16 u< 0xff)
            ebx_3 = edx_16.b
        
        char var_5b
        uint32_t edx_18 = zx.d(*(arg3 + 0x65)) + zx.d(var_5b)
        char ebx_4 = -1
        
        if (edx_18 u< 0xff)
            ebx_4 = edx_18.b
        
        char var_5a
        uint32_t edx_20 = zx.d(*(arg3 + 0x66)) + zx.d(var_5a)
        char var_a3_2 = ebx_4
        char ebx_5 = -1
        
        if (edx_20 u< 0xff)
            ebx_5 = edx_20.b
        
        char var_59
        uint32_t edx_22 = zx.d(*(arg3 + 0x67)) + zx.d(var_59)
        char var_a2_2 = ebx_5
        char edx_23 = -1
        
        if (edx_22 u< 0xff)
            edx_23 = edx_22.b
        
        result = (eax_27 u>> 0x18).b
        char var_a1_2 = edx_23
        int32_t var_a8_2 = ebx_3.d
        
        if (result != 0)
            float xmm6_1 = *arg4
            float var_98
            float var_2c = var_98
            int32_t var_94
            int32_t var_28_1 = var_94
            int32_t var_88
            int32_t var_24_1 = var_88
            float xmm3_1 = var_a0
            int32_t var_84
            int32_t var_20_1 = var_84
            int32_t var_78
            int32_t var_1c_1 = var_78
            int32_t var_74
            int32_t var_18_1 = var_74
            int32_t* ecx_33 = data_cdf424
            float xmm5_1 = ecx_33[8]
            float xmm4_1 = ecx_33[9]
            int32_t var_68
            int32_t var_14_1 = var_68
            int32_t var_64
            int32_t var_10_1 = var_64
            float var_8c
            float xmm2_4 = var_8c f* arg4[5]
            float xmm0_14 = var_8c f* arg4[1]
            float var_70
            float var_6c
            float xmm6_5 = xmm6_1 * var_70 + var_6c f* arg4[1] f+ arg4[3] + xmm5_1
            float xmm7_4 = var_70 f* arg4[4] + var_6c f* arg4[5] f+ arg4[7]
            float var_9c
            float var_48_1 = xmm3_1 f* arg4[4] + var_9c f* arg4[5] f+ arg4[7] + xmm4_1
            float var_4c = *arg4 * xmm3_1 + var_9c f* arg4[1] f+ arg4[3] + xmm5_1
            float var_90
            float var_44_1 = *arg4 * var_90 + xmm0_14 f+ arg4[3] + xmm5_1
            float var_40_1 = var_90 f* arg4[4] + xmm2_4 f+ arg4[7] + xmm4_1
            float var_80
            float var_7c
            float var_3c_1 = *arg4 * var_80 + var_7c f* arg4[1] f+ arg4[3] + xmm5_1
            float var_38_1 = var_80 f* arg4[4] + var_7c f* arg4[5] f+ arg4[7] + xmm4_1
            int32_t var_cc_1 = arg3[0x21]
            float var_34_1 = xmm6_5
            float var_30_1 = xmm7_4 + xmm4_1
            result = sub_47c490(&var_ac, &var_2c, &var_4c, &var_ac, ecx_33, ecx)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
