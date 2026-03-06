// 函数名称: sub_42f980
// 虚拟地址: 0x42f980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_42f980(int32_t arg1, int32_t* arg2, int32_t arg3))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_50 = arg3
    double var_3c = 1.0
    int32_t ecx
    sub_430e10(eax_1, arg2, ecx)
    sub_42c7a0(0x65ac58)
    int64_t* eax_2 = data_65accc
    int64_t xmm1 = *eax_2
    int32_t var_54
    char const* const ecx_1
    
    if (xmm1 f>= -1.0)
        if (not(0x3ff0000000000000 f< xmm1))
            int32_t ecx_2 = data_65ace0
            
            if (ecx_2 == 0x104)
                int32_t* ecx_3 = data_65acd8
                int32_t* edx = nullptr
                int32_t esi_1 = *ecx_3
                
                while (true)
                    *(edx + ecx_3) = *(edx + ecx_3 + 4)
                    int32_t ecx_4 = data_65acdc
                    *(edx + ecx_4) = *(edx + ecx_4 + 4)
                    edx = &edx[1]
                    
                    if (edx s>= 0x40c)
                        break
                    
                    ecx_3 = data_65acd8
                
                *(data_65acd8 + 0x40c) = esi_1
                ecx_2 = data_65ace0 - 1
                data_65ace0 = ecx_2
            
            sub_51d5b0(*(data_65acd8 + (ecx_2 << 2)), data_65acbc, (data_65ac80 << 3) + 8)
            *(data_65acdc + (data_65ace0 << 2)) = arg3
            uint32_t (* result)[0x4] = nullptr
            int32_t esi_3 = data_65ace0 + 1
            data_65ace0 = esi_3
            int32_t ecx_7 = arg2[0x859]
            int64_t var_34[0x5]
            
            if (ecx_7 s> 0)
                int32_t edx_1 = data_65accc
                
                do
                    var_34[result] = *(edx_1 + (result << 3))
                    result += 1
                while (result s< ecx_7)
            
            int32_t esi_4 = esi_3 - 2
            
            if (esi_3 - 2 s>= 0)
                int32_t temp1_1
                
                do
                    result = data_65acdc
                    
                    if ((*result)[esi_4] == arg3)
                        sub_51d5b0(data_65acbc, *(data_65acd8 + (esi_4 << 2)), (data_65ac80 << 3) + 8)
                        sub_42c7a0(0x65ac58)
                        result = sub_42ca20(0x65ac58, &var_34, zx.o(var_3c))
                        double xmm0_4 = var_3c * 0.69999999999999996
                        var_3c = xmm0_4
                        
                        if (0.10000000000000001 > xmm0_4)
                            break
                    
                    temp1_1 = esi_4
                    esi_4 -= 1
                while (temp1_1 - 1 s>= 0)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        char const* const var_50_4 = "EvalNet"
        var_54 = 0xd23
        ecx_1 = "nnet.net.win_prob[0] <= 1"
    else
        char const* const var_50_1 = "EvalNet"
        var_54 = 0xd22
        ecx_1 = "nnet.net.win_prob[0] >= -1"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsai.cpp", var_54, "EvalNet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
