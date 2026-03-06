// 函数名称: sub_481c70
// 虚拟地址: 0x481c70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_481c70(int32_t arg1, char* arg2)
{
    // 第一条实际指令: EnterCriticalSection(data_cdf440 + 0x268)
    EnterCriticalSection(data_cdf440 + 0x268)
    void* edi = data_cdf440
    
    if (*(edi + 0x260) - *(edi + 0x264) s>= 8)
        sub_44e260("too many queued notifications")
        edi = data_cdf440
    
    int32_t ecx = *(edi + 0x260)
    *(edi + 0x260) = ecx + 1
    int32_t ecx_1 = ecx & 0x80000007
    
    if (ecx_1 s< 0)
        ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1
    
    void* esi_1 = ecx_1 * 0x4c + edi
    sub_44f590(esi_1, "Hi!")
    sub_44f590(esi_1 + 4, arg2)
    CRITICAL_SECTION* lpCriticalSection = data_cdf440 + 0x268
    *(esi_1 + 0x48) = 0
    return LeaveCriticalSection(lpCriticalSection)
}
