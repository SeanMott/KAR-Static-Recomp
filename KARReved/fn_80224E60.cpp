//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80221D78.hpp"
#include "fn_80222144.hpp"
#include "fn_802221B8.hpp"
#include "fn_80220250.hpp"
#include "fn_80222F00.hpp"
#include "fn_80224EF8.hpp"



void fn_80224E60(PPC::Runtime::GCContext* context)
{
/*80224E60 00221C60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80224E64 00221C64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80224E68 00221C68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80224E6C 00221C6C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80224E70 00221C70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80224E74 00221C74*/ PPC::Runtime::ASM::bl(fn_80221D78);
/*80224E78 00221C78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b5, context->r31));
/* 80224E7C 00221C7C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*80224E80 00221C80*/ PPC::Runtime::ASM::beq(.L_80224EE0);
/*80224E84 00221C84*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2938 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80224E88 00221C88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80224E8C 00221C8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*80224E90 00221C90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80224E94 00221C94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*80224E98 00221C98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*80224E9C 00221C9C*/ PPC::Runtime::ASM::bl(fn_80222144);
/*80224EA0 00221CA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80224EA4 00221CA4*/ PPC::Runtime::ASM::beq(.L_80224EE0);
/*80224EA8 00221CA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80224EAC 00221CAC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80224EB0 00221CB0*/ PPC::Runtime::ASM::bl(fn_802221B8);
/*80224EB4 00221CB4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80224EB8 00221CB8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd0);
/*80224EBC 00221CBC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80224EC0 00221CC0*/ PPC::Runtime::ASM::bl(fn_80220250);
/*80224EC4 00221CC4*/ PPC::Runtime::ASM::lis(context->r4, 0x2);
/*80224EC8 00221CC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80224ECC 00221CCC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x55);
/*80224ED0 00221CD0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80224ED4 00221CD4*/ PPC::Runtime::ASM::bl(fn_80222F00);
/*80224ED8 00221CD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80224EDC 00221CDC*/ PPC::Runtime::ASM::bl(fn_80224EF8);
RUNTIME_PPC_JUMP_LABEL(.L_80224EE0, 0x80224EE0) //this is a jump label
/*80224EE0 00221CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80224EE4 00221CE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80224EE8 00221CE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80224EEC 00221CEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80224EF0 00221CF0*/ PPC::Runtime::ASM::blr();
}