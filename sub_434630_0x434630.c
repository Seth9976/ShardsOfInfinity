// 函数名称: sub_434630
// 虚拟地址: 0x434630
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_434630(int32_t arg1, int32_t arg2, void* arg3, float arg4)
{
    // 第一条实际指令: int32_t ebx = *(arg3 + 0x530)
    int32_t ebx = *(arg3 + 0x530)
    int32_t var_14 = ebx
    void var_88
    int128_t* eax_1 = sub_433310(&var_88, arg2, arg3, &var_88)
    int128_t* result = arg4
    int128_t xmm1 = eax_1[1]
    int128_t xmm2 = eax_1[2]
    int128_t xmm3 = eax_1[3]
    int128_t xmm4 = eax_1[4]
    int32_t eax_2 = eax_1[5].d
    *result = *eax_1
    result[1] = xmm1
    result[2] = xmm2
    result[3] = xmm3
    result[4] = xmm4
    result[5].d = eax_2
    float xmm0_1 = *(arg3 + 0x558)
    
    if (ebx != 0)
        float xmm1_1 = *(arg3 + 0x554)
        arg4 = xmm1_1
        
        if (*(arg3 + 0x564) != data_5bcaec)
            arg4 = xmm1_1
        else if (*(arg3 + 0x4f0) != 0)
            float xmm3_2 = *(arg3 + 0x4fc) - 0f
            
            if (not(0 f>= xmm3_2))
                if (xmm3_2 < 1f)
                    arg4 = sub_4145f0(1, xmm3_2, xmm1_1, (zx.o(0)).d)
                else
                    arg4 = 0f
        else
            arg4 = 0f
        
        int32_t eax_4 = sub_433eb0(arg3)
        char const* const var_a4_1
        int32_t var_a0_1
        char const* const var_9c_1
        char* ecx_3
        
        if (eax_4 u> 4)
            var_9c_1 = "CurrentTransformWithMouseover"
            var_a0_1 = 0x727
            var_a4_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx_3 = "Halt"
        label_434a7e:
            sub_44e4d0(eax_4, &data_5559b1, ecx_3, var_a4_1, var_a0_1, var_9c_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        float* var_a0_3
        float var_9c_2
        void var_30
        float var_28
        float var_24_1
        float var_18
        float* edx_2
        float xmm2_2[0x4]
        float xmm3_4
        
        switch (eax_4)
            case 1
                int32_t ecx_1
                
                if (data_5bb1e4.d != 0x1e)
                    ecx_1 = 0
                    
                    if (data_5bb1f0.d == 0x1e)
                        ecx_1 = data_5bb1f0:4
                else
                    ecx_1 = data_5bb1e4:4
                
                eax_4 = sub_47a160(ecx_1, "tbl_player_hand")
                int32_t ecx_2 = eax_4
                
                if (ecx_2 == 0)
                label_43474d:
                    var_9c_1 = "DataArray<struct UI2>::DataArrayGet"
                    var_a0_1 = 0x6c
                    var_a4_1 = "c:\ax2017\engine\dataarray.h"
                    ecx_3 = "id != DATAID_NULL"
                    goto label_434a7e
                
                uint32_t edx = zx.d(ecx_2.w)
                
                if (edx u>= data_5c99a4)
                label_43489f:
                    var_9c_1 = "DataArray<struct UI2>::DataArrayGet"
                    var_a0_1 = 0x6d
                    var_a4_1 = "c:\ax2017\engine\dataarray.h"
                    ecx_3 = "DataArrayTryToGet(id) != NULL"
                    goto label_434a7e
                
                int32_t edi_1 = data_5c99a0
                eax_4 = edx * 0x1008
                
                if (*(eax_4 + edi_1 + 0x1004) != ecx_2)
                    goto label_43489f
                
                float xmm0_4[0x4] = *(edx * 0x1008 + edi_1 + 0x6cc)
                float xmm5_3 =
                    _mm_shuffle_ps(xmm0_4, xmm0_4, 0xff) - _mm_shuffle_ps(xmm0_4, xmm0_4, 0x55)
                float xmm6_2 = xmm5_3 * 0f
                float xmm5_4
                float xmm6_3
                
                if (sub_4153c0() s<= 0)
                    xmm6_3 = xmm6_2 * -0.400000006f
                    xmm5_4 = xmm5_3 * -0.400000006f
                else
                    xmm6_3 = xmm6_2 * -1f
                    xmm5_4 = xmm5_3 * -1f
                
                var_24_1 = xmm5_4
                var_28 = xmm6_3
                goto label_4347f0
            case 2
                float eax_18
                int32_t edx_4
                eax_18, edx_4 = sub_434070(arg3)
                var_28 = eax_18
                int32_t var_24_3 = edx_4
                edx_2 = &var_18
                void var_20
                float xmm2_9[0x4] = *sub_47a430(&var_20, 0)
                float xmm0_14 = _mm_shuffle_ps(xmm2_9, xmm2_9, 0xaa)
                float xmm3_10 = xmm2_9[0]
                var_9c_2 = xmm0_1
                var_a0_3 = &var_28
                float xmm1_13 =
                    (_mm_shuffle_ps(xmm2_9, xmm2_9, 0x55) + _mm_shuffle_ps(xmm2_9, xmm2_9, 0xff)) * 0.5f
                var_18 = (xmm3_10 + xmm0_14) * 0.5f
                float var_14_2 = xmm1_13
            label_434862:
                int128_t* eax_11 = sub_433cc0(&var_88, edx_2, result, arg4, &var_88, var_a0_3, var_9c_2)
                int128_t xmm1_6 = eax_11[1]
                int128_t xmm2_4 = eax_11[2]
                int128_t xmm3_7 = eax_11[3]
                int128_t xmm4_1 = eax_11[4]
                int32_t eax_12 = eax_11[5].d
                *result = *eax_11
                result[1] = xmm1_6
                result[2] = xmm2_4
                result[3] = xmm3_7
                result[4] = xmm4_1
                result[5].d = eax_12
            case 3
                int32_t eax_14 = *(arg3 + 0x10)
                int32_t eax_15
                
                if (eax_14 == 0 || eax_14 == 5)
                    eax_15 = sub_4153c0()
                
                if ((eax_14 != 0 && eax_14 != 5) || eax_15 == 2)
                    var_28 = 0f
                    var_24_1 = 0f
                label_4347f0:
                    var_18 = var_28
                    float var_14_1 = var_24_1
                    xmm2_2 = *sub_47a430(&var_30, 0)
                    xmm3_4 = xmm2_2[0] + _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
                    var_9c_2 = xmm0_1
                    var_a0_3 = &var_18
                    goto label_434830
                
                int32_t ecx_6
                
                if (data_5bb1e4.d != 0x1e)
                    ecx_6 = 0
                    
                    if (data_5bb1f0.d == 0x1e)
                        ecx_6 = data_5bb1f0:4
                else
                    ecx_6 = data_5bb1e4:4
                
                eax_4 = sub_4628c0(sub_47a160(ecx_6, "tbl_center"), 0)
                int32_t ecx_8 = eax_4
                
                if (ecx_8 == 0)
                    goto label_43474d
                
                uint32_t edx_3 = zx.d(ecx_8.w)
                
                if (edx_3 u>= data_5c99a4)
                    goto label_43489f
                
                int32_t ebx_1 = data_5c99a0
                eax_4 = edx_3 * 0x1008
                
                if (*(eax_4 + ebx_1 + 0x1004) != ecx_8)
                    goto label_43489f
                
                bool cond:1_1 = *(arg3 + 0x10) != 5
                float xmm0_10[0x4] = *(edx_3 * 0x1008 + ebx_1 + 0x6cc)
                float xmm2_7 = _mm_shuffle_ps(xmm0_10, xmm0_10, 0xaa) f- xmm0_10
                float xmm3_8
                
                xmm3_8 = cond:1_1 ? 1f : -1f
                
                var_28 = xmm3_8 * xmm2_7 * 0.104999997f
                var_24_1 = xmm3_8 * xmm2_7 * 0f * 0.104999997f
                goto label_4347f0
            case 4
                xmm2_2 = *sub_47a430(&var_30, 0)
                xmm3_4 = xmm2_2[0] + _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
                var_9c_2 = xmm0_1
                var_a0_3 = &data_571d90
            label_434830:
                edx_2 = &var_28
                float xmm1_4 =
                    _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55) + _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
                var_28 = xmm3_4 * 0.5f
                float var_24_2 = xmm1_4 * 0.5f
                goto label_434862
    
    return result
}
