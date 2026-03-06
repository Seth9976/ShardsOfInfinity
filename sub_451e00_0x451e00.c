// 函数名称: sub_451e00
// 虚拟地址: 0x451e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_451e00(int128_t* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x14)
    void* result = *(arg1 + 0x14)
    
    if (result == 1 || result == 2 || result == 3 || result == 4)
        if (*(arg1 + 0x24) == 4)
            return sub_451c90(arg1)
    else if (result == 5)
        result = arg1[1].d
        void* ecx = data_65acf4
        
        if (result != 0)
            uint32_t edx_1 = zx.d(result.w)
            
            if (edx_1 u< *(ecx + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx
                
                if (*(esi_2 + 0x48) == result && *(arg1 + 0x44) != 0)
                    while (true)
                        int32_t* ecx_1 = *(arg1 + 0x3c)
                        
                        if (ecx_1 == 0)
                            break
                        
                        void* eax = ecx_1[1]
                        *(arg1 + 0x3c) = eax
                        
                        if (eax == 0)
                            arg1[4].d = 0
                        else
                            *(eax + 8) = 0
                        
                        int32_t eax_1 = *ecx_1
                        *(arg1 + 0x44) -= 1
                        sub_45d050(ecx_1, 0xc)
                        int32_t* eax_2 = sub_45cfa0(0xc)
                        eax_2[3] += 1
                        int32_t* ecx_2 = *eax_2
                        
                        if (ecx_2 == 0)
                            sub_45ce30(eax_2)
                            ecx_2 = *eax_2
                        
                        *eax_2 = *ecx_2
                        ecx_2[2] = 0
                        *ecx_2 = eax_1
                        ecx_2[1] = 0
                        ecx_2[2] = *(esi_2 + 0x34)
                        result = *(esi_2 + 0x34)
                        
                        if (result == 0)
                            *(esi_2 + 0x30) = ecx_2
                        else
                            *(result + 4) = ecx_2
                        
                        *(esi_2 + 0x38) += 1
                        *(esi_2 + 0x34) = ecx_2
                        
                        if (*(arg1 + 0x44) == 0)
                            return result
                    
                label_451fc7:
                    sub_44e4d0(result, &data_5559b1, "mpHead != NULL", "c:\ax2017\engine\xlist.h", 
                        0x53, "XList<struct NetBuffer *>::GetHead")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
    else if (result == 0 && *(arg1 + 0x44) != result)
        while (true)
            int32_t* edx_2 = *(arg1 + 0x3c)
            
            if (edx_2 == 0)
                break
            
            void* edx_3 = *edx_2
            (*(*data_65adfc + 0x10))(arg1[1].d, edx_3 + 0xfdfc, *(edx_3 + 0xfde8) + edx_3, 
                *(edx_3 + 0xfdec))
            int32_t* ecx_5 = *(arg1 + 0x3c)
            void* eax_9 = ecx_5[1]
            *(arg1 + 0x3c) = eax_9
            
            if (eax_9 == 0)
                arg1[4].d = 0
            else
                *(eax_9 + 8) = 0
            
            int32_t esi_4 = *ecx_5
            *(arg1 + 0x44) -= 1
            sub_45d050(ecx_5, 0xc)
            void* ecx_6 = data_65acf4
            int32_t var_c = esi_4
            result = sub_429090(ecx_6 + 0x44, &var_c)
            
            if (*(arg1 + 0x44) == 0)
                return result
        
        goto label_451fc7
    
    return result
}
