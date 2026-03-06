// 函数名称: sub_508560
// 虚拟地址: 0x508560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_508560(int32_t arg1, int32_t arg2, int32_t arg3, float arg4 @ xmm1, int32_t arg5, float arg6, int32_t* arg7, void* arg8)
{
    // 第一条实际指令: int32_t xmm0 = (zx.o(0)).d
    int32_t xmm0 = (zx.o(0)).d
    int32_t esi = arg5
    *arg7 = arg2
    arg7[1] = esi
    int32_t edi = 0
    int32_t var_18 = arg3
    int32_t var_8 = 0
    int32_t var_c = esi - arg2
    
    if (esi - arg2 s>= 0)
        float xmm1 = 1f / arg4
        int32_t esi_1 = arg2
        float var_14_1 = xmm1
        
        do
            (*((arg3 << 3) + &data_659a30))(arg6 - (_mm_cvtepi32_ps(zx.o(edi + esi_1)) + 0.5f), xmm1)
            float var_10_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
            unimplemented  {fstp dword [ebp-0xc], st0}
            int16_t top = top + 1
            *(arg8 + (edi << 2)) = var_10_1
            bool p_2
            
            if (edi == 0)
                var_10_1 f- 0
                int32_t eax_5
                eax_5:1.b = (var_10_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(var_10_1, 0f) ? 1 : 0) << 2
                    | (var_10_1 < 0f ? 1 : 0)
                p_2 = unimplemented  {test ah, 0x44}
            
            if (edi != 0 || p_2)
                xmm0 = var_10_1 f+ var_8
                var_8 = xmm0
            else
                esi_1 += 1
                var_c -= 1
                edi = 0xffffffff
                xmm0 = var_8
                *arg7 = esi_1
            
            xmm1 = var_14_1
            edi += 1
            arg3 = var_18
        while (edi s<= var_c)
        
        esi = arg5
        arg2 = esi_1
    
    float xmm1_7[0x4] = 1f f/ xmm0
    void* esi_2 = esi - arg2
    int32_t i = 0
    void* result = esi_2 + 1
    float xmm2_2[0x4] = _mm_shuffle_ps(xmm1_7, xmm1_7, 0)
    
    if (esi - arg2 s>= 0)
        if (result u>= 0x10)
            void* eax_7 = result & 0x8000000f
            
            if (eax_7 s< 0)
                eax_7 = ((eax_7 - 1) | 0xfffffff0) + 1
            
            result = arg8 + 0x20
            
            do
                float xmm0_5[0x4] = *(result - 0x20)
                result += 0x40
                i += 0x10
                *(result - 0x60) = _mm_mul_ps(xmm2_2, xmm0_5)
                *(result - 0x50) = _mm_mul_ps(*(result - 0x50), xmm2_2)
                *(result - 0x40) = _mm_mul_ps(xmm2_2, *(result - 0x40))
                *(result - 0x30) = _mm_mul_ps(*(result - 0x30), xmm2_2)
            while (i s<= esi_2 - eax_7)
        
        float xmm1_8[0x4] = _mm_shuffle_ps(xmm1_7, xmm1_7, 0)
        
        if (i s<= esi_2)
            result = esi_2 - i + 1
            
            if (result s>= 4)
                result = arg8 + 8 + (i << 2)
                int32_t i_2 = ((esi_2 - i - 3) u>> 2) + 1
                i += i_2 << 2
                int32_t i_1
                
                do
                    result += 0x10
                    *(result - 0x18) = _mm_mul_ps(*(result - 0x18), xmm1_8)
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            for (; i s<= esi_2; i += 1)
                *(arg8 + (i << 2)) = xmm1_8[0] f* *(arg8 + (i << 2))
    
    if (esi_2 s>= 0)
        void* temp2_1
        
        do
            float xmm0_15 = *(arg8 + (esi_2 << 2))
            xmm0_15 f- 0
            result:1.b = (xmm0_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_15, 0f) ? 1 : 0) << 2
                | (xmm0_15 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                break
            
            result = *arg7 - 1 + esi_2
            temp2_1 = esi_2
            esi_2 -= 1
            arg7[1] = result
        while (temp2_1 - 1 s>= 0)
    
    return result
}
