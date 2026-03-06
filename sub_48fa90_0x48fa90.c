// 函数名称: sub_48fa90
// 虚拟地址: 0x48fa90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t** __fastcallsub_48fa90(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 0x22)
    if (arg1 u> 0x22)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
            "c:\ax2017\engine\assettyperegistry.cpp", 0xb6, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* esi = data_cdf47c
    int32_t* edi = *(esi + 0x10)
    char** ebx = *((arg1 << 5) + data_cdf880 + 0x1c)
    *(esi + 0x1c) += 1
    
    if (edi == 0)
        sub_494310(esi + 0x10)
        edi = *(esi + 0x10)
    
    *(esi + 0x10) = *edi
    edi[2] = 0
    edi[3] = 0
    *edi = &data_5559b1
    edi[1] = 0
    edi[2] = 0
    edi[3] = 0
    edi[4] = ebx
    sub_44f590(edi, *ebx)
    int32_t** result = sub_45cd70(0x10)
    *result = zx.o(0)
    result[3] = ebx
    result[1] = edi
    *result = sub_492a80(edi, ebx)
    return result
}
