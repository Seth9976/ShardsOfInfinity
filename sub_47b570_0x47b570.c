// 函数名称: sub_47b570
// 虚拟地址: 0x47b570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_47b570(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    void* result
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_5c99a4)
            int32_t esi_1 = data_5c99a0
            result = edx_1 * 0x1008 + esi_1
            
            if (*(result + 0x1004) == arg1)
                void* ecx_1 = edx_1 * 0x1008
                int32_t edx_2 = *(ecx_1 + esi_1 + 0x640) * 0x208
                void* ecx_2 = ecx_1 + esi_1
                int32_t esi_2 = *(ecx_2 + 0x63c) * 0x208
                float xmm0 = *(esi_2 + ecx_2 + 0x14)
                float temp0 = *(edx_2 + ecx_2 + 0x14)
                xmm0 - temp0
                result:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
                    | (xmm0 < temp0 ? 1 : 0)
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (not(p_1))
                    float xmm0_1 = *(esi_2 + ecx_2 + 0x18)
                    float temp1_1 = *(edx_2 + ecx_2 + 0x18)
                    xmm0_1 - temp1_1
                    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2 | (xmm0_1 < temp1_1 ? 1 : 0)
                    bool p_3 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_3))
                        float xmm0_2 = *(esi_2 + ecx_2 + 0x1c)
                        float temp2_1 = *(edx_2 + ecx_2 + 0x1c)
                        xmm0_2 - temp2_1
                        result:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
                            | (xmm0_2 < temp2_1 ? 1 : 0)
                        bool p_5 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_5))
                            float xmm0_3 = *(esi_2 + ecx_2 + 0x20)
                            float temp3_1 = *(edx_2 + ecx_2 + 0x20)
                            xmm0_3 - temp3_1
                            result:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
                                | (xmm0_3 < temp3_1 ? 1 : 0)
                            bool p_7 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_7))
                                float xmm0_4 = *(esi_2 + ecx_2 + 0x24)
                                float temp4_1 = *(edx_2 + ecx_2 + 0x24)
                                xmm0_4 - temp4_1
                                result:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2
                                    | (xmm0_4 < temp4_1 ? 1 : 0)
                                bool p_9 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_9))
                                    result.b = 0
                                    return result
                
                result.b = 1
                return result
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
