// 函数名称: sub_4b6760
// 虚拟地址: 0x4b6760
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4b6760(int32_t arg1, float* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544a88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result_1
    int32_t* var_b4 = &result_1
    int32_t* var_6c
    sub_42ce10(&var_6c, *(arg3 + 4), 2)
    int32_t var_8_1 = 0
    void* ecx_2 = *result_1
    void* var_64 = ecx_2
    int32_t* result
    
    if (ecx_2 == 0)
        result.b = 0
    else
        int32_t xmm0_1 = (zx.o(0)).d
        int32_t var_48_1 = 0
        char var_3d_1 = 1
        int32_t i_1 = 0
        
        if (*ecx_2 s<= 0)
            result.b = 0
        else
            result = nullptr
            result_1 = nullptr
            int32_t edx_1
            int32_t i
            
            do
                void* esi_1 = *(ecx_2 + 4)
                int32_t ecx_3 = *(esi_1 + result + 0x18)
                void* esi_2 = esi_1 + result
                void* var_54_1 = esi_2
                int32_t eax_5
                int32_t edx
                edx:eax_5 = sx.q(ecx_3)
                
                if (mods.dp.d(edx:eax_5, 3) != 0)
                    sub_44e4d0(divs.dp.d(edx:eax_5, 3), &data_5559b1, "defSubMesh.indexCount % 3 == 0", 
                        "c:\ax2017\engine\structure.cpp", 0x4a2, "sStructurePolygonDoesIntersectRay")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t j = 0
                int32_t var_44_1 = 0
                char var_3e_1 = 1
                
                if (ecx_3 s<= 0)
                    edx_1.b = var_3d_1
                else
                    char eax_18
                    
                    do
                        int32_t ecx_4 = *(esi_2 + 0x20)
                        uint32_t esi_3 = zx.d(*(ecx_4 + (j << 1) + 2))
                        uint32_t edi_1 = zx.d(*(ecx_4 + (j << 1) + 4))
                        void var_80
                        int64_t* eax_9 =
                            sub_4b6620(&var_80, var_54_1, arg3, &var_80, zx.d(*(ecx_4 + (j << 1))))
                        esi_2 = var_54_1
                        int32_t var_34_1 = eax_9[1].d
                        int64_t var_3c = *eax_9
                        void var_90
                        int64_t* eax_12 = sub_4b6620(&var_90, esi_2, arg3, &var_90, esi_3)
                        int32_t var_28_1 = eax_12[1].d
                        int64_t var_30_1 = *eax_12
                        void var_a0
                        int64_t* eax_15 = sub_4b6620(&var_a0, esi_2, arg3, &var_a0, edi_1)
                        int32_t var_1c_1 = eax_15[1].d
                        int64_t var_24_1 = *eax_15
                        float var_60
                        bool cond:1_1 = sub_4c6110(&var_60, &var_3c, arg2, &var_60) == 0
                        eax_18 = var_3e_1
                        
                        if (not(cond:1_1))
                            xmm0_1 = var_60
                        
                        if (not(cond:1_1) && (eax_18 != 0 || not(var_44_1 f<= xmm0_1)))
                            eax_18 = 0
                            var_44_1 = xmm0_1
                            var_3e_1 = 0
                        else
                            xmm0_1 = var_44_1
                        
                        j += 3
                    while (j s< *(esi_2 + 0x18))
                    
                    edx_1.b = var_3d_1
                    
                    if (eax_18 != 0 || (edx_1.b == 0 && var_48_1 f<= xmm0_1))
                        xmm0_1 = var_48_1
                    else
                        edx_1.b = 0
                        var_48_1 = xmm0_1
                        var_3d_1 = 0
                
                ecx_2 = var_64
                i = i_1 + 1
                result = &result_1[0x49]
                i_1 = i
                result_1 = result
            while (i s< *ecx_2)
            
            if (edx_1.b != 0)
                result.b = 0
            else
                *arg4 = xmm0_1
                result.b = 1
    
    int32_t* ecx_9 = var_6c
    
    if (ecx_9 != 0)
        ecx_9[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
