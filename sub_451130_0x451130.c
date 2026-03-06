// 函数名称: sub_451130
// 虚拟地址: 0x451130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_451130(void* arg1, char* arg2, void* arg3, char arg4)
{
    // 第一条实际指令: int32_t* esi = *(arg3 + 0x30)
    int32_t* esi = *(arg3 + 0x30)
    char* var_c = arg2
    char const* const var_28_3
    int32_t var_24_2
    char const* const var_20_3
    char* ecx_6
    
    if (esi == 0)
    label_4512be:
        var_20_3 = "NetBufferGetReceiveData"
        var_24_2 = 0x3bb
        ecx_6 = "Halt"
    label_4512cd:
        var_28_3 = "c:\ax2017\engine\network.cpp"
    else
        while (true)
            int32_t* ebx_1 = esi
            
            if (esi == 0)
                var_20_3 = "XList<struct NetBuffer *>::GetNextIter"
                var_24_2 = 0x1a1
                var_28_3 = "c:\ax2017\engine\xlist.h"
                ecx_6 = "iter != NULL"
                break
            
            void* edi_1 = *esi
            void* ecx = &esi[1]
            esi = *ecx
            void* var_10 = ecx
            arg1 = *(edi_1 + 0xfdec)
            void* arg_4
            
            if (arg1 s>= arg_4)
                void* esi_1 = arg_4
                char* eax_6 = sub_51d5b0(arg2, *(edi_1 + 0xfde8) + edi_1, esi_1)
                
                if (arg4 == 0)
                    return eax_6
                
                int32_t eax_7 = *(edi_1 + 0xfdec)
                
                if (eax_7 != esi_1)
                    *(edi_1 + 0xfde8) += esi_1
                    void* eax_10 = eax_7 - esi_1
                    *(edi_1 + 0xfdec) = eax_10
                    return eax_10
                
                void* ecx_7 = ebx_1[2]
                int32_t eax_8 = ebx_1[1]
                void* ecx_8
                
                if (ecx_7 == 0)
                    ecx_8 = arg3
                    *(ecx_8 + 0x30) = eax_8
                else
                    *(ecx_7 + 4) = eax_8
                    ecx_8 = arg3
                
                void* edx_3 = ebx_1[1]
                int32_t eax_9 = ebx_1[2]
                
                if (edx_3 == 0)
                    *(ecx_8 + 0x34) = eax_9
                else
                    *(edx_3 + 8) = eax_9
                
                *(ecx_8 + 0x38) -= 1
                sub_45d050(ebx_1, 0xc)
                void* ecx_10 = data_65acf4
                arg_4 = edi_1
                return sub_429090(ecx_10 + 0x44, &arg_4)
            
            if (arg1 s<= 0)
                var_20_3 = "NetBufferGetReceiveData"
                var_24_2 = 0x3ad
                ecx_6 = "netBuffer->mDataSize > 0"
                goto label_4512cd
            
            sub_51d5b0(arg2, *(edi_1 + 0xfde8) + edi_1, arg1)
            arg1 = *(edi_1 + 0xfdec)
            arg2 = var_c + arg1
            arg_4 -= arg1
            var_c = arg2
            
            if (arg4 != 0)
                void* edx_1 = var_10
                void* eax_2 = ebx_1[2]
                int32_t ecx_1 = *edx_1
                void* eax_3
                
                if (eax_2 == 0)
                    eax_3 = arg3
                    *(eax_3 + 0x30) = ecx_1
                else
                    *(eax_2 + 4) = ecx_1
                    eax_3 = arg3
                
                void* edx_2 = *edx_1
                int32_t ecx_2 = ebx_1[2]
                
                if (edx_2 == 0)
                    *(eax_3 + 0x34) = ecx_2
                else
                    *(edx_2 + 8) = ecx_2
                
                *(eax_3 + 0x38) -= 1
                sub_45d050(ebx_1, 0xc)
                void* ecx_4 = data_65acf4
                var_10 = edi_1
                arg1 = sub_429090(ecx_4 + 0x44, &var_10)
                arg2 = var_c
            
            if (esi == 0)
                goto label_4512be
    
    sub_44e4d0(arg1, &data_5559b1, ecx_6, var_28_3, var_24_2, var_20_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
