//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_801C19C8.hpp"
#include "fn_801A01A0.hpp"



void fn_801C3B38(PPC::Runtime::GCContext* context)
{
/*801C3B38 001C0938*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3B3C 001C093C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3B40 001C0940*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3B44 001C0944*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3B48 001C0948*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C3B4C 001C094C*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801C3B50 001C0950*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3B54 001C0954*/ PPC::Runtime::ASM::beq(.L_801C3B64);
/*801C3B58 001C0958*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3B5C 001C095C*/ PPC::Runtime::ASM::bl(fn_801C19C8);
/*801C3B60 001C0960*/ PPC::Runtime::ASM::b(.L_801C3B6C);
RUNTIME_PPC_JUMP_LABEL(.L_801C3B64, 0x801C3B64) //this is a jump label
/*801C3B64 001C0964*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3B68 001C0968*/ PPC::Runtime::ASM::bl(fn_801A01A0);
RUNTIME_PPC_JUMP_LABEL(.L_801C3B6C, 0x801C3B6C) //this is a jump label
/*801C3B6C 001C096C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3B70 001C0970*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3B74 001C0974*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3B78 001C0978*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C3B7C 001C097C*/ PPC::Runtime::ASM::blr();
}