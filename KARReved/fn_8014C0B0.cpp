//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_8014C0B0(PPC::Runtime::GCContext* context)
{
/*8014C0B0 00148EB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014C0B4 00148EB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014C0B8 00148EB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C0BC 00148EBC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014C0C0 00148EC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r3));
/*8014C0C4 00148EC4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014C0C8 00148EC8*/ PPC::Runtime::ASM::beq(.L_8014C0D0);
/*8014C0CC 00148ECC*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_8014C0D0, 0x8014C0D0) //this is a jump label
/*8014C0D0 00148ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C0D4 00148ED4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014C0D8 00148ED8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014C0DC 00148EDC*/ PPC::Runtime::ASM::blr();
}