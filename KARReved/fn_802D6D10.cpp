//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D6D10(PPC::Runtime::GCContext* context)
{
/*802D6D10 002D3B10*/ PPC::Runtime::ASM::lfs(context->f1, lbl_805D9050 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D6D14 002D3B14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802D6D18 002D3B18*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D6D1C 002D3B1C*/ PPC::Runtime::ASM::bge(.L_802D6D28);
/*802D6D20 002D3B20*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9050 @ Get_MemoryOffset_SDA21);
/*802D6D24 002D3B24*/ PPC::Runtime::ASM::b(.L_802D6D2C);
RUNTIME_PPC_JUMP_LABEL(.L_802D6D28, 0x802D6D28) //this is a jump label
/*802D6D28 002D3B28*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2c);
RUNTIME_PPC_JUMP_LABEL(.L_802D6D2C, 0x802D6D2C) //this is a jump label
/*802D6D2C 002D3B2C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D6D30 002D3B30*/ PPC::Runtime::ASM::lfs(context->f0, lbl_805D9054 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D6D34 002D3B34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D6D38 002D3B38*/ PPC::Runtime::ASM::bge(.L_802D6D40);
/*802D6D3C 002D3B3C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9054 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_802D6D40, 0x802D6D40) //this is a jump label
/*802D6D40 002D3B40*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D6D44 002D3B44*/ PPC::Runtime::ASM::blr();
}