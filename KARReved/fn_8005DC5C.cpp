//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005D864.hpp"



void fn_8005DC5C(PPC::Runtime::GCContext* context)
{
/*8005DC5C 0005AA5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005DC60 0005AA60*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005DC64 0005AA64*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8005DC68 0005AA68*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8005DC6C 0005AA6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005DC70 0005AA70*/ PPC::Runtime::ASM::bl(fn_8005D864);
/*8005DC74 0005AA74*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005DC78 0005AA78*/ PPC::Runtime::ASM::beq(.L_8005DCDC);
/*8005DC7C 0005AA7C*/ PPC::Runtime::ASM::mulli(context->r6, context->r3, 0xb8);
/*8005DC80 0005AA80*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005DC84 0005AA84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8005DC88 0005AA88*/ PPC::Runtime::ASM::addi(context->r0, context->r5, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005DC8C 0005AA8C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r6);
/*8005DC90 0005AA90*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x33c);
/*8005DC94 0005AA94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DC98 0005AA98*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*8005DC9C 0005AA9C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCA0 0005AAA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCA4 0005AAA4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*8005DCA8 0005AAA8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCAC 0005AAAC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCB0 0005AAB0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 29, 29);
/*8005DCB4 0005AAB4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCB8 0005AAB8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCBC 0005AABC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 1, 30, 30);
/*8005DCC0 0005AAC0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCC4 0005AAC4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCC8 0005AAC8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8005DCCC 0005AACC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r5));
/*8005DCD0 0005AAD0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r5));
/*8005DCD4 0005AAD4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*8005DCD8 0005AAD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8005DCDC, 0x8005DCDC) //this is a jump label
/*8005DCDC 0005AADC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005DCE0 0005AAE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005DCE4 0005AAE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005DCE8 0005AAE8*/ PPC::Runtime::ASM::blr();
}