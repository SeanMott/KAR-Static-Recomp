//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80131318.hpp"



void fn_801317A8(PPC::Runtime::GCContext* context)
{
/*801317A8 0012E5A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801317AC 0012E5AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801317B0 0012E5B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*801317B4 0012E5B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801317B8 0012E5B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801317BC 0012E5BC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*801317C0 0012E5C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801317C4 0012E5C4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801317C8, 0x801317C8) //this is a jump label
/*801317C8 0012E5C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r31));
/*801317CC 0012E5CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801317D0 0012E5D0*/ PPC::Runtime::ASM::beq(.L_801317DC);
/*801317D4 0012E5D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801317D8 0012E5D8*/ PPC::Runtime::ASM::bl(fn_80131318);
RUNTIME_PPC_JUMP_LABEL(.L_801317DC, 0x801317DC) //this is a jump label
/*801317DC 0012E5DC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801317E0 0012E5E0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801317E4 0012E5E4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x17);
/*801317E8 0012E5E8*/ PPC::Runtime::ASM::blt(.L_801317C8);
/*801317EC 0012E5EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801317F0 0012E5F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801317F4 0012E5F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801317F8 0012E5F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801317FC 0012E5FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80131800 0012E600*/ PPC::Runtime::ASM::blr();
}