// 函数名称: sub_451900
// 虚拟地址: 0x451900
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_451900(int128_t* arg1)
{
    // 第一条实际指令: char const* const var_28_2
    char const* const var_28_2
    int32_t var_24_2
    char const* const var_20_3
    int32_t* eax_2
    char* ecx_8
    void** eax_1
    
    if (*(arg1 + 0x38) != 0)
        eax_2 = *(arg1 + 0x34)
        
        if (eax_2 != 0)
            void* eax_3 = *eax_2
            
            if (0xfde8 - *(eax_3 + 0xfdec) - *(eax_3 + 0xfde8) s>= 1)
                goto label_451955
            
            void* var_c = sub_450070()
            eax_1 = &var_c
            goto label_451950
    else
        void* var_8 = sub_450070()
        eax_1 = &var_8
    label_451950:
        sub_429090(&arg1[3], eax_1)
    label_451955:
        eax_2 = *(arg1 + 0x34)
        
        if (eax_2 != 0)
            while (true)
                void* ebx_1 = *eax_2
                eax_2 = *(arg1 + 0x14)
                int32_t edi_2 = 0xfde8 - *(ebx_1 + 0xfde8) - *(ebx_1 + 0xfdec)
                
                if (eax_2 != 3 && eax_2 != 4)
                    eax_2 = (*(*data_65adfc + 0x30))(arg1[1].d, 
                        *(ebx_1 + 0xfdec) + *(ebx_1 + 0xfde8) + ebx_1, edi_2)
                    
                    if (eax_2 == 0xffffffff)
                        return sub_4503f0(arg1)
                    
                    if (eax_2 != 0)
                        if (eax_2 s<= 0)
                            var_20_3 = "NetLocTCPReceive"
                            var_24_2 = 0x4b9
                            var_28_2 = "c:\ax2017\engine\network.cpp"
                            ecx_8 = "len > 0"
                            goto label_451abf
                        
                        *(ebx_1 + 0xfdec) += eax_2
                        
                        if (eax_2 s>= edi_2)
                            void* eax_8 = sub_450070()
                            int32_t** eax_9 = sub_45cfa0(0xc)
                            eax_9[3] += 1
                            eax_2 = *eax_9
                            
                            if (eax_2 == 0)
                                sub_45ce30(eax_9)
                                eax_2 = *eax_9
                            
                            *eax_9 = *eax_2
                            eax_2[2] = 0
                            *eax_2 = eax_8
                            eax_2[1] = 0
                            eax_2[2] = *(arg1 + 0x34)
                            void* ecx_7 = *(arg1 + 0x34)
                            
                            if (ecx_7 == 0)
                                *(arg1 + 0x38) += 1
                                arg1[3].d = eax_2
                                *(arg1 + 0x34) = eax_2
                                continue
                            else
                                *(ecx_7 + 4) = eax_2
                                *(arg1 + 0x38) += 1
                                *(arg1 + 0x34) = eax_2
                                continue
                
                void** ecx_10 = *(arg1 + 0x34)
                
                if (ecx_10 == 0)
                    break
                
                void* result = *ecx_10
                
                if (*(result + 0xfdec) != 0)
                    return result
                
                void* edx_2 = ecx_10[2]
                *(arg1 + 0x34) = edx_2
                
                if (edx_2 == 0)
                    arg1[3].d = 0
                else
                    *(edx_2 + 4) = 0
                
                void* esi_1 = *ecx_10
                *(arg1 + 0x38) -= 1
                sub_45d050(ecx_10, 0xc)
                void* ecx_11 = data_65acf4
                void* var_10 = esi_1
                return sub_429090(ecx_11 + 0x44, &var_10)
    var_20_3 = "XList<struct NetBuffer *>::GetTail"
    var_24_2 = 0x5a
    ecx_8 = "mpTail != NULL"
    var_28_2 = "c:\ax2017\engine\xlist.h"
    label_451abf:
    sub_44e4d0(eax_2, &data_5559b1, ecx_8, var_28_2, var_24_2, var_20_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
