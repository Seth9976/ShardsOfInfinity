// 函数名称: sub_4777e0
// 虚拟地址: 0x4777e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4777e0()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t* result = __security_cookie ^ &__saved_ebp
    int32_t* result_1 = result
    
    if (data_5cea2c != 0)
        uint32_t eax_1 = sub_4766f0()
        void* eax_2 = sub_469160(data_5cda2c)
        int32_t esi_1 = 1
        int128_t var_30 = *(*(eax_2 + 0x63c) * 0x208 + eax_2 + 0x14)
        int32_t var_58_2
        char const* const var_54_3
        int32_t var_38
        uint32_t (* eax_3)[0x4]
        char* ecx_9
        
        if (data_5cea2c s> 1)
            while (true)
                eax_3 = sub_469160((&data_5cda2c)[esi_1])
                int32_t xmm3_1 = var_30:8.d
                int32_t xmm2_1 = var_30.d
                (*eax_3)[0x18f]
                
                if (not(xmm3_1 f< xmm2_1))
                    int32_t xmm0_2 = var_30:0xc.d
                    int32_t xmm1_1 = var_30:4.d
                    
                    if (not(xmm0_2 f< xmm1_1))
                        int32_t xmm4_1 = (*eax_3)[(*eax_3)[0x18f] * 0x82 + 5]
                        int32_t var_40_1
                        
                        var_40_1 = xmm4_1 f<= xmm2_1 ? xmm4_1 : xmm2_1
                        
                        int32_t xmm2_2 = (*eax_3)[(*eax_3)[0x18f] * 0x82 + 7]
                        
                        var_38 = xmm3_1 f<= xmm2_2 ? xmm2_2 : xmm3_1
                        
                        int32_t xmm2_3 = (*eax_3)[(*eax_3)[0x18f] * 0x82 + 6]
                        
                        if (xmm2_3 f<= xmm1_1)
                            int32_t var_3c_2 = xmm2_3
                        else
                            int32_t var_3c_1 = xmm1_1
                        
                        int32_t xmm1_2 = (*eax_3)[(*eax_3)[0x18f] * 0x82 + 8]
                        
                        if (xmm0_2 f<= xmm1_2)
                            int32_t var_34_2 = xmm1_2
                        else
                            int32_t var_34_1 = xmm0_2
                        
                        esi_1 += 1
                        var_30 = var_40_1.o
                        
                        if (esi_1 s>= data_5cea2c)
                            goto label_477907
                        
                        continue
                
                var_54_3 = "RectUnion"
                var_58_2 = 0xdb
                ecx_9 = "RectIsNormalized(r0)"
                break
            
            goto label_4779bc
        
    label_477907:
        eax_3 = sub_4775f0(&var_30, *(eax_1 + 0x6a8))
        float xmm2_4 = var_30.d
        uint32_t esi_2 = (*eax_3)[0x1aa]
        int32_t xmm1_3
        
        if (not(var_30:8.d < xmm2_4))
            xmm1_3 = var_30:4.d
        
        if (var_30:8.d < xmm2_4 || var_30:0xc.d f< xmm1_3)
            var_54_3 = "RectTopLeft"
            var_58_2 = 0x127
            ecx_9 = "RectIsNormalized(r)"
        label_4779bc:
            sub_44e4d0(eax_3, &data_5559b1, ecx_9, "c:\ax2017\engine\rect.cpp", var_58_2, var_54_3)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t xmm1_4 = xmm1_3 ^ (data_59e5c0.o).d
        var_38 = xmm2_4 ^ (data_59e5c0.o).d
        int32_t var_34_3 = xmm1_4
        sub_475a20(esi_2, &var_38)
        data_5cda2c = esi_2
        data_5cea2c = 1
        sub_469210(1)
        result = sub_45e9a0(&data_5cd9fc)
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
