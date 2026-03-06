// 函数名称: sub_47b4f0
// 虚拟地址: 0x47b4f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47b4f0(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x640) * 0x208
    int32_t edx = *(arg1 + 0x640) * 0x208
    int32_t esi = *(arg1 + 0x63c) * 0x208
    float xmm0 = *(esi + arg1 + 0x14)
    float temp0 = *(edx + arg1 + 0x14)
    xmm0 - temp0
    int32_t result
    result:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
        | (xmm0 < temp0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        float xmm0_1 = *(esi + arg1 + 0x18)
        float temp1_1 = *(edx + arg1 + 0x18)
        xmm0_1 - temp1_1
        result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
            | (xmm0_1 < temp1_1 ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (not(p_3))
            float xmm0_2 = *(esi + arg1 + 0x1c)
            float temp2_1 = *(edx + arg1 + 0x1c)
            xmm0_2 - temp2_1
            result:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2 | (xmm0_2 < temp2_1 ? 1 : 0)
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (not(p_5))
                float xmm0_3 = *(esi + arg1 + 0x20)
                float temp3_1 = *(edx + arg1 + 0x20)
                xmm0_3 - temp3_1
                result:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2 | (xmm0_3 < temp3_1 ? 1 : 0)
                bool p_7 = unimplemented  {test ah, 0x44}
                
                if (not(p_7))
                    float xmm0_4 = *(esi + arg1 + 0x24)
                    float temp4_1 = *(edx + arg1 + 0x24)
                    xmm0_4 - temp4_1
                    result:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2 | (xmm0_4 < temp4_1 ? 1 : 0)
                    bool p_9 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_9))
                        result.b = 0
                        return result
    
    result.b = 1
    return result
}
