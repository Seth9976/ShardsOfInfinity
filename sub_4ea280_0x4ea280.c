// 函数名称: sub_4ea280
// 虚拟地址: 0x4ea280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4ea280(int32_t arg1, int32_t** arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = arg2[3]
    int32_t* eax = arg2[3]
    
    if (eax[4] != 0xf)
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\windows\windowsdx11.cpp", 0x7eb, 
            "Dx11GraphicsSetGenericRenderState")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* esi = arg2[4]
    char const* const var_28_1
    int32_t var_24_1
    char const* const var_20
    char* ecx
    
    if (esi != 0)
    label_4ea2c9:
        
        if (esi[1] == 3)
            eax = *(*sub_4459f0(esi) + 0x18)
            
            if (eax == 5 || eax == 6)
                var_20 = "Dx11GraphicsSetGenericRenderState"
                var_24_1 = 0x7d1
                ecx = "!Dx11TextureIsView(assetTexture)"
                var_28_1 = "c:\ax2017\engine\windows\windowsdx11.cpp"
            else
                eax = sub_48f4d0(esi)
                void* ecx_4 = data_ce26f4 + 0x38
                int32_t* edi_1
                
                if (eax != 0)
                    uint32_t edx_1 = zx.d(eax.w)
                    
                    if (edx_1 u< *(ecx_4 + 4))
                        edi_1 = edx_1 * 0x24c + *ecx_4
                        
                        if (edi_1[0x92] != eax)
                            edi_1 = nullptr
                    else
                        edi_1 = nullptr
                else
                    edi_1 = nullptr
                
                if (*edi_1 == 2)
                    eax = sub_4ebfd0(ecx_4, *(arg3 + 0xe40))
                    int32_t* var_10_1 = eax
                    
                    if (*eax == 5)
                        eax = *arg2
                        int32_t* var_8_1 = eax
                        
                        if (esi[1] == 3)
                            eax = *(*sub_4459f0(esi) + 0x18)
                            
                            if (eax == 0 || eax == 3)
                                eax = var_8_1 - 0x53
                                
                                if (eax u<= 7)
                                label_4ea408:
                                    int32_t var_c = var_10_1[eax + 0xd]
                                    
                                    if (arg4 == 3)
                                        int32_t* ecx_7 = *(data_ce26f4 + 8)
                                        (*(*ecx_7 + 0x68))(ecx_7, arg2[1], 1, &var_c)
                                        int32_t* ecx_8 = *(data_ce26f4 + 8)
                                        return (*(*ecx_8 + 0x64))(ecx_8, arg2[1], 1, &edi_1[8])
                                    
                                    if (arg4 != 4)
                                        return arg4
                                    
                                    int32_t* ecx_9 = *(data_ce26f4 + 8)
                                    (*(*ecx_9 + 0x28))(ecx_9, arg2[1], 1, &var_c)
                                    int32_t* ecx_10 = *(data_ce26f4 + 8)
                                    return (*(*ecx_10 + 0x20))(ecx_10, arg2[1], 1, &edi_1[8])
                                
                                var_20 = "Dx11GetSamplerIndex"
                                var_24_1 = 0x7a2
                                ecx = "samplerIndex >= 0 && samplerIndex <= NUM_SAMPLER_STATES - 1"
                            else if (eax != 1)
                                var_20 = "Dx11GetSamplerIndex"
                                var_24_1 = 0x7bc
                                ecx = "Halt"
                            else
                                eax = var_8_1 - 0x53
                                
                                if (eax u<= 7)
                                    goto label_4ea408
                                
                                var_20 = "Dx11GetSamplerIndex"
                                var_24_1 = 0x7b6
                                ecx = "samplerIndex >= 0 && samplerIndex <= NUM_SAMPLER_STATES - 1"
                            
                            var_28_1 = "c:\ax2017\engine\windows\windowsdx11.cpp"
                        else
                            var_20 = "TextureGetDef"
                            var_24_1 = 0x84
                            var_28_1 = "c:\ax2017\engine\texture.h"
                            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
                    else
                        var_20 = "Dx11GraphicsSetGenericRenderState"
                        var_24_1 = 0x7d8
                        ecx = "bufferDataMaterial->mBufferType == DX11BUFFER_MATERIAL"
                        var_28_1 = "c:\ax2017\engine\windows\windowsdx11.cpp"
                else
                    var_20 = "Dx11GraphicsSetGenericRenderState"
                    var_24_1 = 0x7d5
                    ecx = "bufferDataTexture->mBufferType == DX11BUFFER_TEXTURE"
                    var_28_1 = "c:\ax2017\engine\windows\windowsdx11.cpp"
        else
            var_20 = "TextureGetDef"
            var_24_1 = 0x84
            var_28_1 = "c:\ax2017\engine\texture.h"
            ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        eax = sub_48d5b0("!DX11\MissingTexture.texture", esi + 3)
        esi = eax
        
        if (esi != 0)
            goto label_4ea2c9
        
        var_20 = "Dx11GraphicsSetGenericRenderState"
        var_24_1 = 0x7ce
        ecx = "assetTexture"
        var_28_1 = "c:\ax2017\engine\windows\windowsdx11.cpp"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_28_1, var_24_1, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
