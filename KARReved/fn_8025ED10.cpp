//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_8025ED10(PPC::Runtime::GCContext* context)
{
/*8025ED10 0025BB10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025ED14 0025BB14*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025ED18 0025BB18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025ED1C 0025BB1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025ED20 0025BB20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025ED24 0025BB24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025ED28 0025BB28*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8025ED2C 0025BB2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025ED30 0025BB30*/ PPC::Runtime::ASM::bl(fn_80250400);
/*8025ED34 0025BB34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025ED38 0025BB38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025ED3C 0025BB3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025ED40 0025BB40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025ED44 0025BB44*/ PPC::Runtime::ASM::blr();
}