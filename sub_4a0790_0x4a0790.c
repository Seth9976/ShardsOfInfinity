// 函数名称: sub_4a0790
// 虚拟地址: 0x4a0790
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4a0790(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t var_8 = arg2
    int32_t i = 0
    int32_t* var_10 = arg1
    
    if (arg1[1] s> 0)
        int32_t eax_1 = 0
        int32_t var_c_1 = 0
        
        do
            void* ebx_2 = *arg1 + eax_1
            float xmm0_1 = *(ebx_2 + 0x40)
            xmm0_1 f- 0
            eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            bool p_4
            
            if (not(p_2))
                float xmm0_2 = *(ebx_2 + 0x44)
                xmm0_2 f- 0
                eax_1:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                    | (xmm0_2 < 0f ? 1 : 0)
                p_4 = unimplemented  {test ah, 0x44}
            
            if (p_2 || p_4)
                eax_1 = result * 2
                result += 1
                *(arg2 + (eax_1 << 3)) = 2
                *(arg2 + (eax_1 << 3) + 4) = i
                *(arg2 + (eax_1 << 3) + 0xc) = 4
            
            float xmm0_3 = *(ebx_2 + 0x34)
            xmm0_3 f- 0
            eax_1:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                | (xmm0_3 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                int32_t eax_4 = result * 2
                result += 1
                *(arg2 + (eax_4 << 3)) = 2
                *(arg2 + (eax_4 << 3) + 4) = i
                *(arg2 + (eax_4 << 3) + 0xc) = 5
            
            int32_t j = 0
            
            if (*(ebx_2 + 0x1c) s> 0)
                int32_t* ecx_2 = (result << 4) + var_8
                
                do
                    int32_t* eax_5 = ecx_2
                    result += 1
                    ecx_2 = &ecx_2[4]
                    eax_5[2] = j
                    j += 1
                    *eax_5 = 1
                    eax_5[1] = i
                while (j s< *(ebx_2 + 0x1c))
            
            arg2 = var_8
            int32_t ecx_4 = result * 2
            eax_1 = var_c_1 + 0x48
            result += 1
            var_c_1 = eax_1
            *(arg2 + (ecx_4 << 3) + 4) = i
            i += 1
            *(arg2 + (ecx_4 << 3)) = 0
            arg1 = var_10
        while (i s< arg1[1])
    
    return result
}
