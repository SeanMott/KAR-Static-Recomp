//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B7FD4.hpp"
#include "fn_800B8054.hpp"
#include "fn_80052FB8.hpp"
#include "fn_800537AC.hpp"



void fn_8024FE38(PPC::Runtime::GCContext* context)
{
/*8024FE38 0024CC38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8024FE3C 0024CC3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024FE40 0024CC40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8024FE44 0024CC44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8024FE48 0024CC48*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8024FE4C 0024CC4C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024FE50 0024CC50*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8024FE54 0024CC54*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8024FE58 0024CC58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r3));
/*8024FE5C 0024CC5C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8024FE60 0024CC60*/ PPC::Runtime::ASM::bne(.L_8024FECC);
/*8024FE64 0024CC64*/ PPC::Runtime::ASM::bl(fn_COBJ_GetCurrent);
/*8024FE68 0024CC68*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8024FE6C 0024CC6C*/ PPC::Runtime::ASM::bl(fn_800B7FD4);
/*8024FE70 0024CC70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8024FE74 0024CC74*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8024FE78 0024CC78*/ PPC::Runtime::ASM::b(.L_8024FEC4);
RUNTIME_PPC_JUMP_LABEL(.L_8024FE7C, 0x8024FE7C) //this is a jump label
/*8024FE7C 0024CC7C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8024FE80 0024CC80*/ PPC::Runtime::ASM::bl(fn_800B8054);
/*8024FE84 0024CC84*/ PPC::Runtime::ASM::cmplw(context->r3, context->r30);
/*8024FE88 0024CC88*/ PPC::Runtime::ASM::bne(.L_8024FEC0);
/*8024FE8C 0024CC8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r28));
/*8024FE90 0024CC90*/ PPC::Runtime::ASM::cmpw(context->r0, context->r29);
/*8024FE94 0024CC94*/ PPC::Runtime::ASM::bne(.L_8024FEAC);
/*8024FE98 0024CC98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8024FE9C 0024CC9C*/ PPC::Runtime::ASM::lis(context->r4, 0x800);
/*8024FEA0 0024CCA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8024FEA4 0024CCA4*/ PPC::Runtime::ASM::bl(fn_80052FB8);
/*8024FEA8 0024CCA8*/ PPC::Runtime::ASM::b(.L_8024FECC);
RUNTIME_PPC_JUMP_LABEL(.L_8024FEAC, 0x8024FEAC) //this is a jump label
/*8024FEAC 0024CCAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8024FEB0 0024CCB0*/ PPC::Runtime::ASM::lis(context->r4, 0x800);
/*8024FEB4 0024CCB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8024FEB8 0024CCB8*/ PPC::Runtime::ASM::bl(fn_800537AC);
/*8024FEBC 0024CCBC*/ PPC::Runtime::ASM::b(.L_8024FECC);
RUNTIME_PPC_JUMP_LABEL(.L_8024FEC0, 0x8024FEC0) //this is a jump label
/*8024FEC0 0024CCC0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024FEC4, 0x8024FEC4) //this is a jump label
/*8024FEC4 0024CCC4*/ PPC::Runtime::ASM::cmpw(context->r29, context->r31);
/*8024FEC8 0024CCC8*/ PPC::Runtime::ASM::blt(.L_8024FE7C);
RUNTIME_PPC_JUMP_LABEL(.L_8024FECC, 0x8024FECC) //this is a jump label
/*8024FECC 0024CCCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8024FED0 0024CCD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8024FED4 0024CCD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8024FED8 0024CCD8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024FEDC 0024CCDC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8024FEE0 0024CCE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024FEE4 0024CCE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8024FEE8 0024CCE8*/ PPC::Runtime::ASM::blr();
}