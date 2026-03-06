// 函数名称: sub_414540
// 虚拟地址: 0x414540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_414540(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: float xmm0_3 = *arg1
    float xmm0_3 = *arg1
    float temp0 = *arg2
    xmm0_3 - temp0
    int32_t result
    result:1.b = (xmm0_3 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp0) ? 1 : 0) << 2
        | (xmm0_3 < temp0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        float xmm0 = arg1[1]
        float temp1_1 = arg2[1]
        xmm0 - temp1_1
        result:1.b = (xmm0 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp1_1) ? 1 : 0) << 2
            | (xmm0 < temp1_1 ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (not(p_3))
            float xmm0_1 = arg1[2]
            float temp2_1 = arg2[2]
            xmm0_1 - temp2_1
            result:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_1, temp2_1) ? 1 : 0) << 2 | (xmm0_1 < temp2_1 ? 1 : 0)
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (not(p_5))
                float xmm0_2 = arg1[3]
                float temp3_1 = arg2[3]
                xmm0_2 - temp3_1
                result:1.b = (xmm0_2 == temp3_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_2, temp3_1) ? 1 : 0) << 2 | (xmm0_2 < temp3_1 ? 1 : 0)
                bool p_7 = unimplemented  {test ah, 0x44}
                
                if (not(p_7))
                    result.b = 1
                    return result
    
    result.b = 0
    return result
}
