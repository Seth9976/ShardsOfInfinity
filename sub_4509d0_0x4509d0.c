// 函数名称: sub_4509d0
// 虚拟地址: 0x4509d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4509d0(int32_t** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t** var_8 = arg1
    int32_t** var_8 = arg1
    char const* const var_18
    int32_t var_14
    char const* const var_10_1
    void** eax
    char* ecx
    
    if (arg2 s<= 0xfde8)
        if (arg1[2] == 0)
            var_8 = sub_450070()
            return sub_429090(arg1, &var_8)
        
        eax = arg1[1]
        
        if (eax != 0)
            void* result = *eax
            
            if (0xfde8 - *(result + 0xfdec) - *(result + 0xfde8) s>= arg2)
                return result
            
            var_8 = sub_450070()
            return sub_429090(arg1, &var_8)
        
        var_10_1 = "XList<struct NetBuffer *>::GetTail"
        var_14 = 0x5a
        var_18 = "c:\ax2017\engine\xlist.h"
        ecx = "mpTail != NULL"
    else
        var_10_1 = "NetBufferMakeRoom"
        var_14 = 0x22e
        var_18 = "c:\ax2017\engine\network.cpp"
        ecx = "roomNeeded <= NETWORK_BUFFER_SIZE"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_18, var_14, var_10_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
