// 函数名称: sub_4f4410
// 虚拟地址: 0x4f4410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4f4410(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ecx = *arg1
    int32_t* ecx = *arg1
    
    if (ecx[1] != 0x18)
        sub_44e4d0(arg1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* result
    int32_t xmm0[0x4]
    result, xmm0 = sub_4459f0(ecx)
    void* result_2 = result
    int32_t i = 0
    void* result_3 = result_2
    
    if (*(result_2 + 0x14) s> 0)
        int32_t esi_1 = 0
        result = nullptr
        void* result_1 = nullptr
        
        do
            void* ebx_2 = *(result_2 + 0x10) + result
            void* eax_1
            eax_1, xmm0 = _strstr(xmm0, *ebx_2, "eyelid")
            void* eax_2
            
            if (eax_1 == 0)
                eax_2, xmm0 = _strstr(xmm0, *ebx_2, "eye_lid")
            
            if (eax_1 != 0 || eax_2 != 0)
                *(arg1[0x1a] + esi_1 + 0x54) = arg2
            
            result_2 = result_3
            i += 1
            esi_1 += 0x60
            result = result_1 + 0x14
            result_1 = result
        while (i s< *(result_2 + 0x14))
    
    return result
}
