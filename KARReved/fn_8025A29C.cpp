//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_8025A29C(PPC::Runtime::GCContext* context)
{
/*8025A29C 0025709C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025A2A0 002570A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025A2A4 002570A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A2A8 002570A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025A2AC 002570AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025A2B0 002570B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025A2B4 002570B4*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8025A2B8 002570B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025A2BC 002570BC*/ PPC::Runtime::ASM::bl(fn_80250400);
/*8025A2C0 002570C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A2C4 002570C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025A2C8 002570C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025A2CC 002570CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025A2D0 002570D0*/ PPC::Runtime::ASM::blr();
}