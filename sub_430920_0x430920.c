// 函数名称: sub_430920
// 虚拟地址: 0x430920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_430920(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t edx = __alloca_probe(0x6484)
    int32_t edx = __alloca_probe(0x6484)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    int32_t ebx = 0xffffffff
    int32_t var_2190 = edx
    __builtin_memset(&arg1[2], 0, 0x20)
    arg1[0xb] = 0
    *arg1 = arg3
    arg1[1] = arg4
    arg1[0xa] = 1
    int32_t var_218c = 0
    
    if (arg6 s> 0)
        while (true)
            char var_6484[0x2178]
            char var_430c[0x217c]
            sub_51d5b0(&var_430c, sub_42dc00(&var_6484), 0x2178)
            void var_2184
            sub_51d5b0(&var_2184, &var_430c, 0x2178)
            int32_t eax_7 = *(arg5 + (esi << 2))
            int32_t var_14_3 = 2
            arg1[2] = eax_7
            int32_t ecx_2 = sub_44c7d0(eax_7, arg2, &var_2184, arg1, var_14_3)
            int32_t var_1c_3 = arg2[1]
            sub_430e10(arg2, &var_2184, ecx_2)
            sub_42c7a0(0x65ac58)
            int64_t* eax_9 = data_65accc
            uint128_t xmm0_1 = zx.o(*eax_9)
            int32_t var_18_5
            char const* const var_14_4
            char* ecx_7
            
            if (xmm0_1 f< -1.0)
                var_14_4 = "EvalNet"
                var_18_5 = 0xd22
                ecx_7 = "nnet.net.win_prob[0] >= -1"
            else if (0x3ff0000000000000 f< xmm0_1)
                var_14_4 = "EvalNet"
                var_18_5 = 0xd23
                ecx_7 = "nnet.net.win_prob[0] <= 1"
            else
                int32_t xmm0_2 = _mm_cvtpd_ps(xmm0_1)
                
                if (ebx == 0xffffffff || not(xmm0_2 f<= var_218c))
                    ebx = esi
                    var_218c = xmm0_2
                
                esi += 1
                
                if (esi s>= arg6)
                    break
                
                continue
            
            sub_44e4d0(eax_9, &data_5559b1, ecx_7, "c:\ax2017\jams\shards\code\shardsai.cpp", var_18_5, 
                var_14_4)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    arg1[2] = *(arg5 + (ebx << 2))
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return arg1
}
