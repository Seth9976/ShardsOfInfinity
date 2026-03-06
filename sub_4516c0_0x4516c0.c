// 函数名称: sub_4516c0
// 虚拟地址: 0x4516c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4516c0(int128_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_2c_2
    char* i
    char* ecx_8
    
    while (true)
        i = arg1[3].d
        void* esi_1 = nullptr
        
        if (i != 0)
            do
                int32_t ecx = *i
                i = *(i + 4)
                esi_1 += *(ecx + 0xfdec)
            while (i != 0)
            
            if (esi_1 u>= 0xc)
                char* i_4 = i
                int32_t var_14
                sub_451130(i, &var_14, arg1, 0xc)
                void* var_10
                int32_t var_c
                
                if (var_10 s< 0 || var_10 s> 0x7e80)
                    sub_44e450("net error: header.messageLength >= 0 && header.messageLength <= MAX_NET_MESSAGE_SIZE")
                    i = sub_450480(arg1)
                else if (var_c s<= 0x3e8)
                    sub_44e450("net error: header.messageType > NETMSG_MIN_VALUE")
                    i = sub_450480(arg1)
                else if (var_14 != 0xfeedface)
                    sub_44e450("
                        net error: header.magicNumber == header.magicNumber == NETWORK_MAGIC_NUMBER")
                    i = sub_450480(arg1)
                else
                    i = var_10 + 0xc
                    
                    if (esi_1 s< i)
                        char** i_1 = arg1[3].d
                        int32_t edx_7 = 0
                        
                        while (i_1 != 0)
                            i = *i_1
                            i_1 = i_1[1]
                            edx_7 += *(i + 0xfdec)
                        
                        if (esi_1 != edx_7)
                            char const* const var_28_5 = "EnqueueWholeReceivedNetworkMessages"
                            var_2c_2 = 0x422
                            char const* const var_30_2 = "c:\ax2017\engine\network.cpp"
                            ecx_8 = "receiveSize == NetBufferTotalReceivedSize(loc)"
                            break
                    else
                        int32_t var_28_1 = 1
                        sub_451130(i, &var_14, arg1, 0xc)
                        int32_t* i_2 = arg1[3].d
                        int32_t edx_3 = 0
                        
                        while (i_2 != 0)
                            int32_t eax_3 = *i_2
                            i_2 = i_2[1]
                            edx_3 += *(eax_3 + 0xfdec)
                        
                        i = esi_1 - 0xc
                        
                        if (i != edx_3)
                            char const* const var_28_4 = "EnqueueWholeReceivedNetworkMessages"
                            var_2c_2 = 0x428
                            char const* const var_30_1 = "c:\ax2017\engine\network.cpp"
                            ecx_8 = "receiveSize - (int)sizeof(NetPacketHeader) == 
                                NetBufferTotalReceivedSize(loc)"
                            break
                        
                        void* eax_4 = sub_450150()
                        *eax_4 = *(arg1 + 0x48)
                        *(eax_4 + 8) = var_10
                        *(eax_4 + 4) = var_c
                        *(eax_4 + 0x7e94) = *arg1
                        
                        if (var_10 s> 0)
                            int32_t var_28_2 = 1
                            i = sub_451130(eax_4, eax_4 + 0xc, arg1, var_10.b)
                            char** i_3 = arg1[3].d
                            int32_t edx_5 = 0
                            
                            while (i_3 != 0)
                                i = *i_3
                                i_3 = i_3[1]
                                edx_5 += *(i + 0xfdec)
                            
                            if (esi_1 - var_10 - 0xc != edx_5)
                                char const* const var_28_3 = "EnqueueWholeReceivedNetworkMessages"
                                var_2c_2 = 0x433
                                char const* const var_30 = "c:\ax2017\engine\network.cpp"
                                ecx_8 = "receiveSize - (int)sizeof(NetPacketHeader) - header."
                                "messageLength == NetBufferTotalReceivedSize(loc)"
                                break
                        
                        void* esi_4 = data_65acf4
                        void*** eax_5 = sub_45cfa0(0xc)
                        eax_5[3] += 1
                        void** ecx_6 = *eax_5
                        
                        if (ecx_6 == 0)
                            sub_45ce30(eax_5)
                            ecx_6 = *eax_5
                        
                        *eax_5 = *ecx_6
                        ecx_6[2] = 0
                        *ecx_6 = eax_4
                        ecx_6[1] = 0
                        ecx_6[2] = *(esi_4 + 0x3c)
                        i = *(esi_4 + 0x3c)
                        
                        if (i == 0)
                            *(esi_4 + 0x38) = ecx_6
                        else
                            *(i + 4) = ecx_6
                        
                        *(esi_4 + 0x40) += 1
                        *(esi_4 + 0x3c) = ecx_6
                        
                        if (*(eax_4 + 4) s> 0x3e8)
                            continue
                        
                        char const* const var_28_7 = "EnqueueWholeReceivedNetworkMessages"
                        var_2c_2 = 0x439
                        char const* const var_30_3 = "c:\ax2017\engine\network.cpp"
                        ecx_8 = "netMessage->messageType > NETMSG_MIN_VALUE"
                        break
        
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return i
    
    sub_44e4d0(i, &data_5559b1, ecx_8, "c:\ax2017\engine\network.cpp", var_2c_2, 
        "EnqueueWholeReceivedNetworkMessages")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
