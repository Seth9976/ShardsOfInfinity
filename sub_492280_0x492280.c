// 函数名称: sub_492280
// 虚拟地址: 0x492280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_492280(int32_t arg1, int32_t* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* var_c = arg2
    int32_t* var_c = arg2
    int32_t eax = arg2[1]
    
    if (eax != 0)
        char* esi_1 = *arg2
        arg2[1] = eax + 1
        char* eax_3 = sub_45cd70((eax + 1) * 0xc)
        int32_t ecx_3 = arg2[1]
        *arg2 = eax_3
        sub_51d5b0(eax_3, esi_1, ecx_3 * 0xc)
        
        if (esi_1 != 0)
            _aligned_free_base(esi_1)
    else
        arg2[1] = 1
        *arg2 = sub_45cd70(eax + 0xc)
    
    void* result = *arg2 + arg2[1] * 0xc - 0xc
    void* result_2 = result
    char const* const var_30_2
    int32_t var_2c_2
    char const* const var_28_3
    char* ecx_7
    
    if (arg4 != 0)
        void* ecx_8 = arg3
        result = *(ecx_8 + 0xc)
        
        if (*(result + 0x10) == 0x14)
            int32_t* esi_2 = *(arg4 + 4)
            int32_t edi_1 = 0
            
            if (esi_2 != 0)
                while (true)
                    int32_t* eax_7 = *esi_2
                    char* edx = *(ecx_8 + 4)
                    char* const ecx_9 = &data_5559b1
                    esi_2 = esi_2[1]
                    char* eax_8 = *eax_7
                    
                    if (eax_8 != 0)
                        ecx_9 = eax_8
                    
                    int32_t ecx_11
                    
                    while (true)
                        eax_8.b = *ecx_9
                        char temp0_1 = *edx
                        bool c_1 = eax_8.b u< temp0_1
                        
                        if (eax_8.b == temp0_1)
                            if (eax_8.b == 0)
                                ecx_11 = 0
                                break
                            
                            eax_8.b = ecx_9[1]
                            char temp2_1 = edx[1]
                            c_1 = eax_8.b u< temp2_1
                            
                            if (eax_8.b == temp2_1)
                                ecx_9 = &ecx_9[2]
                                edx = &edx[2]
                                
                                if (eax_8.b != 0)
                                    continue
                                
                                ecx_11 = 0
                                break
                        
                        ecx_11 = sbb.d(ecx_9, ecx_9, c_1) | 1
                        break
                    
                    int32_t eax_9 = edi_1 + 1
                    ecx_8 = arg3
                    
                    if (ecx_11 != 0)
                        eax_9 = edi_1
                    
                    edi_1 = eax_9
                    
                    if (esi_2 == 0)
                        break
            
            int32_t esi_4 = *(arg4 + 0xc) - edi_1
            int32_t* result_3 = result_2
            void* ecx_13 = arg3
            result_3[1] = sub_45cd70(esi_4 << 3)
            *result_3 = esi_4
            result_3[2] = edi_1
            int32_t* edi_2 = *(arg4 + 4)
            result = *(ecx_13 + 0x1c)
            void* result_1 = result
            
            if (edi_2 == 0)
                return result
            
            int32_t ebx_2 = 0
            
            if (edi_2 != 0)
                while (true)
                    int32_t* esi_5 = *edi_2
                    char* edx_1 = *(ecx_13 + 4)
                    edi_2 = edi_2[1]
                    char* const ecx_14 = &data_5559b1
                    char* eax_13 = *esi_5
                    
                    if (eax_13 != 0)
                        ecx_14 = eax_13
                    
                    int32_t eax_15
                    
                    while (true)
                        eax_13.b = *ecx_14
                        char temp1_1 = *edx_1
                        bool c_2 = eax_13.b u< temp1_1
                        
                        if (eax_13.b == temp1_1)
                            if (eax_13.b == 0)
                                eax_15 = 0
                                break
                            
                            eax_13.b = ecx_14[1]
                            char temp3_1 = edx_1[1]
                            c_2 = eax_13.b u< temp3_1
                            
                            if (eax_13.b == temp3_1)
                                ecx_14 = &ecx_14[2]
                                edx_1 = &edx_1[2]
                                
                                if (eax_13.b != 0)
                                    continue
                                
                                eax_15 = 0
                                break
                        
                        eax_15 = sbb.d(eax_13, eax_13, c_2) | 1
                        break
                    
                    if (eax_15 != 0)
                        int32_t* var_28_5 = esi_5
                        result = sub_4920f0(eax_15, result_3[1] + ebx_2, result_1, ecx_14)
                        
                        if (result.b != 0)
                            ebx_2 += 8
                        else
                            char* eax_16 = *esi_5
                            char* const ecx_16 = &data_5559b1
                            
                            if (eax_16 != 0)
                                ecx_16 = eax_16
                            
                            char* const var_28_6 = ecx_16
                            result = sub_44e260("unknown tag %s")
                    else
                        result = sub_492280(arg3, esi_5[2])
                    
                    ecx_13 = arg3
                    result_3 = result_2
                    
                    if (edi_2 == 0)
                        break
                
                return result
            
            var_28_3 = "XList<struct DefParseItem *>::GetNextIter"
            var_2c_2 = 0x1a1
            ecx_7 = "iter != NULL"
            var_30_2 = "c:\ax2017\engine\xlist.h"
        else
            var_28_3 = "DefParseReadAttribTree"
            var_2c_2 = 0x337
            var_30_2 = "c:\ax2017\engine\defparsetree.cpp"
            ecx_7 = "pField->pDefMap->defType == DT_ATTRIB_TREE"
    else
        var_28_3 = "DefParseReadAttribTree"
        var_2c_2 = 0x336
        var_30_2 = "c:\ax2017\engine\defparsetree.cpp"
        ecx_7 = "pParseTree"
    
    sub_44e4d0(result, &data_5559b1, ecx_7, var_30_2, var_2c_2, var_28_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
