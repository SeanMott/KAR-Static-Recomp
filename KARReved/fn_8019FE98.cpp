//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190948.hpp"
#include "fn_setStickXYandChargeBool.hpp"



void fn_8019FE98(PPC::Runtime::GCContext* context)
{
/*8019FE98 0019CC98*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8019FE9C 0019CC9C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019FEA0 0019CCA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019FEA4 0019CCA4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8019FEA8 0019CCA8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8019FEAC 0019CCAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019FEB0 0019CCB0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019FEB4 0019CCB4*/ PPC::Runtime::ASM::bl(fn_80190948);
/*8019FEB8 0019CCB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*8019FEBC 0019CCBC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8019FEC0 0019CCC0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019FEC4 0019CCC4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019FEC8 0019CCC8*/ PPC::Runtime::ASM::bl(fn_setStickXYandChargeBool);
/*8019FECC 0019CCCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8019FED0 0019CCD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019FED4 0019CCD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019FED8 0019CCD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8019FEDC 0019CCDC*/ PPC::Runtime::ASM::blr();
}