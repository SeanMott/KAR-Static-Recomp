//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800098C0.hpp"
#include "fn_8011C864.hpp"



void fn_801136A8(PPC::Runtime::GCContext* context)
{
/*801136A8 001104A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801136AC 001104AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801136B0 001104B0*/ PPC::Runtime::ASM::lis(context->r4, lbl_805578B8 @ Get_MemoryOffset_HighBit);
/*801136B4 001104B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801136B8 001104B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801136BC 001104BC*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_805578B8 @ Get_MemoryOffset_LowBit);
/*801136C0 001104C0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801136C4 001104C4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801136C8 001104C8*/ PPC::Runtime::ASM::bl(fn_800098C0);
/*801136CC 001104CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801136D0 001104D0*/ PPC::Runtime::ASM::beq(.L_801136F4);
/*801136D4 001104D4*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r30);
/*801136D8 001104D8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*801136DC 001104DC*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*801136E0 001104E0*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*801136E4 001104E4*/ PPC::Runtime::ASM::beq(.L_801136F4);
/*801136E8 001104E8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801136EC 001104EC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801136F0 001104F0*/ PPC::Runtime::ASM::bl(fn_8011C864);
RUNTIME_PPC_JUMP_LABEL(.L_801136F4, 0x801136F4) //this is a jump label
/*801136F4 001104F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801136F8 001104F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801136FC 001104FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80113700 00110500*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80113704 00110504*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80113708 00110508*/ PPC::Runtime::ASM::blr();
}