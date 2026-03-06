// 函数名称: sub_450a70
// 虚拟地址: 0x450a70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_450a70(int32_t* arg1, void* arg2, int32_t** arg3, char* arg4)
{
    // 第一条实际指令: void* result = arg2
    void* result = arg2
    char const* const var_2c_1
    int32_t var_28_1
    char const* const var_24_1
    char* ecx
    
    if (arg2 s> 0)
        void** eax_1
        
        if (arg3[2] != 0)
            arg1 = arg3[1]
            
            if (arg1 != 0)
                void* eax_2 = *arg1
                
                if (0xfde8 - *(eax_2 + 0xfdec) - *(eax_2 + 0xfde8) s>= 1)
                    goto label_450aea
                
                void* var_14 = sub_450070()
                eax_1 = &var_14
                goto label_450adf
        else
            void* var_10 = sub_450070()
            eax_1 = &var_10
        label_450adf:
            sub_429090(arg3, eax_1)
            arg2 = result
        label_450aea:
            char* var_c_1 = arg4
            arg1 = arg3[1]
            
            if (arg1 != 0)
                void* eax_7
                void* ebx_1
                
                while (true)
                    ebx_1 = *arg1
                    void* eax_5 = *(ebx_1 + 0xfde8)
                    int32_t ecx_4 = *(ebx_1 + 0xfdec)
                    void* esi_2 = 0xfde8 - eax_5 - ecx_4
                    eax_7 = eax_5 + ecx_4 + ebx_1
                    
                    if (esi_2 s>= arg2)
                        break
                    
                    if (esi_2 s> 0)
                        sub_51d5b0(eax_7, var_c_1, esi_2)
                        *(ebx_1 + 0xfdec) += esi_2
                        var_c_1 += esi_2
                        result -= esi_2
                    
                    void* eax_8 = sub_450070()
                    int32_t** eax_9 = sub_45cfa0(0xc)
                    eax_9[3] += 1
                    arg1 = *eax_9
                    
                    if (arg1 == 0)
                        sub_45ce30(eax_9)
                        arg1 = *eax_9
                    
                    *eax_9 = *arg1
                    arg1[2] = 0
                    *arg1 = eax_8
                    arg1[1] = 0
                    arg1[2] = arg3[1]
                    void* ecx_8 = arg3[1]
                    
                    if (ecx_8 == 0)
                        arg3[2] += 1
                        arg2 = result
                        *arg3 = arg1
                        arg3[1] = arg1
                    else
                        arg2 = result
                        *(ecx_8 + 4) = arg1
                        arg3[2] += 1
                        arg3[1] = arg1
                
                sub_51d5b0(eax_7, var_c_1, arg2)
                *(ebx_1 + 0xfdec) += result
                return result
        var_24_1 = "XList<struct NetBuffer *>::GetTail"
        var_28_1 = 0x5a
        ecx = "mpTail != NULL"
        var_2c_1 = "c:\ax2017\engine\xlist.h"
    else
        var_24_1 = "NetBufferListAppendData"
        var_28_1 = 0x241
        var_2c_1 = "c:\ax2017\engine\network.cpp"
        ecx = "length > 0"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, var_2c_1, var_28_1, var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
