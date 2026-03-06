// 函数名称: sub_4d5bc0
// 虚拟地址: 0x4d5bc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4d5bc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    void* eax_1 = eax
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (eax == 0)
    label_4d5c0f:
        void* edx_1 = data_cdf428
        
        if (edx_1 != 0)
            void* edx_2 = *(edx_1 + 0x14)
            uint32_t result = zx.d(arg1[0xc].w)
            int32_t ecx_5 = *(edx_2 + 0xc)
            *(edx_2 + 0xc) = result
            arg1[0xc] = ecx_5
            *(edx_2 + 0x10) -= 1
            return result
        
        var_8 = "GetGameData"
        var_c = 0x45
        var_10 = "c:\ax2017\engine\game.h"
        ecx = "gpGameData"
    else
        void* eax_2 = eax_1 - 1
        
        if (eax_1 == 1)
            eax_1 = sub_495430(arg1[1])
            
            if (eax_1 != 0)
                eax_1 = sub_4954d0(eax_1)
            
            goto label_4d5c0f
        
        eax_1 = eax_2 - 1
        
        if (eax_2 == 1)
            eax_1 = sub_4c0f50(arg1[2])
            
            if (eax_1 != 0)
                eax_1 = sub_4c0fc0(eax_1)
            
            goto label_4d5c0f
        
        var_8 = "AttachmentDestroy"
        var_c = 0x3f
        var_10 = "c:\ax2017\engine\attachment.cpp"
        ecx = "Halt"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
