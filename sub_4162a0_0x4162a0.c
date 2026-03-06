// 函数名称: sub_4162a0
// 虚拟地址: 0x4162a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4162a0()
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    
    if (data_e47c10 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e47c10)
        
        if (data_e47c10 == 0xffffffff)
            data_e47c20 = &HitResult::`vftable'{for `InputHitResult'}
            data_e47c2c = &UI2HitResult::`vftable'{for `InputHitResult'}
            data_e47c30 = 0
            data_e47c24 = 0
            data_e47c4c = &HitResult::`vftable'{for `InputHitResult'}
            data_e47c58 = &UI2HitResult::`vftable'{for `InputHitResult'}
            data_e47c5c = 0
            data_e47c50 = 0
            __Init_thread_footer(&data_e47c10)
    
    return &data_e47c18
}
