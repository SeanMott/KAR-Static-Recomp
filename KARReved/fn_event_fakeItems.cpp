//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE6CC.hpp"
#include "fn_800EE6C4.hpp"
#include "fn_80254290.hpp"
#include "fn_800ED800.hpp"
#include "fn_800EE660.hpp"



void fn_event_fakeItems(PPC::Runtime::GCContext* context)
{
/*80111A04 0010E804*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80111A08 0010E808*/ PPC::Runtime::ASM::mflr(context->r0);
/*80111A0C 0010E80C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80111A10 0010E810*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80111A14 0010E814*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80111A18 0010E818*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80111A1C 0010E81C*/ PPC::Runtime::ASM::bl(fn_800EE6CC);
/*80111A20 0010E820*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80111A24 0010E824*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80111A28 0010E828*/ PPC::Runtime::ASM::bl(fn_800EE6C4);
/*80111A2C 0010E82C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*80111A30 0010E830*/ PPC::Runtime::ASM::blt(.L_80111A48);
/*80111A34 0010E834*/ PPC::Runtime::ASM::bl(fn_80254290);
/*80111A38 0010E838*/ PPC::Runtime::ASM::li(context->r3, 0xf);
/*80111A3C 0010E83C*/ PPC::Runtime::ASM::bl(fn_800ED800);
/*80111A40 0010E840*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80111A44 0010E844*/ PPC::Runtime::ASM::bl(fn_800EE660);
RUNTIME_PPC_JUMP_LABEL(.L_80111A48, 0x80111A48) //this is a jump label
/*80111A48 0010E848*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80111A4C 0010E84C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80111A50 0010E850*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80111A54 0010E854*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80111A58 0010E858*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80111A5C 0010E85C*/ PPC::Runtime::ASM::blr();
}