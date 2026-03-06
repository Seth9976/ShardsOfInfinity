// 函数名称: sub_426680
// 虚拟地址: 0x426680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_426680(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = data_dfc4e8
    int32_t eax = data_dfc4e8
    int32_t ecx_12
    
    if (eax != 0)
        if (eax == 1)
            int32_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            
            if (data_dfc4e0 != 0)
                while (sub_48f340() s< 0xa)
                    int32_t* ecx_3 = data_dfc4d8
                    void* eax_9 = ecx_3[1]
                    data_dfc4d8 = eax_9
                    
                    if (eax_9 == 0)
                        data_dfc4dc = 0
                    else
                        *(eax_9 + 8) = 0
                    
                    int32_t* esi_3 = *ecx_3
                    data_dfc4e0 -= 1
                    sub_45d050(ecx_3, 0xc)
                    
                    if (*esi_3 == 0)
                        sub_4aa5d0(esi_3, 0)
                    
                    if (*esi_3 != 0 || *esi_3 != 0)
                        int32_t eax_10 = esi_3[1]
                        
                        if (eax_10 == 3)
                            sub_48f4d0(esi_3)
                        else if (eax_10 == 2)
                            sub_4b5550(esi_3)
                        else if (eax_10 == 4)
                            xcf5fba64::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >::operator[]::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >(
                                esi_3, 0)
                            xcf5fba64::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >::operator[]::_Boost_call<class <lambda_340b4df2df88abd581e8b57743ba43b7> >(
                                esi_3, 1)
                        else if (eax_10 == 0x15)
                            (*(*data_cdf444 + 0x38))(esi_3)
                        else if (eax_10 == 0x1d)
                            sub_4a31a0(esi_3)
                    
                    int32_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    int32_t performanceCount_2 = performanceCount_1
                    int32_t var_14
                    int32_t var_c
                    
                    if (sub_44eab0(performanceCount_2 - performanceCount, 
                            sbb.d(var_c, var_14, performanceCount_2 u< performanceCount)) s> 0xa)
                        break
                    
                    if (data_dfc4e0 == 0)
                        goto label_42685e
            
            if (data_dfc4e0 == 0 || data_dfc4e0 == 0)
            label_42685e:
                
                if (sub_48f340() == 0)
                    data_dfc4e8 = 3
                    sub_417b50()
            
            eax = 2
            data_dfc4e8 = 2
        
        ecx_12 = data_dfc4e4
    else
        int32_t* eax_1 = data_cdf454
        int32_t i = 0
        int32_t* eax_2 = *eax_1
        int32_t edx_1
        
        do
            edx_1 = *eax_2
            
            if (edx_1 != 0)
                break
            
            i += 1
            eax_2 = &eax_2[1]
        while (i u<= eax_1[1])
        
        int32_t var_1c = edx_1
        
        if (edx_1 != 0)
            bool cond:0_1
            
            do
                int32_t edi_1 = sub_48e8d0(&var_1c)[1]
                int32_t* eax_4 = sub_45cfa0(0xc)
                eax_4[3] += 1
                int32_t* ecx_1 = *eax_4
                
                if (ecx_1 == 0)
                    sub_45ce30(eax_4)
                    ecx_1 = *eax_4
                
                *eax_4 = *ecx_1
                ecx_1[2] = 0
                *ecx_1 = edi_1
                ecx_1[1] = 0
                ecx_1[2] = data_dfc4dc
                void* eax_7 = data_dfc4dc
                
                if (eax_7 == 0)
                    data_dfc4d8 = ecx_1
                else
                    *(eax_7 + 4) = ecx_1
                
                data_dfc4e0 += 1
                cond:0_1 = var_1c != 0
                data_dfc4dc = ecx_1
            while (cond:0_1)
        
        ecx_12 = data_dfc4e0
        eax = 1
        data_dfc4e4 = ecx_12
        data_dfc4e8 = 1
    
    int32_t xmm2
    
    if (ecx_12 != 0)
        xmm2 = 1f - _mm_cvtepi32_ps(zx.o(data_dfc4e0)) / _mm_cvtepi32_ps(zx.o(ecx_12))
    else
        xmm2 = (zx.o(0)).d
    
    if (eax == 3)
        xmm2 = 0x3f800000
    
    int32_t var_2c_6 = ecx_12
    return sub_4698b0(arg1, xmm2)
}
