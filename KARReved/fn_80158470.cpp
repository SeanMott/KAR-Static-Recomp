//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80155C14.hpp"



void fn_80158470(PPC::Runtime::GCContext* context)
{
/*80158470 00155270*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80158474 00155274*/ PPC::Runtime::ASM::mflr(context->r0);
/*80158478 00155278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015847C 0015527C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80158480 00155280*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80158484 00155284*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80158488 00155288*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8015848C 0015528C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80158490 00155290*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80158494 00155294*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80158498 00155298*/ PPC::Runtime::ASM::bl(fn_80155C14);
/*8015849C 0015529C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801584A0 001552A0*/ PPC::Runtime::ASM::bne(.L_801584B4);
/*801584A4 001552A4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D68C0 @ Get_MemoryOffset_SDA21);
/*801584A8 001552A8*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*801584AC 001552AC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D68C8 @ Get_MemoryOffset_SDA21);
/*801584B0 001552B0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801584B4, 0x801584B4) //this is a jump label
/*801584B4 001552B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801584B8 001552B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801584BC 001552BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*801584C0 001552C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*801584C4 001552C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801584C8 001552C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*801584CC 001552CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801584D0 001552D0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801584D4 001552D4*/ PPC::Runtime::ASM::bne(.L_80158520);
/*801584D8 001552D8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801584DC 001552DC*/ PPC::Runtime::ASM::beq(.L_80158520);
/*801584E0 001552E0*/ PPC::Runtime::ASM::bne(.L_801584F4);
/*801584E4 001552E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D68C0 @ Get_MemoryOffset_SDA21);
/*801584E8 001552E8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801584EC 001552EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D68C8 @ Get_MemoryOffset_SDA21);
/*801584F0 001552F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801584F4, 0x801584F4) //this is a jump label
/*801584F4 001552F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801584F8 001552F8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801584FC 001552FC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80158500 00155300*/ PPC::Runtime::ASM::bne(.L_80158510);
/*80158504 00155304*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80158508 00155308*/ PPC::Runtime::ASM::beq(.L_80158510);
/*8015850C 0015530C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80158510, 0x80158510) //this is a jump label
/*80158510 00155310*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80158514 00155314*/ PPC::Runtime::ASM::bne(.L_80158520);
/*80158518 00155318*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8015851C 0015531C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80158520, 0x80158520) //this is a jump label
/*80158520 00155320*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80158524 00155324*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80158528 00155328*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8015852C 0015532C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80158530 00155330*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80158534 00155334*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80158538 00155338*/ PPC::Runtime::ASM::blr();
}