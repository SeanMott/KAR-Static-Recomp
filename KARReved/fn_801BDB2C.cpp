//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80193900.hpp"
#include "fn_80193830.hpp"
#include "fn_80193004.hpp"



void fn_801BDB2C(PPC::Runtime::GCContext* context)
{
/*801BDB2C 001BA92C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BDB30 001BA930*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BDB34 001BA934*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDB38 001BA938*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BDB3C 001BA93C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BDB40 001BA940*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r3));
/*801BDB44 001BA944*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801BDB48 001BA948*/ PPC::Runtime::ASM::beq(.L_801BDB84);
/*801BDB4C 001BA94C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801BDB50 001BA950*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BDB54 001BA954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r31));
/*801BDB58 001BA958*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801BDB5C 001BA95C*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*801BDB60 001BA960*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*801BDB64 001BA964*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x944, context->r31));
/*801BDB68 001BA968*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*801BDB6C 001BA96C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x948, context->r31));
/*801BDB70 001BA970*/ PPC::Runtime::ASM::bl(fn_80193900);
/*801BDB74 001BA974*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BDB78 001BA978*/ PPC::Runtime::ASM::bl(fn_80193830);
/*801BDB7C 001BA97C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BDB80 001BA980*/ PPC::Runtime::ASM::bl(fn_80193004);
RUNTIME_PPC_JUMP_LABEL(.L_801BDB84, 0x801BDB84) //this is a jump label
/*801BDB84 001BA984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDB88 001BA988*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BDB8C 001BA98C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BDB90 001BA990*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BDB94 001BA994*/ PPC::Runtime::ASM::blr();
}