//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80066DF8.hpp"
#include "fn_801394B0.hpp"
#include "fn_801394B0.hpp"



void fn_80139B24(PPC::Runtime::GCContext* context)
{
/*80139B24 00136924*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80139B28 00136928*/ PPC::Runtime::ASM::mflr(context->r0);
/*80139B2C 0013692C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139B30 00136930*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80139B34 00136934*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80139B38 00136938*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80139B3C 0013693C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80139B40 00136940*/ PPC::Runtime::ASM::li(context->r3, 0x28);
/*80139B44 00136944*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa44, context->r31));
/*80139B48 00136948*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*80139B4C 0013694C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80139B50 00136950*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80139B54 00136954*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80139B58 00136958*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80139B5C 0013695C*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*80139B60 00136960*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139B64 00136964*/ PPC::Runtime::ASM::mr(context->r30, context->r0);
/*80139B68 00136968*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*80139B6C 0013696C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80139B70 00136970*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80139B74 00136974*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139B78 00136978*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80139B7C 0013697C*/ PPC::Runtime::ASM::lis(context->r4, fn_801394B0 @ Get_MemoryOffset_HighBit);
/*80139B80 00136980*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139B84 00136984*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801394B0 @ Get_MemoryOffset_LowBit);
/*80139B88 00136988*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80139B8C 0013698C*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80139B90 00136990*/ PPC::Runtime::ASM::li(context->r3, 0x11);
/*80139B94 00136994*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80139B98 00136998*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80139B9C 0013699C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80139BA0 001369A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80139BA4 001369A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80139BA8 001369A8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80139BAC 001369AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139BB0 001369B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80139BB4 001369B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80139BB8 001369B8*/ PPC::Runtime::ASM::blr();
}