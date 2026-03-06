// 函数名称: sub_48f560
// 虚拟地址: 0x48f560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48f560(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t edx = *(arg1 + 4)
    
    if (edx != 0)
        (*(*data_ce19b4 + 0x14))(edx)
        *(arg1 + 4) = 0
    
    int32_t result = *(arg1 + 8)
    
    if (result != 0)
        result = _aligned_free_base(result)
        *(arg1 + 8) = 0
    
    if (*(arg1 + 0xc) == 0)
        return result
    
    int32_t eax_4 = EnterCriticalSection(data_cdf458 + 4)
    void* ebx
    ebx:1.b = 1
    
    while (true)
        ebx.b = 0
        int32_t edi_1 = 0
        
        while (true)
            int32_t esi_1 = data_cdf458
            
            if (*(edi_1 + esi_1 + 0x24) == 0)
                goto label_48f619
            
            int32_t* ecx_1 = *(edi_1 + esi_1 + 0x28)
            char const* const var_20
            int32_t var_1c
            char const* const var_18_7
            char* ecx_3
            
            if (ecx_1[1] != 3)
                var_18_7 = "TextureGetDef"
                var_1c = 0x84
                var_20 = "c:\ax2017\engine\texture.h"
                ecx_3 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            label_48f69a:
                sub_44e4d0(eax_4, &data_5559b1, ecx_3, var_20, var_1c, var_18_7)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            eax_4 = sub_4459f0(ecx_1)
            
            if (eax_4 != arg1)
                goto label_48f619
            
            ebx.b = 1
            
            if (*(edi_1 + esi_1 + 0x24) == 1)
                LeaveCriticalSection(data_cdf458 + 4)
                Sleep(0x64)
                eax_4 = EnterCriticalSection(data_cdf458 + 4)
            else
                ebx:1.b = 0
                eax_4 = sub_48f2a0(*(edi_1 + esi_1 + 0x28))
                *(edi_1 + esi_1 + 0x24) = 0
                *(edi_1 + esi_1 + 0x28) = 0
            label_48f619:
                edi_1 += 8
                
                if (edi_1 s< 0x50)
                    continue
                else if (ebx.b == 0)
                    var_18_7 = "TextureUnbindGraphicsBuffers"
                    var_1c = 0x34d
                    var_20 = "c:\ax2017\engine\texture.cpp"
                    ecx_3 = "foundIt"
                    goto label_48f69a
            
            if (ebx:1.b != 0)
                break
            
            return LeaveCriticalSection(data_cdf458 + 4)
}
