// 函数名称: sub_4418e0
// 虚拟地址: 0x4418e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4418e0(void* arg1)
{
    // 第一条实际指令: void var_8
    void var_8
    
    if (data_5bcaec == 0 && *(data_5c2e98 + 0x618) == 0xffffffff
            && sub_4134c0(data_5c2e9c, &var_8) == 0)
        void* eax_3 = *(arg1 + 4)
        
        if (eax_3 == 3)
            return 0x10
        
        if (eax_3 == 1)
            int32_t ecx_1 = *(arg1 + 8)
            char const* const var_78
            int32_t var_74
            char const* const var_70
            char* ecx_2
            
            if (ecx_1 == 0)
                var_70 = "DataArray<struct ShGfx>::DataArrayGet"
                var_74 = 0x6c
                ecx_2 = "id != DATAID_NULL"
            label_441b4f:
                var_78 = "c:\ax2017\engine\dataarray.h"
            label_441b59:
                sub_44e4d0(eax_3, &data_5559b1, ecx_2, var_78, var_74, var_70)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t edx_2 = zx.d(ecx_1.w)
            int32_t esi_1
            
            if (edx_2 u< data_5bcd80)
                esi_1 = data_5bcd7c
                eax_3 = edx_2 * 0x568
            
            if (edx_2 u>= data_5bcd80 || *(eax_3 + esi_1 + 0x564) != ecx_1)
                var_70 = "DataArray<struct ShGfx>::DataArrayGet"
                var_74 = 0x6d
                ecx_2 = "DataArrayTryToGet(id) != NULL"
                goto label_441b4f
            
            int32_t* edi_2 = edx_2 * 0x568 + esi_1
            
            if (*edi_2 == 0)
                int32_t result_2 = 4
                
                if (sub_4383c0(edi_2[1], nullptr) != 0 && sub_438240(edi_2, 0) != 0)
                    result_2 = 0xe
                
                int32_t result_1 = result_2 | 0x10
                
                if (edi_2[3] != 9)
                    result_1 = result_2
                
                int32_t eax_7 = sub_429030()
                uint32_t eax_8
                int32_t edx_4
                eax_8, edx_4 = sub_41b780(0xe48644, eax_7, "tbl_player_hand")
                int128_t var_4c
                int96_t xmm0_1 = (*sub_4790a0(eax_8, edx_4, eax_8, &var_4c)).12
                uint32_t eax_10
                int32_t edx_5
                eax_10, edx_5 = sub_41b780(0xe48668, eax_7, "tbl_opponent_construct_zoom")
                var_4c = *sub_4790a0(eax_10, edx_5, eax_10, &var_4c)
                uint32_t eax_12
                int32_t edx_6
                eax_12, edx_6 = sub_41b780(0xe4868c, eax_7, "tbl_global_play")
                int128_t var_3c
                int96_t xmm0_3 = (*sub_4790a0(eax_12, edx_6, eax_12, &var_3c)).12
                uint32_t eax_14
                int32_t edx_7
                eax_14, edx_7 = sub_41b780(0xe486b0, eax_7, "tbl_player_constructs")
                void var_5c
                int128_t* eax_15 = sub_4790a0(eax_14, edx_7, eax_14, &var_5c)
                int32_t edx_8 = edi_2[3]
                int32_t result = result_1
                var_3c = *eax_15
                
                if (edx_8 == 7)
                    float xmm0_5 = xmm0_1.d
                    xmm0_5 f- 0
                    eax_15:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
                        | (xmm0_5 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    bool p_4
                    
                    if (not(p_2))
                        float xmm0_6 = xmm0_1:8.d
                        xmm0_6 f- 0
                        eax_15:1.b = (xmm0_6 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2 | (xmm0_6 < 0f ? 1 : 0)
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_2 || p_4)
                        result = result_1 | 0x10
                else if (edx_8 == 6)
                    float xmm0_7 = xmm0_3.d
                    xmm0_7 f- 0
                    eax_15:1.b = (xmm0_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2
                        | (xmm0_7 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        result |= 0x10
                    else
                        float xmm0_8 = xmm0_3:8.d
                        xmm0_8 f- 0
                        eax_15:1.b = (xmm0_8 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2 | (xmm0_8 < 0f ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (p_8)
                            result |= 0x10
                
                eax_3 = data_65aabc
                
                if (eax_3 == 0)
                    var_70 = "GetClient"
                    var_74 = 0x74
                    var_78 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                    ecx_2 = "gClient"
                    goto label_441b59
                
                int32_t esi_3 = edi_2[2]
                float xmm0_10
                
                if (esi_3 != *(eax_3 + 0x648))
                    if (data_5bcb00 == esi_3 && edx_8 == 0xa)
                        float xmm0_11 = var_4c.d
                        xmm0_11 f- 0
                        eax_3:1.b = (xmm0_11 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2 | (xmm0_11 < 0f ? 1 : 0)
                        bool p_12 = unimplemented  {test ah, 0x44}
                        
                        if (p_12)
                            return result | 0x10
                        
                        xmm0_10 = var_4c:8.d
                    label_441b19:
                        xmm0_10 f- 0
                        eax_3:1.b = (xmm0_10 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2 | (xmm0_10 < 0f ? 1 : 0)
                        bool p_14 = unimplemented  {test ah, 0x44}
                        
                        if (p_14)
                            return result | 0x10
                else if (data_5bccbc != 0 && edx_8 == 0xa)
                    float xmm0_9 = var_3c.d
                    xmm0_9 f- 0
                    eax_3:1.b = (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2
                        | (xmm0_9 < 0f ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (p_10)
                        return result | 0x10
                    
                    xmm0_10 = var_3c:8.d
                    goto label_441b19
                return result
        
        return 0
    
    return 0x40
}
