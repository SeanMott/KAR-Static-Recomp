//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_801660B8(PPC::Runtime::GCContext* context)
{
/*801660B8 00162EB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801660BC 00162EBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801660C0 00162EC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801660C4 00162EC4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801660C8 00162EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa10, context->r3));
/*801660CC 00162ECC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801660D0 00162ED0*/ PPC::Runtime::ASM::beq(.L_801660D8);
/*801660D4 00162ED4*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_801660D8, 0x801660D8) //this is a jump label
/*801660D8 00162ED8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801660DC 00162EDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801660E0 00162EE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801660E4 00162EE4*/ PPC::Runtime::ASM::blr();
}