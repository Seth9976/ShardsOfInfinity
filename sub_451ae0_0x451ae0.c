// 函数名称: sub_451ae0
// 虚拟地址: 0x451ae0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_451ae0(void* arg1)
{
    // 第一条实际指令: uint32_t (* edi)[0x4] = sub_450150()
    uint32_t (* edi)[0x4] = sub_450150()
    uint32_t* ebx = &(*edi)[3]
    uint32_t i_1 = (*(*data_65adfc + 0x14))(*(arg1 + 0x10), &(*edi)[0x1fa5], ebx, 0x7e80)
    uint32_t i = i_1
    
    if (i != 0)
        while (i != 0xffffffff)
            int32_t var_24_2
            char* ecx_8
            
            if (i s<= 0)
                char const* const var_20_2 = "NetLocUDPReceive"
                var_24_2 = 0x4dc
                ecx_8 = "len > 0"
            else
                *edi = *(arg1 + 0x48)
                (*edi)[2] = i
                
                if (i u< 4)
                    i_1 = 0x3e9
                else
                    i_1 = *ebx
                
                (*edi)[1] = i_1
                
                if (i_1 s<= 0x3e8)
                    char const* const var_20_1 = "NetLocUDPReceive"
                    var_24_2 = 0x4eb
                    ecx_8 = "netMessage->messageType > NETMSG_MIN_VALUE"
                else
                    void* ebx_1 = data_65acf4
                    int32_t* eax_4 = sub_45cfa0(0xc)
                    eax_4[3] += 1
                    int32_t* ecx_1 = *eax_4
                    
                    if (ecx_1 == 0)
                        sub_45ce30(eax_4)
                        ecx_1 = *eax_4
                    
                    *eax_4 = *ecx_1
                    ecx_1[2] = 0
                    *ecx_1 = edi
                    ecx_1[1] = 0
                    ecx_1[2] = *(ebx_1 + 0x3c)
                    void* eax_7 = *(ebx_1 + 0x3c)
                    
                    if (eax_7 == 0)
                        *(ebx_1 + 0x38) = ecx_1
                    else
                        *(eax_7 + 4) = ecx_1
                    
                    *(ebx_1 + 0x40) += 1
                    *(ebx_1 + 0x3c) = ecx_1
                    edi = sub_450150()
                    ebx = &(*edi)[3]
                    i_1 = (*(*data_65adfc + 0x14))(*(arg1 + 0x10), &(*edi)[0x1fa5], ebx, 0x7e80)
                    i = i_1
                    
                    if (i == 0)
                        break
                    
                    continue
            
            sub_44e4d0(i_1, &data_5559b1, ecx_8, "c:\ax2017\engine\network.cpp", var_24_2, 
                "NetLocUDPReceive")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    uint32_t eax_11 = edi[0x7e9][0]
    uint32_t (* var_c)[0x4] = edi
    
    if (eax_11 != 0 && eax_11 != &data_5559b1)
        if (data_cdf414 != 0 && *eax_11 != 0)
            char* eax_12 = sub_44f000(&edi[0x7e9])
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
        
        edi[0x7e9][0] = &data_5559b1
    
    return sub_429090(data_65acf4 + 0x50, &var_c)
}
