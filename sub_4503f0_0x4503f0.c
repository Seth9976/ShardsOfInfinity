// 函数名称: sub_4503f0
// 虚拟地址: 0x4503f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4503f0(int128_t* arg1)
{
    // 第一条实际指令: int128_t* var_4 = arg1
    int128_t* var_4 = arg1
    void* result = *(arg1 + 0x24)
    
    if (result != 5)
        if (result != 4 && result != 2 && result != 3)
            sub_44e4d0(result, &data_5559b1, 
                "loc.connectStatus == NETWORK_CONNECT_OPEN || loc.connectStatus == NETWORK_CONNECT_WAITING "
            "|| loc.connectStatus == NETWORK_CONNECT_WAITING_SSL", 
                "c:\ax2017\engine\network.cpp", 0x156, "NetConnectionClosed")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = *(arg1 + 0x28)
        *(arg1 + 0x24) = 5
        
        if (result == 2)
            return sub_450360(arg1, 0x3ec)
        
        if (result == 1)
            return sub_450360(arg1, 0x5de)
        
        if (result == 3)
            return sub_450360(arg1, 0xfa2)
    
    return result
}
