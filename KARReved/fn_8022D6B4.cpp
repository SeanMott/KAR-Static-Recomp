//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019248C.hpp"



void fn_8022D6B4(PPC::Runtime::GCContext* context)
{
/*8022D6B4 0022A4B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022D6B8 0022A4B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022D6BC 0022A4BC*/ PPC::Runtime::ASM::mulli(context->r3, context->r3, 0x90c);
/*8022D6C0 0022A4C0*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_HighBit);
/*8022D6C4 0022A4C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D6C8 0022A4C8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8022D6CC 0022A4CC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, STRUCT_BYTE4_COUNT_18055A9F0 @ Get_MemoryOffset_LowBit);
/*8022D6D0 0022A4D0*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r3);
/*8022D6D4 0022A4D4*/ PPC::Runtime::ASM::bne(.L_8022D6EC);
/*8022D6D8 0022A4D8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r5));
/*8022D6DC 0022A4DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022D6E0 0022A4E0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 22, 24);
/*8022D6E4 0022A4E4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r5));
/*8022D6E8 0022A4E8*/ PPC::Runtime::ASM::b(.L_8022D6FC);
RUNTIME_PPC_JUMP_LABEL(.L_8022D6EC, 0x8022D6EC) //this is a jump label
/*8022D6EC 0022A4EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r5));
/*8022D6F0 0022A4F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8022D6F4 0022A4F4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 27, 29);
/*8022D6F8 0022A4F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8022D6FC, 0x8022D6FC) //this is a jump label
/*8022D6FC 0022A4FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r5));
/*8022D700 0022A500*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8022D704 0022A504*/ PPC::Runtime::ASM::beq(.L_8022D70C);
/*8022D708 0022A508*/ PPC::Runtime::ASM::bl(fn_8019248C);
RUNTIME_PPC_JUMP_LABEL(.L_8022D70C, 0x8022D70C) //this is a jump label
/*8022D70C 0022A50C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022D710 0022A510*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022D714 0022A514*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022D718 0022A518*/ PPC::Runtime::ASM::blr();
}