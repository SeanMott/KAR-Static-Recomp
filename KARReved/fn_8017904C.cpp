//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_8017904C(PPC::Runtime::GCContext* context)
{
/*8017904C 00175E4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80179050 00175E50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80179054 00175E54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80179058 00175E58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017905C 00175E5C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80179060 00175E60*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80179064 00175E64*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80179068 00175E68*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xd8c);
/*8017906C 00175E6C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80179070 00175E70*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*80179074 00175E74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80179078 00175E78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8017907C 00175E7C*/ PPC::Runtime::ASM::beq(.L_801790AC);
/*80179080 00175E80*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80179084 00175E84*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80179088 00175E88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0CC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017908C 00175E8C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r6));
/*80179090 00175E90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0CCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80179094 00175E94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80179098 00175E98*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r6));
/*8017909C 00175E9C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801790A0 00175EA0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*801790A4 00175EA4*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*801790A8 00175EA8*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_801790AC, 0x801790AC) //this is a jump label
/*801790AC 00175EAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801790B0 00175EB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801790B4 00175EB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801790B8 00175EB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801790BC 00175EBC*/ PPC::Runtime::ASM::blr();
}