// 函数名称: sub_4eb3d0
// 虚拟地址: 0x4eb3d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __thiscallsub_4eb3d0(void* arg1, int32_t arg2, int32_t* arg3))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_18 = arg2
    void* eax_3 = data_65ae00
    int64_t var_44 = 0
    uint32_t (* result_2)[0x4] = *(eax_3 + 0x1c)
    int32_t ecx_1 = *(eax_3 + 0x18)
    int64_t var_30 = 0
    int32_t var_c = 0
    int32_t var_1c = 2
    int32_t var_34 = 0x57
    int32_t var_3c = 0
    int32_t var_38 = 1
    int32_t var_20 = 0x20
    int32_t var_14 = 1
    int32_t var_10 = 0
    int64_t var_58 = 0
    int32_t var_50 = 0
    int32_t var_60 = 0x57
    int32_t var_5c = 4
    var_44:4.d = ecx_1
    int32_t var_24 = 0
    int32_t edi = *(eax_3 + 0x14)
    var_44.d = edi
    uint32_t (* result)[0x4]
    
    if (result_2 s<= 1)
        result = 1
    else
        result = result_2
        int32_t var_5c_1 = 6
    
    uint32_t (* result_1)[0x4] = result
    *(arg1 + 0x60) = result
    int32_t ebx
    ebx.b = result_2 s> 1
    int32_t ecx_2
    ecx_2.b = result_2 s> 1
    char const* const var_78_1
    int32_t var_74
    char const* const var_70
    char* ecx_4
    
    if (*(arg1 + 0x10) == 0)
        int32_t var_70_1 = 0
        *(arg1 + 0x10) = sub_48f6f0(result, ecx_1, edi, 1, (ecx_2 << 1) + 3)
        result = sub_4ebea0(arg1 + 0x38)
        *result = 2
        int32_t* ecx_7 = *(arg1 + 0x10)
        
        if (ecx_7[1] == 3)
            void* eax_5 = sub_4459f0(ecx_7)
            uint32_t* edi_2 = &(*result)[7]
            uint32_t* var_48_2 = &result[3]
            *(eax_5 + 4) = (*result)[0x92]
            void* ecx_9 = data_65ae00
            
            if (*(ecx_9 + 0x20) != 0)
                int32_t var_70_2 = 0
                int32_t* eax_6 =
                    sub_48f6f0(eax_5, *(ecx_9 + 0x18), *(ecx_9 + 0x14), 0x50, (ebx << 1) + 4)
                ecx_9 = data_65ae00
                *(arg1 + 0x14) = eax_6
            
            int32_t eax_7 = var_14
            
            if (*(ecx_9 + 0x22) != 0)
                eax_7 = 0
            
            int32_t var_14_1 = eax_7
            result = (*(*arg3 + 0x28))(arg3, *(arg1 + 4), &var_44, arg1 + 0xc)
            
            if (result s>= 0)
                int32_t* eax_9 = *(arg1 + 0xc)
                result = (*(*eax_9 + 0x24))(eax_9, 0, 0x59bbb4, edi_2)
                
                if (result s>= 0)
                    int32_t* eax_10 = *(arg1 + 4)
                    result = (*(*eax_10 + 0x24))(eax_10, *edi_2, &var_60, var_48_2)
                    
                    if (result s>= 0)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return result
                    
                    var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
                    var_74 = 0x9a4
                else
                    var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
                    var_74 = 0x9a1
            else
                var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
                var_74 = 0x99e
            
            ecx_4 = "SUCCEEDED(hr)"
            var_78_1 = "c:\ax2017\engine\windows\windowsdx11.cpp"
        else
            var_70 = "TextureGetDef"
            var_74 = 0x84
            var_78_1 = "c:\ax2017\engine\texture.h"
            ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
        var_74 = 0x982
        ecx_4 = "mainBackBufferAsset == NULL"
        var_78_1 = "c:\ax2017\engine\windows\windowsdx11.cpp"
    
    sub_44e4d0(result, &data_5559b1, ecx_4, var_78_1, var_74, var_70)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
