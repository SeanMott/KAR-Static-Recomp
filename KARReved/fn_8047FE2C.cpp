//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_IPSetConfigError.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047FCFC.hpp"



void fn_8047FE2C(PPC::Runtime::GCContext* context)
{
/*8047FE2C 0047CC2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047FE30 0047CC30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047FE34 0047CC34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*8047FE38 0047CC38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047FE3C 0047CC3C*/ PPC::Runtime::ASM::subi(context->r31, context->r3, 0x10);
/*8047FE40 0047CC40*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60c, context->r3));
/*8047FE44 0047CC44*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8047FE48 0047CC48*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c, context->r31));
/*8047FE4C 0047CC4C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c, context->r31));
/*8047FE50 0047CC50*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*8047FE54 0047CC54*/ PPC::Runtime::ASM::ble(.L_8047FE94);
/*8047FE58 0047CC58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*8047FE5C 0047CC5C*/ PPC::Runtime::ASM::li(context->r4, -0x67);
/*8047FE60 0047CC60*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*8047FE64 0047CC64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10);
/*8047FE68 0047CC68*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8047FE6C 0047CC6C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047FE70 0047CC70*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8047FE74 0047CC74*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8047FE78 0047CC78*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8047FE7C 0047CC7C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*8047FE80 0047CC80*/ PPC::Runtime::ASM::li(context->r0, 0x5dc);
/*8047FE84 0047CC84*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8047FE88 0047CC88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*8047FE8C 0047CC8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r3));
/*8047FE90 0047CC90*/ PPC::Runtime::ASM::b(.L_8047FEA0);
RUNTIME_PPC_JUMP_LABEL(.L_8047FE94, 0x8047FE94) //this is a jump label
/*8047FE94 0047CC94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*8047FE98 0047CC98*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8047FE9C 0047CC9C*/ PPC::Runtime::ASM::bl(fn_8047FCFC);
RUNTIME_PPC_JUMP_LABEL(.L_8047FEA0, 0x8047FEA0) //this is a jump label
/*8047FEA0 0047CCA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047FEA4 0047CCA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047FEA8 0047CCA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*8047FEAC 0047CCAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047FEB0 0047CCB0*/ PPC::Runtime::ASM::blr();
}