//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F7A64.hpp"
#include "fn_800F7AB8.hpp"
#include "fn_800F7AD8.hpp"



void fn_800FB4E0(PPC::Runtime::GCContext* context)
{
/*800FB4E0 000F82E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*800FB4E4 000F82E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FB4E8 000F82E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800FB4EC 000F82EC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800FB4F0 000F82F0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800FB4F4 000F82F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800FB4F8 000F82F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800FB4FC 000F82FC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FB500 000F8300*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FB504 000F8304*/ PPC::Runtime::ASM::lis(context->r6, StructValues_Float_7 @ Get_MemoryOffset_HighBit);
/*800FB508 000F8308*/ PPC::Runtime::ASM::lfs(context->f31, StructValues_Float_7 @ Get_MemoryOffset_LowBit ( context->r6 ));
/*800FB50C 000F830C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800FB510 000F8310*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r5));
/*800FB514 000F8314*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800FB518 000F8318*/ PPC::Runtime::ASM::b(.L_800FB588);
RUNTIME_PPC_JUMP_LABEL(.L_800FB51C, 0x800FB51C) //this is a jump label
/*800FB51C 000F831C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800FB520 000F8320*/ PPC::Runtime::ASM::bl(fn_800F7A64);
/*800FB524 000F8324*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x14);
/*800FB528 000F8328*/ PPC::Runtime::ASM::bne(.L_800FB584);
/*800FB52C 000F832C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800FB530 000F8330*/ PPC::Runtime::ASM::bl(fn_800F7AB8);
/*800FB534 000F8334*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*800FB538 000F8338*/ PPC::Runtime::ASM::bge(.L_800FB584);
/*800FB53C 000F833C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FB540 000F8340*/ PPC::Runtime::ASM::bge(.L_800FB548);
/*800FB544 000F8344*/ PPC::Runtime::ASM::b(.L_800FB584);
RUNTIME_PPC_JUMP_LABEL(.L_800FB548, 0x800FB548) //this is a jump label
/*800FB548 000F8348*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800FB54C 000F834C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FB550 000F8350*/ PPC::Runtime::ASM::bl(fn_800F7AD8);
/*800FB554 000F8354*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FB558 000F8358*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FB55C 000F835C*/ PPC::Runtime::ASM::bl(fn_803D22F4);
/*800FB560 000F8360*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*800FB564 000F8364*/ PPC::Runtime::ASM::bge(.L_800FB584);
/*800FB568 000F8368*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FB56C 000F836C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*800FB570 000F8370*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FB574 000F8374*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800FB578 000F8378*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800FB57C 000F837C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800FB580 000F8380*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_800FB584, 0x800FB584) //this is a jump label
/*800FB584 000F8384*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800FB588, 0x800FB588) //this is a jump label
/*800FB588 000F8388*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800FB58C 000F838C*/ PPC::Runtime::ASM::bne(.L_800FB51C);
/*800FB590 000F8390*/ PPC::Runtime::ASM::lis(context->r3, StructValues_Float_7 @ Get_MemoryOffset_HighBit);
/*800FB594 000F8394*/ PPC::Runtime::ASM::lfs(context->f0, StructValues_Float_7 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*800FB598 000F8398*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*800FB59C 000F839C*/ PPC::Runtime::ASM::bge(.L_800FB5A8);
/*800FB5A0 000F83A0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800FB5A4 000F83A4*/ PPC::Runtime::ASM::b(.L_800FB5AC);
RUNTIME_PPC_JUMP_LABEL(.L_800FB5A8, 0x800FB5A8) //this is a jump label
/*800FB5A8 000F83A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FB5AC, 0x800FB5AC) //this is a jump label
/*800FB5AC 000F83AC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*800FB5B0 000F83B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800FB5B4 000F83B4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800FB5B8 000F83B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800FB5BC 000F83BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800FB5C0 000F83C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800FB5C4 000F83C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FB5C8 000F83C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*800FB5CC 000F83CC*/ PPC::Runtime::ASM::blr();
}