// 函数名称: sub_4ebbe0
// 虚拟地址: 0x4ebbe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4ebbe0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8 = eax_1
    char const* const var_70
    int32_t var_6c
    char const* const var_68
    char* ecx
    
    if (arg1[1] == 3)
        int32_t* eax_2 = sub_4459f0(arg1)
        int32_t var_34
        _memset(&var_34, 0, 0x2c)
        var_34 = **eax_2
        int32_t var_30_1 = *(*eax_2 + 4)
        int32_t var_2c_1 = 1
        int32_t var_28_1 = 1
        int32_t var_24_1 = sub_4e7c30(*(*eax_2 + 0x14))
        int32_t var_20_1 = 1
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 3
        int32_t var_10_1 = 0x20000
        int32_t var_c_1 = 0
        int32_t* eax_7 = *(data_ce26f4 + 4)
        int32_t* var_38
        eax_1 = (*(*eax_7 + 0x14))(eax_7, &var_34, 0, &var_38)
        
        if (eax_1 s>= 0)
            int32_t* eax_8 = sub_48f4d0(arg1)
            void* ecx_7 = data_ce26f4
            void* const edx
            
            if (eax_8 != 0)
                uint32_t edx_1 = zx.d(eax_8.w)
                
                if (edx_1 u< *(ecx_7 + 0x3c))
                    edx = edx_1 * 0x24c + *(ecx_7 + 0x38)
                    
                    if (*(edx + 0x248) != eax_8)
                        edx = nullptr
                else
                    edx = nullptr
            else
                edx = nullptr
            
            int32_t* eax_9 = *(ecx_7 + 8)
            (*(*eax_9 + 0xbc))(eax_9, var_38, *(edx + 0x1c))
            void* eax_10 = data_ce26f4
            int32_t var_3c_1 = 0
            int64_t var_44 = 0
            int32_t* eax_11 = *(eax_10 + 8)
            eax_1 = (*(*eax_11 + 0x38))(eax_11, var_38, 0, 1, 0, &var_44)
            
            if (eax_1 s>= 0)
                bool cond:0_1 = *arg2 != 0
                int32_t* ecx_10 = *eax_2
                int32_t var_58 = var_44.d
                int32_t edi_1 = *ecx_10
                int32_t edx_3 = ecx_10[1]
                int32_t var_4c_1 = var_44:4.d
                eax_1 = ecx_10[5]
                int32_t var_54_1 = edi_1
                int32_t var_50_1 = edx_3
                int32_t var_48_1 = eax_1
                
                if (not(cond:0_1))
                    var_68 = "Dx11GetTextureBits"
                    var_6c = 0xa83
                    ecx = "destSpec->pImage"
                else if (arg2[1] == edi_1)
                    if (arg2[2] == edx_3)
                        sub_4ddd60(&var_58, arg2)
                        int32_t* eax_15 = *(data_ce26f4 + 8)
                        (*(*eax_15 + 0x3c))(eax_15, var_38, 0)
                        int32_t* eax_16 = var_38
                        int32_t result = (*(*eax_16 + 8))(eax_16)
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return result
                    
                    var_68 = "Dx11GetTextureBits"
                    var_6c = 0xa85
                    ecx = "destSpec->height == sourceSpec.height"
                else
                    var_68 = "Dx11GetTextureBits"
                    var_6c = 0xa84
                    ecx = "destSpec->width == sourceSpec.width"
            else
                var_68 = "Dx11GetTextureBits"
                var_6c = 0xa7a
                ecx = "SUCCEEDED(hr)"
        else
            var_68 = "Dx11GetTextureBits"
            var_6c = 0xa71
            ecx = "SUCCEEDED(hr)"
        
        var_70 = "c:\ax2017\engine\windows\windowsdx11.cpp"
    else
        var_68 = "TextureGetDef"
        var_6c = 0x84
        var_70 = "c:\ax2017\engine\texture.h"
        ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, var_70, var_6c, var_68)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
