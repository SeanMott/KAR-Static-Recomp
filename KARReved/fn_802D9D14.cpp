//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802D9D14(PPC::Runtime::GCContext* context)
{
/*802D9D14 002D6B14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r3));
/*802D9D18 002D6B18*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802D9D1C 002D6B1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D9D20 002D6B20*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802D9D24 002D6B24*/ PPC::Runtime::ASM::bne(.L_802D9D4C);
/*802D9D28 002D6B28*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3780 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D9D2C 002D6B2C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r3));
/*802D9D30 002D6B30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D9D34 002D6B34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D9D38 002D6B38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D9D3C 002D6B3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D9D40 002D6B40*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D9D44 002D6B44*/ PPC::Runtime::ASM::ble(.L_802D9D4C);
/*802D9D48 002D6B48*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802D9D4C, 0x802D9D4C) //this is a jump label
/*802D9D4C 002D6B4C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802D9D50 002D6B50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D9D54 002D6B54*/ PPC::Runtime::ASM::blr();
}