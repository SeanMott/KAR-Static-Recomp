//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80005CBC.hpp"



void fn_8000A5C4(PPC::Runtime::GCContext* context)
{
/*8000A5C4 000073C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000A5C8 000073C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000A5CC 000073CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A5D0 000073D0*/ PPC::Runtime::ASM::bl(fn_80005CBC);
/*8000A5D4 000073D4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8000A5D8 000073D8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8000A5DC 000073DC*/ PPC::Runtime::ASM::bgt(.L_8000A5E8);
/*8000A5E0 000073E0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8000A5E4 000073E4*/ PPC::Runtime::ASM::b(.L_8000A5F4);
RUNTIME_PPC_JUMP_LABEL(.L_8000A5E8, 0x8000A5E8) //this is a jump label
/*8000A5E8 000073E8*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8000A5EC 000073EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8000A5F0 000073F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8000A5F4, 0x8000A5F4) //this is a jump label
/*8000A5F4 000073F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A5F8 000073F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000A5FC 000073FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000A600 00007400*/ PPC::Runtime::ASM::blr();
}