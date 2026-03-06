// 函数名称: ??$FindHandlerForForeignException@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@HH1@Z
// 虚拟地址: 0x51ea28
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void??$FindHandlerForForeignException@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@HH1@Z(int32_t* arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5, int32_t* arg6, int32_t arg7, void** arg8)
{
    // 第一条实际指令: if (*arg1 == 0x80000003)
    if (*arg1 == 0x80000003)
        return 
    
    void* eax_1 = sub_51e354()
    int32_t eax_2
    void* eax_3
    
    if (*(eax_1 + 8) != 0)
        eax_2 = EncodePointer(nullptr)
        eax_3 = sub_51e354()
    
    void* esi_2
    
    if (*(eax_1 + 8) != 0 && *(eax_3 + 8) != eax_2 && *arg1 != 0xe0434f4d)
        esi_2 = arg4
        
        if (*arg1 == 0xe0434352)
            goto label_51ea94
        
        void** var_34_1 = arg8
        
        if (sub_51ca2d(arg1, arg2, arg3, esi_2, arg5, arg7) == 0)
            goto label_51ea94
        
        return 
    
    esi_2 = arg4
    label_51ea94:
    void* var_14 = arg5
    void* var_10_1 = esi_2
    
    if (*(arg5 + 0xc) u<= 0)
        sub_52f140()
        noreturn
    
    int32_t* var_24
    __FrameHandler3::GetRangeOfTrysToCheck(&var_24, &var_14, arg6, arg7)
    int32_t var_20
    int32_t esi_3 = var_20
    void** ecx_1 = var_24
    void** var_8_1 = ecx_1
    int32_t var_18
    
    if (esi_3 u>= var_18)
        return 
    
    int32_t var_c_1 = esi_3 * 0x14
    
    do
        int32_t* edx_2 = *(*ecx_1 + 0x10) + var_c_1
        
        if (*edx_2 s<= arg6 && arg6 s<= edx_2[1])
            int32_t* eax = (edx_2[3] << 4) + edx_2[4] - 0x10
            void* ecx_4 = eax[1]
            
            if ((ecx_4 == 0 || *(ecx_4 + 8) == 0) && (*eax & 0x40) == 0)
                int32_t var_34_3 = 1
                CatchIt<class __FrameHandler3>(arg1, arg2, arg3, arg4, arg5, eax, nullptr, edx_2, arg7, 
                    arg8)
            
            ecx_1 = var_8_1
        
        var_c_1 += 0x14
        esi_3 += 1
    while (esi_3 u< var_18)
}
