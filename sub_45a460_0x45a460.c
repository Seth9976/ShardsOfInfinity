// 函数名称: sub_45a460
// 虚拟地址: 0x45a460
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_45a460(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg2 * 0x180
    int32_t result = arg2 * 0x180
    int32_t ecx_1 = arg1 * 0x180
    int32_t edx = *(ecx_1 + 0x65b4d4)
    int32_t temp0 = *(result + 0x65b4d4)
    
    if (edx s>= temp0)
        if (edx s> temp0)
            result.b = 0
            return result
        
        int32_t edx_1 = *(ecx_1 + 0x65b4d8)
        
        if (edx_1 != 2 || *(result + 0x65b4d8) == edx_1)
            if (*(result + 0x65b4d8) == 2)
                if (edx_1 == 2)
                    goto label_45a4b5
                
                result.b = 0
                return result
            
            if (edx_1 == 2)
            label_45a4b5:
                int32_t edx_2 = *(ecx_1 + 0x65b4e4)
                int32_t temp1_1 = *(result + 0x65b4e4)
                
                if (edx_2 u>= temp1_1)
                    if (edx_2 u> temp1_1)
                        result.b = 0
                        return result
                    
                    int32_t xmm1_1 = *(ecx_1 + 0x65b4dc)
                    int32_t xmm0_1 = *(result + 0x65b4dc)
                    
                    if (not(xmm0_1 f> xmm1_1))
                        if (not(xmm1_1 f> xmm0_1))
                            goto label_45a4df
                        
                        result.b = 0
                        return result
            else
                int32_t xmm0_2
                int32_t xmm1_2
                
                if (edx_1 != 5)
                    xmm1_2 = *(ecx_1 + 0x65b4dc)
                    xmm0_2 = *(result + 0x65b4dc)
                    
                    if (edx_1 == 3)
                        goto label_45a51d
                    
                    if (xmm0_2 f> xmm1_2)
                        result.b = 0
                        return result
                    
                    if (not(xmm1_2 f> xmm0_2))
                        int32_t ecx_3 = *(ecx_1 + 0x65b4e0)
                        result = *(result + 0x65b4e0)
                        
                        if (ecx_3 s> result)
                            result.b = 0
                            return result
                        
                        if (ecx_3 s>= result)
                            result.b = arg1 s< arg2
                            return result
                else
                    int32_t edx_3 = *(ecx_1 + 0x65b3d4)
                    int32_t temp2_1 = *(result + 0x65b3d4)
                    
                    if (edx_3 u>= temp2_1)
                        if (edx_3 u> temp2_1)
                            result.b = 0
                            return result
                        
                        xmm1_2 = *(ecx_1 + 0x65b4dc)
                        xmm0_2 = *(result + 0x65b4dc)
                    label_45a51d:
                        
                        if (xmm0_2 f> xmm1_2)
                            result.b = 0
                            return result
                        
                        if (not(xmm1_2 f> xmm0_2))
                        label_45a4df:
                            int32_t ecx_2 = *(ecx_1 + 0x65b4e0)
                            result = *(result + 0x65b4e0)
                            
                            if (ecx_2 s> result)
                                result.b = 0
                                return result
                            
                            if (ecx_2 s>= result)
                                result.b = arg1 s< arg2
                                return result
    
    result.b = 1
    return result
}
