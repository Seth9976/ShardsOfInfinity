// 函数名称: sub_4491c0
// 虚拟地址: 0x4491c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4491c0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, uint32_t arg6)
{
    // 第一条实际指令: void* eax = sub_445b50(arg3, arg2)
    void* eax = sub_445b50(arg3, arg2)
    uint32_t eax_1 = arg6
    
    if (arg5 != 0)
        int32_t var_18_4
        char const* const var_14_4
        char* ecx_1
        
        if (eax_1 != 5)
            if (eax_1 == 4)
                *(eax + 0x1c) = 1
                goto label_449221
            
            var_14_4 = "ShReveal"
            var_18_4 = 0x7bb
            ecx_1 = "Halt"
        label_44928d:
            sub_44e4d0(eax_1, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", 
                var_18_4, var_14_4)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(eax + 0x1d) = 1
    label_449221:
        int32_t ecx = 0
        
        if (arg5 s> 0)
            while (true)
                eax_1 = zx.d((*(arg4 + (ecx << 2))).w)
                
                if (eax_1 u>= 0xc8)
                    var_14_4 = "CardGet"
                    var_18_4 = 0x90
                    ecx_1 = "idNoMimic < MAX_CARDS"
                    break
                
                void* eax_4 = *((eax_1 << 5) + arg3 + 0x14)
                int32_t var_14_3 = *(eax_4 + 0x24)
                int32_t var_18_3 = *eax
                char const* const var_1c_3 = "%s reveals %s."
                void* var_20_1 = arg3
                ecx += 1
                
                if (ecx s>= arg5)
                    return eax_4
            
            goto label_44928d
    else if (eax_1 == 5)
        int32_t var_14_1 = *eax
        char const* const var_18_1 = "%s doesn't reveal for dominion."
        void* var_1c_1 = arg3
    else if (eax_1 == 4)
        int32_t var_14_2 = *eax
        char const* const var_18_2 = "%s doesn't reveal for unify."
        void* var_1c_2 = arg3
    
    return eax_1
}
