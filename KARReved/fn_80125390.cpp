//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112058.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"



void fn_80125390(PPC::Runtime::GCContext* context)
{
/*80125390 00122190*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80125394 00122194*/ PPC::Runtime::ASM::mflr(context->r0);
/*80125398 00122198*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012539C 0012219C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801253A0 001221A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801253A4 001221A4*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801253A8 001221A8*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x358);
/*801253AC 001221AC*/ PPC::Runtime::ASM::bl(fn_80112058);
/*801253B0 001221B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801253B4 001221B4*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*801253B8 001221B8*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*801253BC 001221BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*801253C0 001221C0*/ PPC::Runtime::ASM::beq(.L_801253C8);
/*801253C4 001221C4*/ PPC::Runtime::ASM::b(.L_801253E4);
RUNTIME_PPC_JUMP_LABEL(.L_801253C8, 0x801253C8) //this is a jump label
/*801253C8 001221C8*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1086 @ Get_MemoryOffset_HighBit);
/*801253CC 001221CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801253D0 001221D0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1086 @ Get_MemoryOffset_LowBit);
/*801253D4 001221D4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801253D8 001221D8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801253DC 001221DC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801253E0 001221E0*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_801253E4, 0x801253E4) //this is a jump label
/*801253E4 001221E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801253E8 001221E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801253EC 001221EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801253F0 001221F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801253F4 001221F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801253F8 001221F8*/ PPC::Runtime::ASM::blr();
}