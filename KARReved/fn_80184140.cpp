//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8017C9C8.hpp"
#include "fn_8017CA00.hpp"



void fn_80184140(PPC::Runtime::GCContext* context)
{
/*80184140 00180F40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80184144 00180F44*/ PPC::Runtime::ASM::mflr(context->r0);
/*80184148 00180F48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018414C 00180F4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80184150 00180F50*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80184154 00180F54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1168, context->r3));
/*80184158 00180F58*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8018415C 00180F5C*/ PPC::Runtime::ASM::beq(.L_80184188);
/*80184160 00180F60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80184164 00180F64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80184168 00180F68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8018416C 00180F6C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*80184170 00180F70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80184174 00180F74*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80184178 00180F78*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*8018417C 00180F7C*/ PPC::Runtime::ASM::bl(fn_8017C9C8);
/*80184180 00180F80*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80184184 00180F84*/ PPC::Runtime::ASM::bl(fn_8017CA00);
RUNTIME_PPC_JUMP_LABEL(.L_80184188, 0x80184188) //this is a jump label
/*80184188 00180F88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018418C 00180F8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80184190 00180F90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80184194 00180F94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80184198 00180F98*/ PPC::Runtime::ASM::blr();
}