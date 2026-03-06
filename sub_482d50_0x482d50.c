// 函数名称: sub_482d50
// 虚拟地址: 0x482d50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_482d50(int32_t arg1, int32_t* arg2, void*** arg3, int32_t arg4, void* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_20_1
    int32_t var_20_1
    char const* const ecx_1
    
    if (arg5 u> 0x5f5e0ff)
        char const* const var_1c_4 = "DefBinSerializeVariableArray"
        var_20_1 = 0x1c8
        ecx_1 = "count >= 0 && count < 100000000"
    else
        int32_t eax = arg2[0xa]
        void* ebx_1 = nullptr
        
        if ((eax.b & 0x10) == 0)
            ebx_1 = arg5
        
        arg1 = eax & 0x100
        int32_t* ecx = arg6[4]
        
        if (ecx == 0)
        label_482d9f:
            int32_t* eax_4 = arg6[1] + *arg2 + *arg6
            void* edx
            edx.b = arg6[3].b
            
            if (ebx_1 == 0)
                if (edx.b == 0)
                    *eax_4 = ebx_1
                
                return eax_4
            
            int32_t ecx_4 = (arg6[2] + 3) & 0xfffffffc
            arg6[2] = ecx_4
            
            if (edx.b == 0)
                *eax_4 = ecx_4
            
            void* eax_6 = sub_48acc0(arg2[6]) * ebx_1
            void** edx_2 = *(arg3 + *arg2)
            int32_t ecx_7 = arg6[2]
            
            if (arg6[3].b == 0)
                sub_51d5b0(*arg6 + ecx_7, edx_2, eax_6)
                ecx_7 = arg6[2]
            
            int32_t esi_1 = arg6[1]
            void* eax_9 = eax_6 + ecx_7
            arg6[1] = ecx_7
            arg6[2] = eax_9
            void* eax_10 = sub_482c00(eax_9, ebx_1, edx_2, arg2, arg4, arg6)
            arg6[1] = esi_1
            return eax_10
        
        if (arg1 != 0)
            if (*ecx == 0)
                *ecx = arg6[2]
            
            goto label_482d9f
        
        if (*ecx == 0 || ebx_1 == 0)
            goto label_482d9f
        
        char const* const var_1c_1 = "DefBinSerializeVariableArray"
        var_20_1 = 0x1dc
        ecx_1 = "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer.pDataSizeWithoutHWBuffers == 0 "
        "|| count == 0"
    
    sub_44e4d0(arg1, &data_5559b1, ecx_1, "c:\ax2017\engine\defbin.cpp", var_20_1, 
        "DefBinSerializeVariableArray")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
