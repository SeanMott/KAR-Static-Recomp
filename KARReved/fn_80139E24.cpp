//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80066DF8.hpp"
#include "fn_801394B0.hpp"
#include "fn_801394B0.hpp"



void fn_80139E24(PPC::Runtime::GCContext* context)
{
/*80139E24 00136C24*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80139E28 00136C28*/ PPC::Runtime::ASM::mflr(context->r0);
/*80139E2C 00136C2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139E30 00136C30*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80139E34 00136C34*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80139E38 00136C38*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80139E3C 00136C3C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80139E40 00136C40*/ PPC::Runtime::ASM::li(context->r3, 0x28);
/*80139E44 00136C44*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbb8, context->r31));
/*80139E48 00136C48*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*80139E4C 00136C4C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80139E50 00136C50*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80139E54 00136C54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80139E58 00136C58*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80139E5C 00136C5C*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80139E60 00136C60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139E64 00136C64*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*80139E68 00136C68*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*80139E6C 00136C6C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80139E70 00136C70*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80139E74 00136C74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139E78 00136C78*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80139E7C 00136C7C*/ PPC::Runtime::ASM::lis(context->r4, fn_801394B0 @ Get_MemoryOffset_HighBit);
/*80139E80 00136C80*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139E84 00136C84*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801394B0 @ Get_MemoryOffset_LowBit);
/*80139E88 00136C88*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*80139E8C 00136C8C*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80139E90 00136C90*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*80139E94 00136C94*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80139E98 00136C98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80139E9C 00136C9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80139EA0 00136CA0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc0, context->r31));
/*80139EA4 00136CA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80139EA8 00136CA8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80139EAC 00136CAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139EB0 00136CB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80139EB4 00136CB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80139EB8 00136CB8*/ PPC::Runtime::ASM::blr();
}