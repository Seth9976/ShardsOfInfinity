// 函数名称: sub_490a90
// 虚拟地址: 0x490a90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_490a90(int32_t*** arg1)
{
    // 第一条实际指令: int32_t** ebx = sub_48fa90(arg1[1])
    int32_t** ebx = sub_48fa90(arg1[1])
    int32_t* eax_1 = arg1[1]
    *arg1 = ebx
    char const* const var_2c
    int32_t var_28
    char const* const var_24_1
    int32_t* eax_2
    char* ecx_1
    
    if (eax_1 != 3)
        if (eax_1 != 0x19)
            if (eax_1 != 5)
                return eax_1
            
            return sub_4b4e30(ebx)
        
        char* eax_16 = sub_491590(ebx[1])
        int32_t* esi_3 = *ebx
        sub_48b560(eax_16, ebx[3], esi_3, 0)
        
        if (esi_3 != 0)
            _aligned_free_base(esi_3)
        
        eax_2 = sub_494930(ebx[3])
        
        if (eax_2 != 0)
            void* edx_8 = ebx[3]
            ebx[1] = eax_2
            int32_t* eax_17 = sub_492a80(eax_2, edx_8)
            *ebx = eax_17
            return eax_17
        
        var_24_1 = "ParticleMakeDatalessFailureAsset"
        var_28 = 0xabd
        var_2c = "c:\ax2017\engine\particle.cpp"
        ecx_1 = "pParseTree"
    else
        eax_2 = sub_52a358(0x40, 0x10)
        
        if (eax_2 != 0)
            uint32_t (* eax_3)[0x4] = sub_48b160(eax_2, data_e46f5c)
            *eax_2 = 0x20
            eax_2[1] = 0x20
            eax_2[3] = 1
            eax_2[4] = 8
            eax_2[5] = 1
            eax_2[6] = 0
            eax_2[0xd] = 1
            int32_t eax_4 = sub_4dd7f0(eax_3, 0x20, 0x20, 1)
            int32_t* eax_5 = sub_45cd70(8)
            *eax_5 = 0
            eax_2[0xf] = eax_5
            *eax_5 = eax_4
            *(eax_2[0xf] + 4) = sub_45cd70(eax_4)
            int32_t* esi_2 = *(eax_2[0xf] + 4)
            int32_t i = 0
            int32_t i_1 = 0
            
            if (eax_2[1] s> 0)
                do
                    int32_t j = 0
                    
                    if (*eax_2 s> 0)
                        int32_t eax_8
                        int32_t edx_2
                        edx_2:eax_8 = sx.q(i)
                        
                        do
                            int32_t eax_10
                            int32_t edx_4
                            edx_4:eax_10 = sx.q(j)
                            int32_t eax_14 = 0xffff00ff
                            
                            if (((((eax_10 + (edx_4 & 3)) s>> 2).b + (((edx_2 & 3) + eax_8) s>> 2).b)
                                    & 1) != 0)
                                eax_14 = 0xff00ff00
                            
                            j += 1
                            *esi_2 = eax_14
                            esi_2 = &esi_2[1]
                        while (j s< *eax_2)
                        
                        i = i_1
                    
                    i += 1
                    i_1 = i
                while (i s< eax_2[1])
            
            int32_t** eax_15 = *ebx
            *eax_15 = eax_2
            return eax_15
        
        var_24_1 = "XMalloc"
        var_28 = 0x4f
        var_2c = "c:\ax2017\engine\xmemory.cpp"
        ecx_1 = "pBuffer"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_1, var_2c, var_28, var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
