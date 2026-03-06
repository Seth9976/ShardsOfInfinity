// 函数名称: ___scrt_acquire_startup_lock
// 虚拟地址: 0x51b682
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___scrt_acquire_startup_lock()
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (___asan_report_present() != 0)
        TEB* fsbase
        void* StackBase = fsbase->NtTib.Self->NtTib.StackBase
        
        while (true)
            result = 0
            
            if (0 == data_659f8c)
                data_659f8c = StackBase
            else
                result = data_659f8c
            
            if (result == 0)
                break
            
            if (StackBase == result)
                result.b = 1
                return result
    
    result.b = 0
    return result
}
