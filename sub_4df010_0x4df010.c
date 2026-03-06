// 函数名称: sub_4df010
// 虚拟地址: 0x4df010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4df010(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* esi = arg3
    void* esi = arg3
    void* var_14 = esi
    void* result = *(esi + 8)
    int32_t var_30
    char const* const ecx
    
    if (result == *(arg2 + 8))
        result = *(esi + 4)
        
        if (result == *(arg2 + 4))
            int32_t eax = sub_4dd620(*(esi + 0x10))
            result = sub_4dd620(*(arg2 + 0x10))
            void* i = nullptr
            void* result_1 = result
            
            if (*(esi + 8) s> 0)
                int32_t ecx_3 = *(esi + 4)
                
                do
                    result = nullptr
                    void* result_2 = nullptr
                    
                    if (ecx_3 s> 0)
                        int32_t var_c_1 = 0
                        
                        do
                            if (arg4 u> 3)
                                char const* const var_2c_6 = "ImageBufferRotateCopy"
                                var_30 = 0x46f
                                ecx = "Halt"
                                goto label_4df175
                            
                            void* ecx_4
                            void* edx
                            
                            switch (arg4)
                                case 0
                                    edx = result
                                    ecx_4 = i
                                case 1
                                    edx = i
                                    ecx_4 = ecx_3 - result - 1
                                case 2
                                    edx = ecx_3 - result - 1
                                    ecx_4 = *(esi + 8) - i - 1
                                case 3
                                    ecx_4 = result
                                    edx = *(esi + 8) - i - 1
                            
                            result = arg2
                            
                            if (edx s>= *(result + 4))
                                char const* const var_2c_5 = "ImageBufferRotateCopy"
                                var_30 = 0x472
                                ecx = "destX < destImage->width"
                                goto label_4df175
                            
                            if (ecx_4 s>= *(result + 8))
                                char const* const var_2c_4 = "ImageBufferRotateCopy"
                                var_30 = 0x473
                                ecx = "destY < destImage->height"
                                goto label_4df175
                            
                            uint8_t* esi_5 = *(arg2 + 0xc) * ecx_4 + edx * result_1 + *arg2
                            char* eax_5 =
                                sub_4dd8c0(*(esi + 0xc) * i + *esi + var_c_1, *(var_14 + 0x10))
                            sub_4ddb40(arg2, *(arg2 + 0x10), esi_5, eax_5)
                            esi = var_14
                            result = result_2 + 1
                            var_c_1 += eax
                            ecx_3 = *(esi + 4)
                            result_2 = result
                        while (result s< ecx_3)
                    
                    i += 1
                while (i s< *(esi + 8))
            
            return result
        
        char const* const var_2c_2 = "ImageBufferRotateCopy"
        var_30 = 0x450
        ecx = "sourceImage->width == destImage->width"
    else
        char const* const var_2c_1 = "ImageBufferRotateCopy"
        var_30 = 0x44f
        ecx = "sourceImage->height == destImage->height"
    
    label_4df175:
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\textureimport.cpp", var_30, 
        "ImageBufferRotateCopy")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
