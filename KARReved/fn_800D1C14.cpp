//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A98EC.hpp"
#include "fn_800D9E34.hpp"
#include "fn_800A98F0.hpp"



void fn_800D1C14(PPC::Runtime::GCContext* context)
{
/*800D1C14 000CEA14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800D1C18 000CEA18*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D1C1C 000CEA1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D1C20 000CEA20*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D1C24 000CEA24*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800D1C28 000CEA28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1C2C 000CEA2C*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*800D1C30 000CEA30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D1C34 000CEA34*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*800D1C38 000CEA38*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D1C3C 000CEA3C*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800D1C40 000CEA40*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D1C44 000CEA44*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800D1C48 000CEA48*/ PPC::Runtime::ASM::bl(fn_800A98EC);
/*800D1C4C 000CEA4C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D1C50 000CEA50*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800D1C54 000CEA54*/ PPC::Runtime::ASM::fmr(context->f2, context->f31);
/*800D1C58 000CEA58*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800D1C5C 000CEA5C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*800D1C60 000CEA60*/ PPC::Runtime::ASM::mr(context->r8, context->r30);
/*800D1C64 000CEA64*/ PPC::Runtime::ASM::mr(context->r9, context->r31);
/*800D1C68 000CEA68*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x54);
/*800D1C6C 000CEA6C*/ PPC::Runtime::ASM::li(context->r6, 0x7);
/*800D1C70 000CEA70*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*800D1C74 000CEA74*/ PPC::Runtime::ASM::bl(fn_800D9E34);
/*800D1C78 000CEA78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800D1C7C 000CEA7C*/ PPC::Runtime::ASM::bl(fn_800A98F0);
/*800D1C80 000CEA80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800D1C84 000CEA84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D1C88 000CEA88*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800D1C8C 000CEA8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D1C90 000CEA90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800D1C94 000CEA94*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D1C98 000CEA98*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D1C9C 000CEA9C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D1CA0 000CEAA0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800D1CA4 000CEAA4*/ PPC::Runtime::ASM::blr();
}