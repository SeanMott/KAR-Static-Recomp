//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80179414.hpp"



void fn_8017A3D8(PPC::Runtime::GCContext* context)
{
/*8017A3D8 001771D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8017A3DC 001771DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8017A3E0 001771E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017A3E4 001771E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017A3E8 001771E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017A3EC 001771EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8017A3F0 001771F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8017A3F4 001771F4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8017A3F8 001771F8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8017A3FC 001771FC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8017A400 00177200*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8017A404 00177204*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*8017A408 00177208*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r31));
/*8017A40C 0017720C*/ PPC::Runtime::ASM::bl(fn_80179414);
/*8017A410 00177210*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8017A414 00177214*/ PPC::Runtime::ASM::bne(.L_8017A428);
/*8017A418 00177218*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DA0 @ Get_MemoryOffset_SDA21);
/*8017A41C 0017721C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8017A420 00177220*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6DA8 @ Get_MemoryOffset_SDA21);
/*8017A424 00177224*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017A428, 0x8017A428) //this is a jump label
/*8017A428 00177228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8017A42C 0017722C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8017A430 00177230*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8017A434 00177234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8017A438 00177238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8017A43C 0017723C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8017A440 00177240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8017A444 00177244*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8017A448 00177248*/ PPC::Runtime::ASM::bne(.L_8017A494);
/*8017A44C 0017724C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8017A450 00177250*/ PPC::Runtime::ASM::beq(.L_8017A494);
/*8017A454 00177254*/ PPC::Runtime::ASM::bne(.L_8017A468);
/*8017A458 00177258*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6DA0 @ Get_MemoryOffset_SDA21);
/*8017A45C 0017725C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8017A460 00177260*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6DA8 @ Get_MemoryOffset_SDA21);
/*8017A464 00177264*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8017A468, 0x8017A468) //this is a jump label
/*8017A468 00177268*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8017A46C 0017726C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8017A470 00177270*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8017A474 00177274*/ PPC::Runtime::ASM::bne(.L_8017A484);
/*8017A478 00177278*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8017A47C 0017727C*/ PPC::Runtime::ASM::beq(.L_8017A484);
/*8017A480 00177280*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8017A484, 0x8017A484) //this is a jump label
/*8017A484 00177284*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8017A488 00177288*/ PPC::Runtime::ASM::bne(.L_8017A494);
/*8017A48C 0017728C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8017A490 00177290*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8017A494, 0x8017A494) //this is a jump label
/*8017A494 00177294*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017A498 00177298*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8017A49C 0017729C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8017A4A0 001772A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8017A4A4 001772A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8017A4A8 001772A8*/ PPC::Runtime::ASM::blr();
}