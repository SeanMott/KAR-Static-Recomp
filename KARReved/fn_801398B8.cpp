//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80066DF8.hpp"
#include "fn_801394B0.hpp"
#include "fn_801394B0.hpp"



void fn_801398B8(PPC::Runtime::GCContext* context)
{
/*801398B8 001366B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801398BC 001366BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801398C0 001366C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801398C4 001366C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801398C8 001366C8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801398CC 001366CC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801398D0 001366D0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801398D4 001366D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801398D8 001366D8*/ PPC::Runtime::ASM::li(context->r3, 0x28);
/*801398DC 001366DC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7ac, context->r31));
/*801398E0 001366E0*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*801398E4 001366E4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801398E8 001366E8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*801398EC 001366EC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*801398F0 001366F0*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*801398F4 001366F4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801398F8 001366F8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801398FC 001366FC*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*80139900 00136700*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80139904 00136704*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80139908 00136708*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8013990C 0013670C*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80139910 00136710*/ PPC::Runtime::ASM::lis(context->r4, fn_801394B0 @ Get_MemoryOffset_HighBit);
/*80139914 00136714*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139918 00136718*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801394B0 @ Get_MemoryOffset_LowBit);
/*8013991C 0013671C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80139920 00136720*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80139924 00136724*/ PPC::Runtime::ASM::li(context->r3, 0x17);
/*80139928 00136728*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8013992C 0013672C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80139930 00136730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80139934 00136734*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80139938 00136738*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013993C 0013673C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80139940 00136740*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139944 00136744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80139948 00136748*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013994C 0013674C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80139950 00136750*/ PPC::Runtime::ASM::blr();
}