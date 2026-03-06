// 函数名称: sub_44f620
// 虚拟地址: 0x44f620
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __thiscallsub_44f620(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: if (*arg2 == 0)
    if (*arg2 == 0)
        return 
    
    char* eax_1 = *arg1
    
    if (eax_1 != 0 && *eax_1 != 0)
        char* esi = arg2
        char* ecx = *(sub_44f000(arg1) + 8)
        char* eax_2
        
        do
            eax_2.b = *esi
            esi = &esi[1]
        while (eax_2.b != 0)
        
        void* esi_1 = esi - &esi[1]
        sub_44f100(eax_2, esi_1 + ecx, arg1, 1)
        sub_51d5b0(*arg1 + ecx, arg2, esi_1 + 1)
        return 
    
    sub_44f240(arg1, arg2)
}
