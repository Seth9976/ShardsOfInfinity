// 函数名称: sub_450360
// 虚拟地址: 0x450360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_450360(int128_t* arg1, uint32_t arg2)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = sub_450150()
    uint32_t (* eax)[0x4] = sub_450150()
    uint32_t (* var_8)[0x4] = eax
    (*eax)[1] = arg2
    *eax = *(arg1 + 0x48)
    (*eax)[2] = 0
    *(eax + 0x7e94) = *arg1
    
    if ((*eax)[1] s> 0x3e8)
        return sub_429090(data_65acf4 + 0x38, &var_8)
    
    sub_44e4d0(eax, &data_5559b1, "netMessage->messageType > NETMSG_MIN_VALUE", 
        "c:\ax2017\engine\network.cpp", 0x148, "MessageQueueAppendSimpleMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
