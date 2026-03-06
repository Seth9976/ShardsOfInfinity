// 函数名称: sub_48b760
// 虚拟地址: 0x48b760
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_48b760(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4, int32_t arg5, char* arg6)
{
    // 第一条实际指令: int32_t* esi = *arg2
    int32_t* esi = *arg2
    uint32_t result = *(esi + arg6)
    void* ebx = esi + arg3
    arg6 = result
    
    if (arg5 == 0)
        *ebx = arg5
        return result
    
    if ((arg2[0xa] & 0x100) != 0 && result u<= 0x100000)
        return result
    
    void* eax_1 = arg2[6]
    int32_t esi_1 = *(eax_1 + 0xc)
    
    if (esi_1 != 0)
        void* esi_2 = esi_1 * arg5
        char* eax_2 = sub_45cd70(esi_2)
        *ebx = eax_2
        return sub_48b690(sub_51d5b0(eax_2, arg6, esi_2), arg5, *ebx, arg2, arg4, arg6)
    
    sub_44e4d0(eax_1, &data_5559b1, "pDefMap->definitionSize != 0", "c:\ax2017\engine\definition.cpp", 
        0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
