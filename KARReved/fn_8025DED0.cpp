//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254CD8.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8024F488.hpp"



void fn_8025DED0(PPC::Runtime::GCContext* context)
{
/*8025DED0 0025ACD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025DED4 0025ACD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025DED8 0025ACD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025DEDC 0025ACDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025DEE0 0025ACE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025DEE4 0025ACE4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025DEE8 0025ACE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025DEEC 0025ACEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025DEF0 0025ACF0*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*8025DEF4 0025ACF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025DEF8 0025ACF8*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025DEFC 0025ACFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8025DF00 0025AD00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025DF04 0025AD04*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025DF08 0025AD08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8025DF0C 0025AD0C*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025DF10 0025AD10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*8025DF14 0025AD14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025DF18 0025AD18*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025DF1C 0025AD1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*8025DF20 0025AD20*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025DF24 0025AD24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8025DF28 0025AD28*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025DF2C 0025AD2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025DF30 0025AD30*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8025DF34 0025AD34*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025DF38 0025AD38*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025DF3C 0025AD3C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025DF40 0025AD40*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025DF44 0025AD44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8025DF48 0025AD48*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025DF4C 0025AD4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025DF50 0025AD50*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025DF54 0025AD54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025DF58 0025AD58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025DF5C 0025AD5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025DF60 0025AD60*/ PPC::Runtime::ASM::blr();
}