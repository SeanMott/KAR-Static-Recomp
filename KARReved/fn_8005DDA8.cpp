//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005D864.hpp"



void fn_8005DDA8(PPC::Runtime::GCContext* context)
{
/*8005DDA8 0005ABA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005DDAC 0005ABAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005DDB0 0005ABB0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8005DDB4 0005ABB4*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*8005DDB8 0005ABB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005DDBC 0005ABBC*/ PPC::Runtime::ASM::bl(fn_8005D864);
/*8005DDC0 0005ABC0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005DDC4 0005ABC4*/ PPC::Runtime::ASM::beq(.L_8005DE2C);
/*8005DDC8 0005ABC8*/ PPC::Runtime::ASM::mulli(context->r6, context->r3, 0xb8);
/*8005DDCC 0005ABCC*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005DDD0 0005ABD0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8005DDD4 0005ABD4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005DDD8 0005ABD8*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r6);
/*8005DDDC 0005ABDC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8005DDE0 0005ABE0*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x33c);
/*8005DDE4 0005ABE4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DDE8 0005ABE8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 0, 31, 31);
/*8005DDEC 0005ABEC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DDF0 0005ABF0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DDF4 0005ABF4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 3, 28, 28);
/*8005DDF8 0005ABF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DDFC 0005ABFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DE00 0005AC00*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 29, 29);
/*8005DE04 0005AC04*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DE08 0005AC08*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DE0C 0005AC0C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 1, 30, 30);
/*8005DE10 0005AC10*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DE14 0005AC14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DE18 0005AC18*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*8005DE1C 0005AC1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r6));
/*8005DE20 0005AC20*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r6));
/*8005DE24 0005AC24*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 7, 24, 24);
/*8005DE28 0005AC28*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_8005DE2C, 0x8005DE2C) //this is a jump label
/*8005DE2C 0005AC2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005DE30 0005AC30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005DE34 0005AC34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005DE38 0005AC38*/ PPC::Runtime::ASM::blr();
}