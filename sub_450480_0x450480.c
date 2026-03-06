// 函数名称: sub_450480
// 虚拟地址: 0x450480
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_450480(int128_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[1].d
    int32_t edx = arg1[1].d
    
    if (edx != 0xffffffff)
        void* eax_1 = *(arg1 + 0x14)
        int32_t var_1c
        char* ecx_1
        
        if (eax_1 == 3 || eax_1 == 4)
            eax_1 = sub_450360(arg1, 0xfa2)
            
            if (*(arg1 + 0x24) != 4)
                char const* const var_18_8 = "NetLocFree"
                var_1c = 0x175
                ecx_1 = "loc.connectStatus == NETWORK_CONNECT_OPEN"
            label_4505e2:
                sub_44e4d0(eax_1, &data_5559b1, ecx_1, "c:\ax2017\engine\network.cpp", var_1c, 
                    "NetLocFree")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* ecx_4 = data_65adfc
            int32_t var_18_4 = arg1[1].d
            *(arg1 + 0x24) = 5
            (*(*ecx_4 + 0x34))(var_18_4)
        else if (eax_1 == 1 || eax_1 == 2)
            (*(*data_65adfc + 0x34))(edx)
            sub_4503f0(arg1)
        else if (eax_1 != 0)
            if (eax_1 != 5)
                char const* const var_18_2 = "NetLocFree"
                var_1c = 0x18e
                ecx_1 = "Halt"
                goto label_4505e2
            
            sub_4503f0(arg1)
        else
            (*(*data_65adfc + 0xc))(edx)
    
    int32_t var_8
    
    while (*(arg1 + 0x38) != 0)
        int32_t* ecx_5 = arg1[3].d
        void* eax_5 = ecx_5[1]
        arg1[3].d = eax_5
        
        if (eax_5 == 0)
            *(arg1 + 0x34) = 0
        else
            *(eax_5 + 8) = 0
        
        int32_t edi_1 = *ecx_5
        *(arg1 + 0x38) -= 1
        sub_45d050(ecx_5, 0xc)
        void* ecx_6 = data_65acf4
        var_8 = edi_1
        sub_429090(ecx_6 + 0x44, &var_8)
    
    while (*(arg1 + 0x44) != 0)
        int32_t* ecx_8 = *(arg1 + 0x3c)
        void* eax_6 = ecx_8[1]
        *(arg1 + 0x3c) = eax_6
        
        if (eax_6 == 0)
            arg1[4].d = 0
        else
            *(eax_6 + 8) = 0
        
        int32_t edi_2 = *ecx_8
        *(arg1 + 0x44) -= 1
        sub_45d050(ecx_8, 0xc)
        void* ecx_9 = data_65acf4
        var_8 = edi_2
        sub_429090(ecx_9 + 0x44, &var_8)
    
    return sub_452820(data_65acf4, arg1)
}
