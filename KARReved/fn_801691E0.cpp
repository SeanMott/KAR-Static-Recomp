//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801691E0(PPC::Runtime::GCContext* context)
{
/*801691E0 00165FE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801691E4 00165FE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801691E8 00165FE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801691EC 00165FEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801691F0 00165FF0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801691F4 00165FF4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801691F8 00165FF8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801691FC 00165FFC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80169200 00166000*/ PPC::Runtime::ASM::add(context->r31, context->r3, context->r0);
/*80169204 00166004*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa78, context->r31));
/*80169208 00166008*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016920C 0016600C*/ PPC::Runtime::ASM::beq(.L_8016921C);
/*80169210 00166010*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80169214 00166014*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80169218 00166018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa78, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8016921C, 0x8016921C) //this is a jump label
/*8016921C 0016601C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80169220 00166020*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80169224 00166024*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80169228 00166028*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016922C 0016602C*/ PPC::Runtime::ASM::blr();
}