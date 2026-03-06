// 函数名称: sub_461a90
// 虚拟地址: 0x461a90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_461a90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result = arg2[1]
    int32_t result = arg2[1]
    
    if (result == *(arg1 + 4))
        if (result != 1)
            result.b = 0
            return result
        
        if (*arg2 == 7)
            float xmm0_1 = arg2[0xb]
            float temp1_1 = *(arg1 + 0x2c)
            xmm0_1 - temp1_1
            result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2 | (xmm0_1 < temp1_1 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                float xmm0_2 = arg2[8]
                float temp2_1 = *(arg1 + 0x20)
                xmm0_2 - temp2_1
                result:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2 | (xmm0_2 < temp2_1 ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4))
                    float xmm0_3 = arg2[9]
                    float temp3_1 = *(arg1 + 0x24)
                    xmm0_3 - temp3_1
                    result:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2 | (xmm0_3 < temp3_1 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_6))
                        float xmm0_4 = arg2[0xa]
                        float temp4_1 = *(arg1 + 0x28)
                        xmm0_4 - temp4_1
                        result:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2
                            | (xmm0_4 < temp4_1 ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_8) && sub_47bf40(&arg2[0xc], arg1 + 0x30).b != 0)
                            result.b = 0
                            return result
    
    result.b = 1
    return result
}
