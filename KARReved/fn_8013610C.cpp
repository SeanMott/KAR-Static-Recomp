//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80163EB8.hpp"
#include "fn_8016411C.hpp"
#include "fn_80163F60.hpp"
#include "fn_801641E0.hpp"



void fn_8013610C(PPC::Runtime::GCContext* context)
{
/*8013610C 00132F0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80136110 00132F10*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136114 00132F14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136118 00132F18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013611C 00132F1C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80136120 00132F20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80136124 00132F24*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80136128 00132F28*/ PPC::Runtime::ASM::bl(fn_80163EB8);
/*8013612C 00132F2C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80136130 00132F30*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80136134 00132F34*/ PPC::Runtime::ASM::bl(fn_8016411C);
/*80136138 00132F38*/ PPC::Runtime::ASM::bl(fn_80163F60);
/*8013613C 00132F3C*/ PPC::Runtime::ASM::bl(fn_801641E0);
/*80136140 00132F40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136144 00132F44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80136148 00132F48*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8013614C 00132F4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136150 00132F50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80136154 00132F54*/ PPC::Runtime::ASM::blr();
}