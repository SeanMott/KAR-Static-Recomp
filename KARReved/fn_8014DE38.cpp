//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_8014DDC8.hpp"
#include "fn_8014DDC8.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"



void fn_8014DE38(PPC::Runtime::GCContext* context)
{
/*8014DE38 0014AC38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014DE3C 0014AC3C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014DE40 0014AC40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014DE44 0014AC44*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014DE48 0014AC48*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014DE4C 0014AC4C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014DE50 0014AC50*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014DE54 0014AC54*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014DE58 0014AC58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r3));
/*8014DE5C 0014AC5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014DE60 0014AC60*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014DE64 0014AC64*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8014DE68 0014AC68*/ PPC::Runtime::ASM::lis(context->r4, fn_8014DDC8 @ Get_MemoryOffset_HighBit);
/*8014DE6C 0014AC6C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014DE70 0014AC70*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014DE74 0014AC74*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8014DE78 0014AC78*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8014DDC8 @ Get_MemoryOffset_LowBit);
/*8014DE7C 0014AC7C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8014DE80 0014AC80*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x464, context->r31));
/*8014DE84 0014AC84*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8014DE88 0014AC88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0630 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014DE8C 0014AC8C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014DE90 0014AC90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0634 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014DE94 0014AC94*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8014DE98 0014AC98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8014DE9C 0014AC9C*/ PPC::Runtime::ASM::li(context->r4, 0x26);
/*8014DEA0 0014ACA0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8014DEA4 0014ACA4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r31));
/*8014DEA8 0014ACA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014DEAC 0014ACAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014DEB0 0014ACB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8014DEB4 0014ACB4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014DEB8 0014ACB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014DEBC 0014ACBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014DEC0 0014ACC0*/ PPC::Runtime::ASM::blr();
}